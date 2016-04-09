// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BoardDrawLine.proto

#ifndef PROTOBUF_BoardDrawLine_2eproto__INCLUDED
#define PROTOBUF_BoardDrawLine_2eproto__INCLUDED

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
#include "MetroPointXY.pb.h"
// @@protoc_insertion_point(includes)

namespace METRO {
namespace CRO {
namespace MESSAGES {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_BoardDrawLine_2eproto();
void protobuf_AssignDesc_BoardDrawLine_2eproto();
void protobuf_ShutdownFile_BoardDrawLine_2eproto();

class BoardDrawLine;

// ===================================================================

class BoardDrawLine : public ::google::protobuf::Message {
 public:
  BoardDrawLine();
  virtual ~BoardDrawLine();

  BoardDrawLine(const BoardDrawLine& from);

  inline BoardDrawLine& operator=(const BoardDrawLine& from) {
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
  static const BoardDrawLine& default_instance();

  void Swap(BoardDrawLine* other);

  // implements Message ----------------------------------------------

  BoardDrawLine* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BoardDrawLine& from);
  void MergeFrom(const BoardDrawLine& from);
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

  // optional int32 lineid = 1;
  inline bool has_lineid() const;
  inline void clear_lineid();
  static const int kLineidFieldNumber = 1;
  inline ::google::protobuf::int32 lineid() const;
  inline void set_lineid(::google::protobuf::int32 value);

  // repeated .METRO.CRO.MESSAGES.MetroPointXY points = 2;
  inline int points_size() const;
  inline void clear_points();
  static const int kPointsFieldNumber = 2;
  inline const ::METRO::CRO::MESSAGES::MetroPointXY& points(int index) const;
  inline ::METRO::CRO::MESSAGES::MetroPointXY* mutable_points(int index);
  inline ::METRO::CRO::MESSAGES::MetroPointXY* add_points();
  inline const ::google::protobuf::RepeatedPtrField< ::METRO::CRO::MESSAGES::MetroPointXY >&
      points() const;
  inline ::google::protobuf::RepeatedPtrField< ::METRO::CRO::MESSAGES::MetroPointXY >*
      mutable_points();

  // @@protoc_insertion_point(class_scope:METRO.CRO.MESSAGES.BoardDrawLine)
 private:
  inline void set_has_lineid();
  inline void clear_has_lineid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::METRO::CRO::MESSAGES::MetroPointXY > points_;
  ::google::protobuf::int32 lineid_;
  friend void  protobuf_AddDesc_BoardDrawLine_2eproto();
  friend void protobuf_AssignDesc_BoardDrawLine_2eproto();
  friend void protobuf_ShutdownFile_BoardDrawLine_2eproto();

  void InitAsDefaultInstance();
  static BoardDrawLine* default_instance_;
};
// ===================================================================


// ===================================================================

// BoardDrawLine

// optional int32 lineid = 1;
inline bool BoardDrawLine::has_lineid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BoardDrawLine::set_has_lineid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BoardDrawLine::clear_has_lineid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BoardDrawLine::clear_lineid() {
  lineid_ = 0;
  clear_has_lineid();
}
inline ::google::protobuf::int32 BoardDrawLine::lineid() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.BoardDrawLine.lineid)
  return lineid_;
}
inline void BoardDrawLine::set_lineid(::google::protobuf::int32 value) {
  set_has_lineid();
  lineid_ = value;
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.BoardDrawLine.lineid)
}

// repeated .METRO.CRO.MESSAGES.MetroPointXY points = 2;
inline int BoardDrawLine::points_size() const {
  return points_.size();
}
inline void BoardDrawLine::clear_points() {
  points_.Clear();
}
inline const ::METRO::CRO::MESSAGES::MetroPointXY& BoardDrawLine::points(int index) const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.BoardDrawLine.points)
  return points_.Get(index);
}
inline ::METRO::CRO::MESSAGES::MetroPointXY* BoardDrawLine::mutable_points(int index) {
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.BoardDrawLine.points)
  return points_.Mutable(index);
}
inline ::METRO::CRO::MESSAGES::MetroPointXY* BoardDrawLine::add_points() {
  // @@protoc_insertion_point(field_add:METRO.CRO.MESSAGES.BoardDrawLine.points)
  return points_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::METRO::CRO::MESSAGES::MetroPointXY >&
BoardDrawLine::points() const {
  // @@protoc_insertion_point(field_list:METRO.CRO.MESSAGES.BoardDrawLine.points)
  return points_;
}
inline ::google::protobuf::RepeatedPtrField< ::METRO::CRO::MESSAGES::MetroPointXY >*
BoardDrawLine::mutable_points() {
  // @@protoc_insertion_point(field_mutable_list:METRO.CRO.MESSAGES.BoardDrawLine.points)
  return &points_;
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

#endif  // PROTOBUF_BoardDrawLine_2eproto__INCLUDED