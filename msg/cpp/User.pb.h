// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: User.proto

#ifndef PROTOBUF_User_2eproto__INCLUDED
#define PROTOBUF_User_2eproto__INCLUDED

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
void  protobuf_AddDesc_User_2eproto();
void protobuf_AssignDesc_User_2eproto();
void protobuf_ShutdownFile_User_2eproto();

class User;

// ===================================================================

class User : public ::google::protobuf::Message {
 public:
  User();
  virtual ~User();

  User(const User& from);

  inline User& operator=(const User& from) {
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
  static const User& default_instance();

  void Swap(User* other);

  // implements Message ----------------------------------------------

  User* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const User& from);
  void MergeFrom(const User& from);
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

  // required string username = 1;
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

  // required string email = 2;
  inline bool has_email() const;
  inline void clear_email();
  static const int kEmailFieldNumber = 2;
  inline const ::std::string& email() const;
  inline void set_email(const ::std::string& value);
  inline void set_email(const char* value);
  inline void set_email(const char* value, size_t size);
  inline ::std::string* mutable_email();
  inline ::std::string* release_email();
  inline void set_allocated_email(::std::string* email);

  // optional string fullname = 3;
  inline bool has_fullname() const;
  inline void clear_fullname();
  static const int kFullnameFieldNumber = 3;
  inline const ::std::string& fullname() const;
  inline void set_fullname(const ::std::string& value);
  inline void set_fullname(const char* value);
  inline void set_fullname(const char* value, size_t size);
  inline ::std::string* mutable_fullname();
  inline ::std::string* release_fullname();
  inline void set_allocated_fullname(::std::string* fullname);

  // required string yearofborn = 4;
  inline bool has_yearofborn() const;
  inline void clear_yearofborn();
  static const int kYearofbornFieldNumber = 4;
  inline const ::std::string& yearofborn() const;
  inline void set_yearofborn(const ::std::string& value);
  inline void set_yearofborn(const char* value);
  inline void set_yearofborn(const char* value, size_t size);
  inline ::std::string* mutable_yearofborn();
  inline ::std::string* release_yearofborn();
  inline void set_allocated_yearofborn(::std::string* yearofborn);

  // optional string imgurl = 5;
  inline bool has_imgurl() const;
  inline void clear_imgurl();
  static const int kImgurlFieldNumber = 5;
  inline const ::std::string& imgurl() const;
  inline void set_imgurl(const ::std::string& value);
  inline void set_imgurl(const char* value);
  inline void set_imgurl(const char* value, size_t size);
  inline ::std::string* mutable_imgurl();
  inline ::std::string* release_imgurl();
  inline void set_allocated_imgurl(::std::string* imgurl);

  // optional string password = 6;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 6;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  static const int kMessageFieldNumber = 101;
  static ::google::protobuf::internal::ExtensionIdentifier< ::METRO::CRO::MESSAGES::IpcMessage,
      ::google::protobuf::internal::MessageTypeTraits< ::METRO::CRO::MESSAGES::User >, 11, false >
    message;
  // @@protoc_insertion_point(class_scope:METRO.CRO.MESSAGES.User)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_email();
  inline void clear_has_email();
  inline void set_has_fullname();
  inline void clear_has_fullname();
  inline void set_has_yearofborn();
  inline void clear_has_yearofborn();
  inline void set_has_imgurl();
  inline void clear_has_imgurl();
  inline void set_has_password();
  inline void clear_has_password();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* username_;
  ::std::string* email_;
  ::std::string* fullname_;
  ::std::string* yearofborn_;
  ::std::string* imgurl_;
  ::std::string* password_;
  friend void  protobuf_AddDesc_User_2eproto();
  friend void protobuf_AssignDesc_User_2eproto();
  friend void protobuf_ShutdownFile_User_2eproto();

  void InitAsDefaultInstance();
  static User* default_instance_;
};
// ===================================================================


// ===================================================================

// User

// required string username = 1;
inline bool User::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void User::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void User::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void User::clear_username() {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& User::username() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.User.username)
  return *username_;
}
inline void User::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.User.username)
}
inline void User::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.User.username)
}
inline void User::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.User.username)
}
inline ::std::string* User::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.User.username)
  return username_;
}
inline ::std::string* User::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void User::set_allocated_username(::std::string* username) {
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
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.User.username)
}

