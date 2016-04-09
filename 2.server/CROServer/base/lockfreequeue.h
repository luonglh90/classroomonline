#ifndef LOCKFREEQUEUE_H
#define LOCKFREEQUEUE_H

#include <QtCore/QThread>
#include <QtCore/QAtomicInt>
#include <QtCore/QAtomicPointer>

#define nullptr 0

template <typename T>
struct LockFreeQueue {
private:
    struct Node {
        Node( T* val ) : value(val), next(nullptr) { }
        T* value;
        QAtomicPointer<Node> next;
    };

    // for one consumer at a time
    QAtomicPointer<Node> first;

    // shared among consumers
    QAtomicInt consumerLock;

    // for one producer at a time
    QAtomicPointer<Node> last;

    // shared among producers
    QAtomicInt producerLock;

    //length
    int length;
public:
    LockFreeQueue()
        : producerLock(0)
        , consumerLock(0)
        , length(0)
    {
        first = last = new Node( nullptr );
    }

    ~LockFreeQueue() {
        /* have to assume there are no others producing or consuming ! */
        while( first) {      // release the list
            Node* tmp = first;
            first = tmp->next;
            delete tmp->value;       // no-op if null
            delete tmp;
        }
    }

    void enqueue( const T& t ) {
        Node* tmp = new Node( new T(t) );
        while( !producerLock.testAndSetOrdered(0,1) ) {
            // acquire exclusivity
            QThread::yieldCurrentThread();
        }
        last.load()->next.fetchAndStoreOrdered(tmp);         // publish to consumers
        last.fetchAndStoreOrdered(tmp);             // swing last forward
        producerLock.fetchAndStoreOrdered(0);       // release exclusivity
        length++;
    }

    T dequeue() {
        T result;
        while( !consumerLock.testAndSetOrdered(0,1) ) {
            // acquire exclusivity
            QThread::yieldCurrentThread();
        }
        Node* theFirst = first;
        Node* theNext = theFirst->next;
        if( theNext != nullptr ) {   // if queue is nonempty
            T* val = theNext->value;    // take it out
            theNext->value = nullptr;  // of the Node
            first.fetchAndStoreOrdered(theNext);          // swing first forward
            consumerLock.fetchAndStoreOrdered(0);             // release exclusivity
            result = *val;    // now copy it back
            delete val;       // clean up the value
            delete theFirst;      // and the old dummy
            length--;
            return result;
        }
        consumerLock.fetchAndStoreOrdered(0);   // release exclusivity
        return NULL;
    }

    int size(){
        return length;
    }
};

#undef nullptr  //dont want to affect other code with our crappy nullptr
#endif // LOCKFREEQUEUE_H
