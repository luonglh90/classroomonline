// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ResponseLogin.proto

#ifndef PROTOBUF_ResponseLogin_2eproto__INCLUDED
#define PROTOBUF_ResponseLogin_2eproto__INCLUDED

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
#include "IpcMessage.pb.h"
// @@protoc_insertion_point(includes)

namespace METRO {
namespace CRO {
namespace MESSAGES {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ResponseLogin_2eproto();
void protobuf_AssignDesc_ResponseLogin_2eproto();
void protobuf_ShutdownFile_ResponseLogin_2eproto();

class ResponseLogin;

// ===================================================================

class ResponseLogin : public ::google::protobuf::Message {
 public:
  ResponseLogin();
  virtual ~ResponseLogin();

  ResponseLogin(const ResponseLogin& from);

  inline ResponseLogin& operator=(const ResponseLogin& from) {
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
  static const ResponseLogin& default_instance();

  void Swap(ResponseLogin* other);

  // implements Message ----------------------------------------------

  ResponseLogin* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResponseLogin& from);
  void MergeFrom(const ResponseLogin& from);
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

  // optional string username = 1;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 1;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // optional int32 status = 2;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 2;
  inline ::google::protobuf::int32 status() const;
  inline void set_status(::google::protobuf::int32 value);

  static const int kMessageFieldNumber = 107;
  static ::google::protobuf::internal::ExtensionIdentifier< ::METRO::CRO::MESSAGES::IpcMessage,
      ::google::protobuf::internal::MessageTypeTraits< ::METRO::CRO::MESSAGES::ResponseLogin >, 11, false >
    message;
  // @@protoc_insertion_point(class_scope:METRO.CRO.MESSAGES.ResponseLogin)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_status();
  inline void clear_has_status();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* username_;
  ::google::protobuf::int32 status_;
  friend void  protobuf_AddDesc_ResponseLogin_2eproto();
  friend void protobuf_AssignDesc_ResponseLogin_2eproto();
  friend void protobuf_ShutdownFile_ResponseLogin_2eproto();

  void InitAsDefaultInstance();
  static ResponseLogin* default_instance_;
};
// ===================================================================


// ===================================================================

// ResponseLogin

// optional string username = 1;
inline bool ResponseLogin::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ResponseLogin::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ResponseLogin::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ResponseLogin::clear_username() {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& ResponseLogin::username() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ResponseLogin.username)
  return *username_;
}
inline void ResponseLogin::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ResponseLogin.username)
}
inline void ResponseLogin::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.ResponseLogin.username)
}
inline void ResponseLogin::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.ResponseLogin.username)
}
inline ::std::string* ResponseLogin::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.ResponseLogin.username)
  return username_;
}
inline ::std::string* ResponseLogin::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ResponseLogin::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.ResponseLogin.username)
}

// optional int32 status = 2;
inline bool ResponseLogin::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ResponseLogin::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ResponseLogin::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ResponseLogin::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::google::protobuf::int32 ResponseLogin::status() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ResponseLogin.status)
  return status_;
}
inline void ResponseLogin::set_status(::google::protobuf::int32 value) {
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ResponseLogin.status)
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

#endif  // PROTOBUF_ResponseLogin_2eproto__INCLUDED
