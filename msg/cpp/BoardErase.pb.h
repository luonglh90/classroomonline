// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BoardErase.proto

#ifndef PROTOBUF_BoardErase_2eproto__INCLUDED
#define PROTOBUF_BoardErase_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace METRO {
namespace CRO {
namespace MESSAGES {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_BoardErase_2eproto();
void protobuf_AssignDesc_BoardErase_2eproto();
void protobuf_ShutdownFile_BoardErase_2eproto();

class BoardErase;

// ===================================================================

class BoardErase : public ::google::protobuf::Message {
 public:
  BoardErase();
  virtual ~BoardErase();

  BoardErase(const BoardErase& from);

  inline BoardErase& operator=(const BoardErase& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BoardErase& default_instance();

  void Swap(BoardErase* other);

  // implements Message ----------------------------------------------

  BoardErase* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BoardErase& from);
  void MergeFrom(const BoardErase& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 lineid = 1;
  inline bool has_lineid() const;
  inline void clear_lineid();
  static const int kLineidFieldNumber = 1;
  inline ::google::protobuf::int32 lineid() const;
  inline void set_lineid(::google::protobuf::int32 value);

  // optional int32 classid = 2;
  inline bool has_classid() const;
  inline void clear_classid();
  static const int kClassidFieldNumber = 2;
  inline ::google::protobuf::int32 classid() const;
  inline void set_classid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:METRO.CRO.MESSAGES.BoardErase)
 private:
  inline void set_has_lineid();
  inline void clear_has_lineid();
  inline void set_has_classid();
  inline void clear_has_classid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 lineid_;
  ::google::protobuf::int32 classid_;
  friend void  protobuf_AddDesc_BoardErase_2eproto();
  friend void protobuf_AssignDesc_BoardErase_2eproto();
  friend void protobuf_ShutdownFile_BoardErase_2eproto();

  void InitAsDefaultInstance();
  static BoardErase* default_instance_;
};
// ===================================================================


// ===================================================================

// BoardErase

// required int32 lineid = 1;
inline bool BoardErase::has_lineid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BoardErase::set_has_lineid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BoardErase::clear_has_lineid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BoardErase::clear_lineid() {
  lineid_ = 0;
  clear_has_lineid();
}
inline ::google::protobuf::int32 BoardErase::lineid() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.BoardErase.lineid)
  return lineid_;
}
inline void BoardErase::set_lineid(::google::protobuf::int32 value) {
  set_has_lineid();
  lineid_ = value;
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.BoardErase.lineid)
}

// optional int32 classid = 2;
inline bool BoardErase::has_classid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BoardErase::set_has_classid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BoardErase::clear_has_classid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BoardErase::clear_classid() {
  classid_ = 0;
  clear_has_classid();
}
inline ::google::protobuf::int32 BoardErase::classid() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.BoardErase.classid)
  return classid_;
}
inline void BoardErase::set_classid(::google::protobuf::int32 value) {
  set_has_classid();
  classid_ = value;
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.BoardErase.classid)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BoardErase_2eproto__INCLUDED
