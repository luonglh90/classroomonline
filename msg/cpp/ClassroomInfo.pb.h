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

  // required string uid = 1;
  inline bool has_uid() const;
  inline void clear_uid();
  static const int kUidFieldNumber = 1;
  inline const ::std::string& uid() const;
  inline void set_uid(const ::std::string& value);
  inline void set_uid(const char* value);
  inline void set_uid(const char* value, size_t size);
  inline ::std::string* mutable_uid();
  inline ::std::string* release_uid();
  inline void set_allocated_uid(::std::string* uid);

  // required string cateid = 2;
  inline bool has_cateid() const;
  inline void clear_cateid();
  static const int kCateidFieldNumber = 2;
  inline const ::std::string& cateid() const;
  inline void set_cateid(const ::std::string& value);
  inline void set_cateid(const char* value);
  inline void set_cateid(const char* value, size_t size);
  inline ::std::string* mutable_cateid();
  inline ::std::string* release_cateid();
  inline void set_allocated_cateid(::std::string* cateid);

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

  // required string teacher = 4;
  inline bool has_teacher() const;
  inline void clear_teacher();
  static const int kTeacherFieldNumber = 4;
  inline const ::std::string& teacher() const;
  inline void set_teacher(const ::std::string& value);
  inline void set_teacher(const char* value);
  inline void set_teacher(const char* value, size_t size);
  inline ::std::string* mutable_teacher();
  inline ::std::string* release_teacher();
  inline void set_allocated_teacher(::std::string* teacher);

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

  // optional string timeopen = 7;
  inline bool has_timeopen() const;
  inline void clear_timeopen();
  static const int kTimeopenFieldNumber = 7;
  inline const ::std::string& timeopen() const;
  inline void set_timeopen(const ::std::string& value);
  inline void set_timeopen(const char* value);
  inline void set_timeopen(const char* value, size_t size);
  inline ::std::string* mutable_timeopen();
  inline ::std::string* release_timeopen();
  inline void set_allocated_timeopen(::std::string* timeopen);

  // optional string timeclose = 8;
  inline bool has_timeclose() const;
  inline void clear_timeclose();
  static const int kTimecloseFieldNumber = 8;
  inline const ::std::string& timeclose() const;
  inline void set_timeclose(const ::std::string& value);
  inline void set_timeclose(const char* value);
  inline void set_timeclose(const char* value, size_t size);
  inline ::std::string* mutable_timeclose();
  inline ::std::string* release_timeclose();
  inline void set_allocated_timeclose(::std::string* timeclose);

  // @@protoc_insertion_point(class_scope:METRO.CRO.MESSAGES.ClassroomInfo)
 private:
  inline void set_has_uid();
  inline void clear_has_uid();
  inline void set_has_cateid();
  inline void clear_has_cateid();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_teacher();
  inline void clear_has_teacher();
  inline void set_has_description();
  inline void clear_has_description();
  inline void set_has_imgurl();
  inline void clear_has_imgurl();
  inline void set_has_timeopen();
  inline void clear_has_timeopen();
  inline void set_has_timeclose();
  inline void clear_has_timeclose();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* uid_;
  ::std::string* cateid_;
  ::std::string* name_;
  ::std::string* teacher_;
  ::std::string* description_;
  ::std::string* imgurl_;
  ::std::string* timeopen_;
  ::std::string* timeclose_;
  friend void  protobuf_AddDesc_ClassroomInfo_2eproto();
  friend void protobuf_AssignDesc_ClassroomInfo_2eproto();
  friend void protobuf_ShutdownFile_ClassroomInfo_2eproto();

  void InitAsDefaultInstance();
  static ClassroomInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// ClassroomInfo

