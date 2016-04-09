// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserInit.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserInit.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace METRO {
namespace CRO {
namespace MESSAGES {

namespace {

const ::google::protobuf::Descriptor* UserInit_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserInit_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_UserInit_2eproto() {
  protobuf_AddDesc_UserInit_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "UserInit.proto");
  GOOGLE_CHECK(file != NULL);
  UserInit_descriptor_ = file->message_type(0);
  static const int UserInit_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInit, userinfo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInit, categories_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInit, ownerclass_),
  };
  UserInit_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserInit_descriptor_,
      UserInit::default_instance_,
      UserInit_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInit, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInit, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserInit));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_UserInit_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserInit_descriptor_, &UserInit::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_UserInit_2eproto() {
  delete UserInit::default_instance_;
  delete UserInit_reflection_;
}

void protobuf_AddDesc_UserInit_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::METRO::CRO::MESSAGES::protobuf_AddDesc_User_2eproto();
  ::METRO::CRO::MESSAGES::protobuf_AddDesc_ClassCategory_2eproto();
  ::METRO::CRO::MESSAGES::protobuf_AddDesc_ClassroomInfo_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016UserInit.proto\022\022METRO.CRO.MESSAGES\032\nUs"
    "er.proto\032\023ClassCategory.proto\032\023Classroom"
    "Info.proto\"\244\001\n\010UserInit\022*\n\010userinfo\030\001 \002("
    "\0132\030.METRO.CRO.MESSAGES.User\0225\n\ncategorie"
    "s\030\002 \003(\0132!.METRO.CRO.MESSAGES.ClassCatego"
    "ry\0225\n\nownerclass\030\003 \003(\0132!.METRO.CRO.MESSA"
    "GES.ClassroomInfo", 257);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "UserInit.proto", &protobuf_RegisterTypes);
  UserInit::default_instance_ = new UserInit();
  UserInit::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserInit_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserInit_2eproto {
  StaticDescriptorInitializer_UserInit_2eproto() {
    protobuf_AddDesc_UserInit_2eproto();
  }
} static_descriptor_initializer_UserInit_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int UserInit::kUserinfoFieldNumber;
const int UserInit::kCategoriesFieldNumber;
const int UserInit::kOwnerclassFieldNumber;
#endif  // !_MSC_VER

UserInit::UserInit()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:METRO.CRO.MESSAGES.UserInit)
}

void UserInit::InitAsDefaultInstance() {
  userinfo_ = const_cast< ::METRO::CRO::MESSAGES::User*>(&::METRO::CRO::MESSAGES::User::default_instance());
}

UserInit::UserInit(const UserInit& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:METRO.CRO.MESSAGES.UserInit)
}

void UserInit::SharedCtor() {
  _cached_size_ = 0;
  userinfo_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserInit::~UserInit() {
  // @@protoc_insertion_point(destructor:METRO.CRO.MESSAGES.UserInit)
  SharedDtor();
}

void UserInit::SharedDtor() {
  if (this != default_instance_) {
    delete userinfo_;
  }
}

void UserInit::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserInit::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserInit_descriptor_;
}

const UserInit& UserInit::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_UserInit_2eproto();
  return *default_instance_;
}

UserInit* UserInit::default_instance_ = NULL;

UserInit* UserInit::New() const {
  return new UserInit;
}

void UserInit::Clear() {
  if (has_userinfo()) {
    if (userinfo_ != NULL) userinfo_->::METRO::CRO::MESSAGES::User::Clear();
  }
  categories_.Clear();
  ownerclass_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserInit::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:METRO.CRO.MESSAGES.UserInit)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .METRO.CRO.MESSAGES.User userinfo = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_userinfo()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_categories;
        break;
      }

      // repeated .METRO.CRO.MESSAGES.ClassCategory categories = 2;
      case 2: {
        if (tag == 18) {
         parse_categories:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_categories()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_categories;
        if (input->ExpectTag(26)) goto parse_ownerclass;
        break;
      }

      // repeated .METRO.CRO.MESSAGES.ClassroomInfo ownerclass = 3;
      case 3: {
        if (tag == 26) {
         parse_ownerclass:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_ownerclass()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_ownerclass;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:METRO.CRO.MESSAGES.UserInit)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:METRO.CRO.MESSAGES.UserInit)
  return false;
#undef DO_
}

void UserInit::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:METRO.CRO.MESSAGES.UserInit)
  // required .METRO.CRO.MESSAGES.User userinfo = 1;
  if (has_userinfo()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->userinfo(), output);
  }

  // repeated .METRO.CRO.MESSAGES.ClassCategory categories = 2;
  for (int i = 0; i < this->categories_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->categories(i), output);
  }

  // repeated .METRO.CRO.MESSAGES.ClassroomInfo ownerclass = 3;
  for (int i = 0; i < this->ownerclass_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->ownerclass(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:METRO.CRO.MESSAGES.UserInit)
}

::google::protobuf::uint8* UserInit::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:METRO.CRO.MESSAGES.UserInit)
  // required .METRO.CRO.MESSAGES.User userinfo = 1;
  if (has_userinfo()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->userinfo(), target);
  }

  // repeated .METRO.CRO.MESSAGES.ClassCategory categories = 2;
  for (int i = 0; i < this->categories_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->categories(i), target);
  }

  // repeated .METRO.CRO.MESSAGES.ClassroomInfo ownerclass = 3;
  for (int i = 0; i < this->ownerclass_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->ownerclass(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:METRO.CRO.MESSAGES.UserInit)
  return target;
}

int UserInit::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .METRO.CRO.MESSAGES.User userinfo = 1;
    if (has_userinfo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->userinfo());
    }

  }
  // repeated .METRO.CRO.MESSAGES.ClassCategory categories = 2;
  total_size += 1 * this->categories_size();
  for (int i = 0; i < this->categories_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->categories(i));
  }

  // repeated .METRO.CRO.MESSAGES.ClassroomInfo ownerclass = 3;
  total_size += 1 * this->ownerclass_size();
  for (int i = 0; i < this->ownerclass_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->ownerclass(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserInit::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserInit* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserInit*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserInit::MergeFrom(const UserInit& from) {
  GOOGLE_CHECK_NE(&from, this);
  categories_.MergeFrom(from.categories_);
  ownerclass_.MergeFrom(from.ownerclass_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_userinfo()) {
      mutable_userinfo()->::METRO::CRO::MESSAGES::User::MergeFrom(from.userinfo());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserInit::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserInit::CopyFrom(const UserInit& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserInit::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_userinfo()) {
    if (!this->userinfo().IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->categories())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->ownerclass())) return false;
  return true;
}

void UserInit::Swap(UserInit* other) {
  if (other != this) {
    std::swap(userinfo_, other->userinfo_);
    categories_.Swap(&other->categories_);
    ownerclass_.Swap(&other->ownerclass_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserInit::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserInit_descriptor_;
  metadata.reflection = UserInit_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

// @@protoc_insertion_point(global_scope)
