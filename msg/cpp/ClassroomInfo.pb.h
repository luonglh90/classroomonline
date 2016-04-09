// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClassroomInfo.proto

#ifndef PROTOBUF_ClassroomInfo_2eproto__INCLUDED
#define PROTOBUF_ClassroomInfo_2eproto__INCLUDED

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
#include "Teacher.pb.h"
// @@protoc_insertion_point(includes)

namespace METRO {
namespace CRO {
namespace MESSAGES {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ClassroomInfo_2eproto();
void protobuf_AssignDesc_ClassroomInfo_2eproto();
void protobuf_ShutdownFile_ClassroomInfo_2eproto();

class ClassroomInfo;

// ===================================================================

class ClassroomInfo : public ::google::protobuf::Message {
 public:
  ClassroomInfo();
  virtual ~ClassroomInfo();

  ClassroomInfo(const ClassroomInfo& from);

  inline ClassroomInfo& operator=(const ClassroomInfo& from) {
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
  static const ClassroomInfo& default_instance();

  void Swap(ClassroomInfo* other);

  // implements Message ----------------------------------------------

  ClassroomInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ClassroomInfo& from);
  void MergeFrom(const ClassroomInfo& from);
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

  // required int32 u_id = 1;
  inline bool has_u_id() const;
  inline void clear_u_id();
  static const int kUIdFieldNumber = 1;
  inline ::google::protobuf::int32 u_id() const;
  inline void set_u_id(::google::protobuf::int32 value);

  // required int32 cate_id = 2;
  inline bool has_cate_id() const;
  inline void clear_cate_id();
  static const int kCateIdFieldNumber = 2;
  inline ::google::protobuf::int32 cate_id() const;
  inline void set_cate_id(::google::protobuf::int32 value);

  // required string name = 3;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 3;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required .METRO.CRO.MESSAGES.Teacher teacher = 4;
  inline bool has_teacher() const;
  inline void clear_teacher();
  static const int kTeacherFieldNumber = 4;
  inline const ::METRO::CRO::MESSAGES::Teacher& teacher() const;
  inline ::METRO::CRO::MESSAGES::Teacher* mutable_teacher();
  inline ::METRO::CRO::MESSAGES::Teacher* release_teacher();
  inline void set_allocated_teacher(::METRO::CRO::MESSAGES::Teacher* teacher);

  // optional string description = 5;
  inline bool has_description() const;
  inline void clear_description();
  static const int kDescriptionFieldNumber = 5;
  inline const ::std::string& description() const;
  inline void set_description(const ::std::string& value);
  inline void set_description(const char* value);
  inline void set_description(const char* value, size_t size);
  inline ::std::string* mutable_description();
  inline ::std::string* release_description();
  inline void set_allocated_description(::std::string* description);

  // optional string imgurl = 6;
  inline bool has_imgurl() const;
  inline void clear_imgurl();
  static const int kImgurlFieldNumber = 6;
  inline const ::std::string& imgurl() const;
  inline void set_imgurl(const ::std::string& value);
  inline void set_imgurl(const char* value);
  inline void set_imgurl(const char* value, size_t size);
  inline ::std::string* mutable_imgurl();
  inline ::std::string* release_imgurl();
  inline void set_allocated_imgurl(::std::string* imgurl);

  static const int kMessageFieldNumber = 202;
  static ::google::protobuf::internal::ExtensionIdentifier< ::METRO::CRO::MESSAGES::IpcMessage,
      ::google::protobuf::internal::MessageTypeTraits< ::METRO::CRO::MESSAGES::ClassroomInfo >, 11, false >
    message;
  // @@protoc_insertion_point(class_scope:METRO.CRO.MESSAGES.ClassroomInfo)
 private:
  inline void set_has_u_id();
  inline void clear_has_u_id();
  inline void set_has_cate_id();
  inline void clear_has_cate_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_teacher();
  inline void clear_has_teacher();
  inline void set_has_description();
  inline void clear_has_description();
  inline void set_has_imgurl();
  inline void clear_has_imgurl();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 u_id_;
  ::google::protobuf::int32 cate_id_;
  ::std::string* name_;
  ::METRO::CRO::MESSAGES::Teacher* teacher_;
  ::std::string* description_;
  ::std::string* imgurl_;
  friend void  protobuf_AddDesc_ClassroomInfo_2eproto();
  friend void protobuf_AssignDesc_ClassroomInfo_2eproto();
  friend void protobuf_ShutdownFile_ClassroomInfo_2eproto();

  void InitAsDefaultInstance();
  static ClassroomInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// ClassroomInfo

// required int32 u_id = 1;
inline bool ClassroomInfo::has_u_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClassroomInfo::set_has_u_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClassroomInfo::clear_has_u_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClassroomInfo::clear_u_id() {
  u_id_ = 0;
  clear_has_u_id();
}
inline ::google::protobuf::int32 ClassroomInfo::u_id() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.u_id)
  return u_id_;
}
inline void ClassroomInfo::set_u_id(::google::protobuf::int32 value) {
  set_has_u_id();
  u_id_ = value;
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ClassroomInfo.u_id)
}

// required int32 cate_id = 2;
inline bool ClassroomInfo::has_cate_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClassroomInfo::set_has_cate_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ClassroomInfo::clear_has_cate_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ClassroomInfo::clear_cate_id() {
  cate_id_ = 0;
  clear_has_cate_id();
}
inline ::google::protobuf::int32 ClassroomInfo::cate_id() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.cate_id)
  return cate_id_;
}
inline void ClassroomInfo::set_cate_id(::google::protobuf::int32 value) {
  set_has_cate_id();
  cate_id_ = value;
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ClassroomInfo.cate_id)
}

