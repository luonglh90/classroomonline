// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IpcMessage.proto

#ifndef PROTOBUF_IpcMessage_2eproto__INCLUDED
#define PROTOBUF_IpcMessage_2eproto__INCLUDED

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
void  protobuf_AddDesc_IpcMessage_2eproto();
void protobuf_AssignDesc_IpcMessage_2eproto();
void protobuf_ShutdownFile_IpcMessage_2eproto();

class IpcMessage;

// ===================================================================

class IpcMessage : public ::google::protobuf::Message {
 public:
  IpcMessage();
  virtual ~IpcMessage();

  IpcMessage(const IpcMessage& from);

  inline IpcMessage& operator=(const IpcMessage& from) {
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
  static const IpcMessage& default_instance();

  void Swap(IpcMessage* other);

  // implements Message ----------------------------------------------

  IpcMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IpcMessage& from);
  void MergeFrom(const IpcMessage& from);
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

  // required int32 msgId = 1;
  inline bool has_msgid() const;
  inline void clear_msgid();
  static const int kMsgIdFieldNumber = 1;
  inline ::google::protobuf::int32 msgid() const;
  inline void set_msgid(::google::protobuf::int32 value);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(IpcMessage)
  // @@protoc_insertion_point(class_scope:METRO.CRO.MESSAGES.IpcMessage)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 msgid_;
  friend void  protobuf_AddDesc_IpcMessage_2eproto();
  friend void protobuf_AssignDesc_IpcMessage_2eproto();
  friend void protobuf_ShutdownFile_IpcMessage_2eproto();

  void InitAsDefaultInstance();
  static IpcMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// IpcMessage

// required int32 msgId = 1;
inline bool IpcMessage::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IpcMessage::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IpcMessage::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IpcMessage::clear_msgid() {
  msgid_ = 0;
  clear_has_msgid();
}
inline ::google::protobuf::int32 IpcMessage::msgid() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.IpcMessage.msgId)
  return msgid_;
}
inline void IpcMessage::set_msgid(::google::protobuf::int32 value) {
  set_has_msgid();
  msgid_ = value;
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.IpcMessage.msgId)
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

#endif  // PROTOBUF_IpcMessage_2eproto__INCLUDED