// required string uid = 1;
inline bool ClassroomInfo::has_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClassroomInfo::set_has_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClassroomInfo::clear_has_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClassroomInfo::clear_uid() {
  if (uid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uid_->clear();
  }
  clear_has_uid();
}
inline const ::std::string& ClassroomInfo::uid() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.uid)
  return *uid_;
}
inline void ClassroomInfo::set_uid(const ::std::string& value) {
  set_has_uid();
  if (uid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uid_ = new ::std::string;
  }
  uid_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ClassroomInfo.uid)
}
inline void ClassroomInfo::set_uid(const char* value) {
  set_has_uid();
  if (uid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uid_ = new ::std::string;
  }
  uid_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.ClassroomInfo.uid)
}
inline void ClassroomInfo::set_uid(const char* value, size_t size) {
  set_has_uid();
  if (uid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uid_ = new ::std::string;
  }
  uid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.ClassroomInfo.uid)
}
inline ::std::string* ClassroomInfo::mutable_uid() {
  set_has_uid();
  if (uid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.ClassroomInfo.uid)
  return uid_;
}
inline ::std::string* ClassroomInfo::release_uid() {
  clear_has_uid();
  if (uid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = uid_;
    uid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClassroomInfo::set_allocated_uid(::std::string* uid) {
  if (uid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete uid_;
  }
  if (uid) {
    set_has_uid();
    uid_ = uid;
  } else {
    clear_has_uid();
    uid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.ClassroomInfo.uid)
}

// required string cateid = 2;
inline bool ClassroomInfo::has_cateid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClassroomInfo::set_has_cateid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ClassroomInfo::clear_has_cateid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ClassroomInfo::clear_cateid() {
  if (cateid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    cateid_->clear();
  }
  clear_has_cateid();
}
inline const ::std::string& ClassroomInfo::cateid() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.cateid)
  return *cateid_;
}
inline void ClassroomInfo::set_cateid(const ::std::string& value) {
  set_has_cateid();
  if (cateid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    cateid_ = new ::std::string;
  }
  cateid_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ClassroomInfo.cateid)
}
inline void ClassroomInfo::set_cateid(const char* value) {
  set_has_cateid();
  if (cateid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    cateid_ = new ::std::string;
  }
  cateid_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.ClassroomInfo.cateid)
}
inline void ClassroomInfo::set_cateid(const char* value, size_t size) {
  set_has_cateid();
  if (cateid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    cateid_ = new ::std::string;
  }
  cateid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.ClassroomInfo.cateid)
}
inline ::std::string* ClassroomInfo::mutable_cateid() {
  set_has_cateid();
  if (cateid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    cateid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.ClassroomInfo.cateid)
  return cateid_;
}
inline ::std::string* ClassroomInfo::release_cateid() {
  clear_has_cateid();
  if (cateid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = cateid_;
    cateid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClassroomInfo::set_allocated_cateid(::std::string* cateid) {
  if (cateid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete cateid_;
  }
  if (cateid) {
    set_has_cateid();
    cateid_ = cateid;
  } else {
    clear_has_cateid();
    cateid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.ClassroomInfo.cateid)
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

// required string teacher = 4;
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
  if (teacher_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    teacher_->clear();
  }
  clear_has_teacher();
}
inline const ::std::string& ClassroomInfo::teacher() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.teacher)
  return *teacher_;
}
inline void ClassroomInfo::set_teacher(const ::std::string& value) {
  set_has_teacher();
  if (teacher_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    teacher_ = new ::std::string;
  }
  teacher_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ClassroomInfo.teacher)
}
inline void ClassroomInfo::set_teacher(const char* value) {
  set_has_teacher();
  if (teacher_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    teacher_ = new ::std::string;
  }
  teacher_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.ClassroomInfo.teacher)
}
inline void ClassroomInfo::set_teacher(const char* value, size_t size) {
  set_has_teacher();
  if (teacher_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    teacher_ = new ::std::string;
  }
  teacher_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.ClassroomInfo.teacher)
}
inline ::std::string* ClassroomInfo::mutable_teacher() {
  set_has_teacher();
  if (teacher_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    teacher_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.ClassroomInfo.teacher)
  return teacher_;
}
inline ::std::string* ClassroomInfo::release_teacher() {
  clear_has_teacher();
  if (teacher_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = teacher_;
    teacher_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClassroomInfo::set_allocated_teacher(::std::string* teacher) {
  if (teacher_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete teacher_;
  }
  if (teacher) {
    set_has_teacher();
    teacher_ = teacher;
  } else {
    clear_has_teacher();
    teacher_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
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

// optional string timeopen = 7;
inline bool ClassroomInfo::has_timeopen() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ClassroomInfo::set_has_timeopen() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ClassroomInfo::clear_has_timeopen() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ClassroomInfo::clear_timeopen() {
  if (timeopen_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timeopen_->clear();
  }
  clear_has_timeopen();
}
inline const ::std::string& ClassroomInfo::timeopen() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.timeopen)
  return *timeopen_;
}
inline void ClassroomInfo::set_timeopen(const ::std::string& value) {
  set_has_timeopen();
  if (timeopen_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timeopen_ = new ::std::string;
  }
  timeopen_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ClassroomInfo.timeopen)
}
inline void ClassroomInfo::set_timeopen(const char* value) {
  set_has_timeopen();
  if (timeopen_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timeopen_ = new ::std::string;
  }
  timeopen_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.ClassroomInfo.timeopen)
}
inline void ClassroomInfo::set_timeopen(const char* value, size_t size) {
  set_has_timeopen();
  if (timeopen_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timeopen_ = new ::std::string;
  }
  timeopen_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.ClassroomInfo.timeopen)
}
inline ::std::string* ClassroomInfo::mutable_timeopen() {
  set_has_timeopen();
  if (timeopen_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timeopen_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.ClassroomInfo.timeopen)
  return timeopen_;
}
inline ::std::string* ClassroomInfo::release_timeopen() {
  clear_has_timeopen();
  if (timeopen_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = timeopen_;
    timeopen_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClassroomInfo::set_allocated_timeopen(::std::string* timeopen) {
  if (timeopen_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete timeopen_;
  }
  if (timeopen) {
    set_has_timeopen();
    timeopen_ = timeopen;
  } else {
    clear_has_timeopen();
    timeopen_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.ClassroomInfo.timeopen)
}

// optional string timeclose = 8;
inline bool ClassroomInfo::has_timeclose() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ClassroomInfo::set_has_timeclose() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ClassroomInfo::clear_has_timeclose() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ClassroomInfo::clear_timeclose() {
  if (timeclose_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timeclose_->clear();
  }
  clear_has_timeclose();
}
inline const ::std::string& ClassroomInfo::timeclose() const {
  // @@protoc_insertion_point(field_get:METRO.CRO.MESSAGES.ClassroomInfo.timeclose)
  return *timeclose_;
}
inline void ClassroomInfo::set_timeclose(const ::std::string& value) {
  set_has_timeclose();
  if (timeclose_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timeclose_ = new ::std::string;
  }
  timeclose_->assign(value);
  // @@protoc_insertion_point(field_set:METRO.CRO.MESSAGES.ClassroomInfo.timeclose)
}
inline void ClassroomInfo::set_timeclose(const char* value) {
  set_has_timeclose();
  if (timeclose_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timeclose_ = new ::std::string;
  }
  timeclose_->assign(value);
  // @@protoc_insertion_point(field_set_char:METRO.CRO.MESSAGES.ClassroomInfo.timeclose)
}
inline void ClassroomInfo::set_timeclose(const char* value, size_t size) {
  set_has_timeclose();
  if (timeclose_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timeclose_ = new ::std::string;
  }
  timeclose_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:METRO.CRO.MESSAGES.ClassroomInfo.timeclose)
}
inline ::std::string* ClassroomInfo::mutable_timeclose() {
  set_has_timeclose();
  if (timeclose_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timeclose_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:METRO.CRO.MESSAGES.ClassroomInfo.timeclose)
  return timeclose_;
}
inline ::std::string* ClassroomInfo::release_timeclose() {
  clear_has_timeclose();
  if (timeclose_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = timeclose_;
    timeclose_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClassroomInfo::set_allocated_timeclose(::std::string* timeclose) {
  if (timeclose_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete timeclose_;
  }
  if (timeclose) {
    set_has_timeclose();
    timeclose_ = timeclose;
  } else {
    clear_has_timeclose();
    timeclose_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:METRO.CRO.MESSAGES.ClassroomInfo.timeclose)
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
