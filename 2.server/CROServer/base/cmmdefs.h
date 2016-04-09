#ifndef CMMDEFS_H
#define CMMDEFS_H

#define _DELETE_PTR(pointer)\
{\
    if (pointer)\
    {\
       delete pointer;\
       pointer = nullptr;\
    }\
}

#endif // CMMDEFS_H
