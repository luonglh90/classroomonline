// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserInit.proto

#ifndef PROTOBUF_UserInit_2eproto__INCLUDED
#define PROTOBUF_UserInit_2eproto__INCLUDED

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
#include "User.pb.h"
#include "ClassCategory.pb.h"
// @@protoc_insertion_point(includes)

namespace METRO {
namespace CRO {
namespace MESSAGES {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_UserInit_2eproto();
void protobuf_AssignDesc_UserInit_2eproto();
void protobuf_ShutdownFile_UserInit_2eproto();

class UserInit;

// ===================================================================

class UserInit : public ::google::protobuf::Message {
 public:
  UserInit();
  virtual ~UserInit();

  UserInit(const UserInit& from);

  inline UserInit& operator=(const UserInit& from) {
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
  static const UserInit& default_instance();

  void Swap(UserInit* other);

  // implements Message ----------------------------------------------

  UserInit* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserInit& from);
  void MergeFrom(const UserInit& from);
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

  // required .METRO.CRO.MESSAGES.User userinfo = 1;
  inline bool has_userinfo() const;
  inline void clear_userinfo();
  static const int kUserinfoFieldNumber = 1;
  inline const ::METRO::CRO::MESSAGES::User& userinfo() const;
  inline ::METRO::CRO::MESSAGES::User* mutable_userinfo();
  inline ::METRO::CRO::MESSAGES::User* release_userinfo();
  inline void set_allocated_userinfo(::METRO::CRO::MESSAGES::User* userinfo);

  // repeated .METRO.CRO.MESSAGES.ClassCategory categories = 2;
  inline int categories_size() const;
  inline void clear_categories();
  static const int kCategoriesFieldNumber = 2;
  inline const ::METRO::CRO::MESSAGES::ClassCategory& categories(int index) const;
  inline ::METRO::CRO::MESSAGES::ClassCategory* mutable_categories(int index);
  inline ::METRO::CRO::MESSAGES::ClassCategory* add_categories();
  inline const ::google::protobuf::RepeatedPtrField< ::METRO::CRO::MESSAGES::ClassCategory >&
      categories() const;
  inline ::google::protobuf::RepeatedPtrField< ::METRO::CRO::MESSAGES::ClassCategory >*
      mutable_categories();

  static const int kMessageFieldNumber = 109;
  static ::google::protobuf::internal::ExtensionIdentifier< ::METRO::CRO::MESSAGES::IpcMessage,
      ::google::protobuf::internal::MessageTypeTraits< ::METRO::CRO::MESSAGES::UserInit >, 11, false >
    message;
  // @@protoc_insertion_point(class_scope:METRO.CRO.MESSAGES.UserInit)
 private:
  inline void set_has_userinfo();
  inline void clear_has_userinfo();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::METRO::CRO::MESSAGES::User* userinfo_;
  ::google::protobuf::RepeatedPtrField< ::METRO::CRO::MESSAGES::ClassCategory > categories_;
  friend void  protobuf_AddDesc_UserInit_2eproto();
  friend void protobuf_AssignDesc_UserInit_2eproto();
  friend void protobuf_ShutdownFile_UserInit_2eproto();

  void InitAsDefaultInstance();
  static UserInit* default_instance_;
};
// ===================================================================


// ===================================================================

// UserInit

// required .METRO.CRO.MESSAGES.User userinfo = 1;
inline bool UserInit::has_userinfo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserInit::set_has_userinfo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserInit::clear_has_userinfo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserInit::clear_userinfo() {
  if (userinfo_ != NULL) userinfo_->::METRO::CRO::MESSAGES::User::Clear();
  clear_has_userinfo();
}
inline const ::METRO::CRO::MESSAGES::User& UserInit::userinfo() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.UserInit.userinfo)
  return userinfo_ != NULL ? *userinfo_ : *default_instance_->userinfo_;
}
inline ::METRO::CRO::MESSAGES::User* UserInit::mutable_userinfo() {
  set_has_userinfo();
  if (userinfo_ == NULL) userinfo_ = new ::METRO::CRO::MESSAGES::User;
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.UserInit.userinfo)
  return userinfo_;
}
inline ::METRO::CRO::MESSAGES::User* UserInit::release_userinfo() {
  clear_has_userinfo();
  ::METRO::CRO::MESSAGES::User* temp = userinfo_;
  userinfo_ = NULL;
  return temp;
}
inline void UserInit::set_allocated_userinfo(::METRO::CRO::MESSAGES::User* userinfo) {
  delete userinfo_;
  userinfo_ = userinfo;
  if (userinfo) {
    set_has_userinfo();
  } else {
    clear_has_userinfo();
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.UserInit.userinfo)
}

// repeated .METRO.CRO.MESSAGES.ClassCategory categories = 2;
inline int UserInit::categories_size() const {
  return categories_.size();
}
inline void UserInit::clear_categories() {
  categories_.Clear();
}
inline const ::METRO::CRO::MESSAGES::ClassCategory& UserInit::categories(int index) const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.UserInit.categories)
  return categories_.Get(index);
}
inline ::METRO::CRO::MESSAGES::ClassCategory* UserInit::mutable_categories(int index) {
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.UserInit.categories)
  return categories_.Mutable(index);
}
inline ::METRO::CRO::MESSAGES::ClassCategory* UserInit::add_categories() {
  // @@protoc_insertion_point(field_add:METRO.CRO.MESSAGES.UserInit.categories)
  return categories_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::METRO::CRO::MESSAGES::ClassCategory >&
UserInit::categories() const {
  // @@protoc_insertion_point(field_list:METRO.CRO.MESSAGES.UserInit.categories)
  return categories_;
}
inline ::google::protobuf::RepeatedPtrField< ::METRO::CRO::MESSAGES::ClassCategory >*
UserInit::mutable_categories() {
  // @@protoc_insertion_point(field_mutable_list:METRO.CRO.MESSAGES.UserInit.categories)
  return &categories_;
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

#endif  // PROTOBUF_UserInit_2eproto__INCLUDED