// required string name = 3;
inline bool ClassroomInfo::has_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ClassroomInfo::set_has_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ClassroomInfo::clear_has_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ClassroomInfo::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& ClassroomInfo::name() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.name)
  return *name_;
}
inline void ClassroomInfo::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ClassroomInfo.name)
}
inline void ClassroomInfo::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.ClassroomInfo.name)
}
inline void ClassroomInfo::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.ClassroomInfo.name)
}
inline ::std::string* ClassroomInfo::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.ClassroomInfo.name)
  return name_;
}
inline ::std::string* ClassroomInfo::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClassroomInfo::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.ClassroomInfo.name)
}

// required .METRO.CRO.MESSAGES.Teacher teacher = 4;
inline bool ClassroomInfo::has_teacher() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ClassroomInfo::set_has_teacher() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ClassroomInfo::clear_has_teacher() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ClassroomInfo::clear_teacher() {
  if (teacher_ != NULL) teacher_->::METRO::CRO::MESSAGES::Teacher::Clear();
  clear_has_teacher();
}
inline const ::METRO::CRO::MESSAGES::Teacher& ClassroomInfo::teacher() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.teacher)
  return teacher_ != NULL ? *teacher_ : *default_instance_->teacher_;
}
inline ::METRO::CRO::MESSAGES::Teacher* ClassroomInfo::mutable_teacher() {
  set_has_teacher();
  if (teacher_ == NULL) teacher_ = new ::METRO::CRO::MESSAGES::Teacher;
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.ClassroomInfo.teacher)
  return teacher_;
}
inline ::METRO::CRO::MESSAGES::Teacher* ClassroomInfo::release_teacher() {
  clear_has_teacher();
  ::METRO::CRO::MESSAGES::Teacher* temp = teacher_;
  teacher_ = NULL;
  return temp;
}
inline void ClassroomInfo::set_allocated_teacher(::METRO::CRO::MESSAGES::Teacher* teacher) {
  delete teacher_;
  teacher_ = teacher;
  if (teacher) {
    set_has_teacher();
  } else {
    clear_has_teacher();
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.ClassroomInfo.teacher)
}

// optional string description = 5;
inline bool ClassroomInfo::has_description() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ClassroomInfo::set_has_description() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ClassroomInfo::clear_has_description() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ClassroomInfo::clear_description() {
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_->clear();
  }
  clear_has_description();
}
inline const ::std::string& ClassroomInfo::description() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.description)
  return *description_;
}
inline void ClassroomInfo::set_description(const ::std::string& value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ClassroomInfo.description)
}
inline void ClassroomInfo::set_description(const char* value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.ClassroomInfo.description)
}
inline void ClassroomInfo::set_description(const char* value, size_t size) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.ClassroomInfo.description)
}
inline ::std::string* ClassroomInfo::mutable_description() {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.ClassroomInfo.description)
  return description_;
}
inline ::std::string* ClassroomInfo::release_description() {
  clear_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = description_;
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClassroomInfo::set_allocated_description(::std::string* description) {
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete description_;
  }
  if (description) {
    set_has_description();
    description_ = description;
  } else {
    clear_has_description();
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.ClassroomInfo.description)
}

// optional string imgurl = 6;
inline bool ClassroomInfo::has_imgurl() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ClassroomInfo::set_has_imgurl() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ClassroomInfo::clear_has_imgurl() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ClassroomInfo::clear_imgurl() {
  if (imgurl_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    imgurl_->clear();
  }
  clear_has_imgurl();
}
inline const ::std::string& ClassroomInfo::imgurl() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.imgurl)
  return *imgurl_;
}
inline void ClassroomInfo::set_imgurl(const ::std::string& value) {
  set_has_imgurl();
  if (imgurl_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    imgurl_ = new ::std::string;
  }
  imgurl_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ClassroomInfo.imgurl)
}
inline void ClassroomInfo::set_imgurl(const char* value) {
  set_has_imgurl();
  if (imgurl_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    imgurl_ = new ::std::string;
  }
  imgurl_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.ClassroomInfo.imgurl)
}
inline void ClassroomInfo::set_imgurl(const char* value, size_t size) {
  set_has_imgurl();
  if (imgurl_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    imgurl_ = new ::std::string;
  }
  imgurl_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.ClassroomInfo.imgurl)
}
inline ::std::string* ClassroomInfo::mutable_imgurl() {
  set_has_imgurl();
  if (imgurl_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    imgurl_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.ClassroomInfo.imgurl)
  return imgurl_;
}
inline ::std::string* ClassroomInfo::release_imgurl() {
  clear_has_imgurl();
  if (imgurl_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = imgurl_;
    imgurl_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClassroomInfo::set_allocated_imgurl(::std::string* imgurl) {
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
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.ClassroomInfo.imgurl)
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

#endif  // PROTOBUF_ClassroomInfo_2eproto__INCLUDED