// required string email = 2;
inline bool User::has_email() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void User::set_has_email() {
  _has_bits_[0] |= 0x00000002u;
}
inline void User::clear_has_email() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void User::clear_email() {
  if (email_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_->clear();
  }
  clear_has_email();
}
inline const ::std::string& User::email() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.User.email)
  return *email_;
}
inline void User::set_email(const ::std::string& value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.User.email)
}
inline void User::set_email(const char* value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.User.email)
}
inline void User::set_email(const char* value, size_t size) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.User.email)
}
inline ::std::string* User::mutable_email() {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.User.email)
  return email_;
}
inline ::std::string* User::release_email() {
  clear_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = email_;
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void User::set_allocated_email(::std::string* email) {
  if (email_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete email_;
  }
  if (email) {
    set_has_email();
    email_ = email;
  } else {
    clear_has_email();
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.User.email)
}

// optional string fullname = 3;
inline bool User::has_fullname() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void User::set_has_fullname() {
  _has_bits_[0] |= 0x00000004u;
}
inline void User::clear_has_fullname() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void User::clear_fullname() {
  if (fullname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    fullname_->clear();
  }
  clear_has_fullname();
}
inline const ::std::string& User::fullname() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.User.fullname)
  return *fullname_;
}
inline void User::set_fullname(const ::std::string& value) {
  set_has_fullname();
  if (fullname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    fullname_ = new ::std::string;
  }
  fullname_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.User.fullname)
}
inline void User::set_fullname(const char* value) {
  set_has_fullname();
  if (fullname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    fullname_ = new ::std::string;
  }
  fullname_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.User.fullname)
}
inline void User::set_fullname(const char* value, size_t size) {
  set_has_fullname();
  if (fullname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    fullname_ = new ::std::string;
  }
  fullname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.User.fullname)
}
inline ::std::string* User::mutable_fullname() {
  set_has_fullname();
  if (fullname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    fullname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.User.fullname)
  return fullname_;
}
inline ::std::string* User::release_fullname() {
  clear_has_fullname();
  if (fullname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = fullname_;
    fullname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void User::set_allocated_fullname(::std::string* fullname) {
  if (fullname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete fullname_;
  }
  if (fullname) {
    set_has_fullname();
    fullname_ = fullname;
  } else {
    clear_has_fullname();
    fullname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.User.fullname)
}

// required string yearofborn = 4;
inline bool User::has_yearofborn() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void User::set_has_yearofborn() {
  _has_bits_[0] |= 0x00000008u;
}
inline void User::clear_has_yearofborn() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void User::clear_yearofborn() {
  if (yearofborn_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    yearofborn_->clear();
  }
  clear_has_yearofborn();
}
inline const ::std::string& User::yearofborn() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.User.yearofborn)
  return *yearofborn_;
}
inline void User::set_yearofborn(const ::std::string& value) {
  set_has_yearofborn();
  if (yearofborn_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    yearofborn_ = new ::std::string;
  }
  yearofborn_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.User.yearofborn)
}
inline void User::set_yearofborn(const char* value) {
  set_has_yearofborn();
  if (yearofborn_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    yearofborn_ = new ::std::string;
  }
  yearofborn_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.User.yearofborn)
}
inline void User::set_yearofborn(const char* value, size_t size) {
  set_has_yearofborn();
  if (yearofborn_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    yearofborn_ = new ::std::string;
  }
  yearofborn_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.User.yearofborn)
}
inline ::std::string* User::mutable_yearofborn() {
  set_has_yearofborn();
  if (yearofborn_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    yearofborn_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.User.yearofborn)
  return yearofborn_;
}
inline ::std::string* User::release_yearofborn() {
  clear_has_yearofborn();
  if (yearofborn_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = yearofborn_;
    yearofborn_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void User::set_allocated_yearofborn(::std::string* yearofborn) {
  if (yearofborn_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete yearofborn_;
  }
  if (yearofborn) {
    set_has_yearofborn();
    yearofborn_ = yearofborn;
  } else {
    clear_has_yearofborn();
    yearofborn_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.User.yearofborn)
}

// optional string imgurl = 5;
inline bool User::has_imgurl() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void User::set_has_imgurl() {
  _has_bits_[0] |= 0x00000010u;
}
inline void User::clear_has_imgurl() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void User::clear_imgurl() {
  if (imgurl_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    imgurl_->clear();
  }
  clear_has_imgurl();
}
inline const ::std::string& User::imgurl() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.User.imgurl)
  return *imgurl_;
}
inline void User::set_imgurl(const ::std::string& value) {
  set_has_imgurl();
  if (imgurl_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    imgurl_ = new ::std::string;
  }
  imgurl_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.User.imgurl)
}
inline void User::set_imgurl(const char* value) {
  set_has_imgurl();
  if (imgurl_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    imgurl_ = new ::std::string;
  }
  imgurl_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.User.imgurl)
}
inline void User::set_imgurl(const char* value, size_t size) {
  set_has_imgurl();
  if (imgurl_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    imgurl_ = new ::std::string;
  }
  imgurl_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.User.imgurl)
}
inline ::std::string* User::mutable_imgurl() {
  set_has_imgurl();
  if (imgurl_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    imgurl_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.User.imgurl)
  return imgurl_;
}
inline ::std::string* User::release_imgurl() {
  clear_has_imgurl();
  if (imgurl_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = imgurl_;
    imgurl_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void User::set_allocated_imgurl(::std::string* imgurl) {
  if (imgurl_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete imgurl_;
  }
  if (imgurl) {
    set_has_imgurl();
    imgurl_ = imgurl;
  } else {
    clear_has_imgurl();
    imgurl_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.User.imgurl)
}

// optional string password = 6;
inline bool User::has_password() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void User::set_has_password() {
  _has_bits_[0] |= 0x00000020u;
}
inline void User::clear_has_password() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void User::clear_password() {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& User::password() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.User.password)
  return *password_;
}
inline void User::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.User.password)
}
inline void User::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.User.password)
}
inline void User::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.User.password)
}
inline ::std::string* User::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.User.password)
  return password_;
}
inline ::std::string* User::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void User::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.User.password)
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

#endif  // PROTOBUF_User_2eproto__INCLUDED
