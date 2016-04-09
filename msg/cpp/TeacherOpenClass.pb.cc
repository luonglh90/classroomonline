// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TeacherOpenClass.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TeacherOpenClass.pb.h"

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

const ::google::protobuf::Descriptor* TeacherOpenClass_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TeacherOpenClass_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_TeacherOpenClass_2eproto() {
  protobuf_AddDesc_TeacherOpenClass_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "TeacherOpenClass.proto");
  GOOGLE_CHECK(file != NULL);
  TeacherOpenClass_descriptor_ = file->message_type(0);
  static const int TeacherOpenClass_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TeacherOpenClass, username_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TeacherOpenClass, classid_),
  };
  TeacherOpenClass_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TeacherOpenClass_descriptor_,
      TeacherOpenClass::default_instance_,
      TeacherOpenClass_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TeacherOpenClass, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TeacherOpenClass, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TeacherOpenClass));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_TeacherOpenClass_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TeacherOpenClass_descriptor_, &TeacherOpenClass::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_TeacherOpenClass_2eproto() {
  delete TeacherOpenClass::default_instance_;
  delete TeacherOpenClass_reflection_;
}

void protobuf_AddDesc_TeacherOpenClass_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::METRO::CRO::MESSAGES::protobuf_AddDesc_IpcMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026TeacherOpenClass.proto\022\022METRO.CRO.MESS"
    "AGES\032\020IpcMessage.proto\"\215\001\n\020TeacherOpenCl"
    "ass\022\020\n\010username\030\001 \001(\t\022\017\n\007classid\030\002 \001(\0052V"
    "\n\007message\022\036.METRO.CRO.MESSAGES.IpcMessag"
    "e\030\255\002 \001(\0132$.METRO.CRO.MESSAGES.TeacherOpe"
    "nClass", 206);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "TeacherOpenClass.proto", &protobuf_RegisterTypes);
  TeacherOpenClass::default_instance_ = new TeacherOpenClass();
  TeacherOpenClass::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::METRO::CRO::MESSAGES::IpcMessage::default_instance(),
    301, 11, false, false,
    &::METRO::CRO::MESSAGES::TeacherOpenClass::default_instance());
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_TeacherOpenClass_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_TeacherOpenClass_2eproto {
  StaticDescriptorInitializer_TeacherOpenClass_2eproto() {
    protobuf_AddDesc_TeacherOpenClass_2eproto();
  }
} static_descriptor_initializer_TeacherOpenClass_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TeacherOpenClass::kUsernameFieldNumber;
const int TeacherOpenClass::kClassidFieldNumber;
#endif  // !_MSC_VER

#ifndef _MSC_VER
const int TeacherOpenClass::kMessageFieldNumber;
#endif
::google::protobuf::internal::ExtensionIdentifier< ::METRO::CRO::MESSAGES::IpcMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::METRO::CRO::MESSAGES::TeacherOpenClass >, 11, false >
  TeacherOpenClass::message(kMessageFieldNumber, ::METRO::CRO::MESSAGES::TeacherOpenClass::default_instance());
TeacherOpenClass::TeacherOpenClass()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:METRO.CRO.MESSAGES.TeacherOpenClass)
}

void TeacherOpenClass::InitAsDefaultInstance() {
}

TeacherOpenClass::TeacherOpenClass(const TeacherOpenClass& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:METRO.CRO.MESSAGES.TeacherOpenClass)
}

void TeacherOpenClass::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  classid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TeacherOpenClass::~TeacherOpenClass() {
  // @@protoc_insertion_point(destructor:METRO.CRO.MESSAGES.TeacherOpenClass)
  SharedDtor();
}

void TeacherOpenClass::SharedDtor() {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete username_;
  }
  if (this != default_instance_) {
  }
}

void TeacherOpenClass::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TeacherOpenClass::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TeacherOpenClass_descriptor_;
}

const TeacherOpenClass& TeacherOpenClass::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TeacherOpenClass_2eproto();
  return *default_instance_;
}

TeacherOpenClass* TeacherOpenClass::default_instance_ = NULL;

TeacherOpenClass* TeacherOpenClass::New() const {
  return new TeacherOpenClass;
}

void TeacherOpenClass::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        username_->clear();
      }
    }
    classid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TeacherOpenClass::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:METRO.CRO.MESSAGES.TeacherOpenClass)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string username = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->username().data(), this->username().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "username");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_classid;
        break;
      }

      // optional int32 classid = 2;
      case 2: {
        if (tag == 16) {
         parse_classid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &classid_)));
          set_has_classid();
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:METRO.CRO.MESSAGES.TeacherOpenClass)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:METRO.CRO.MESSAGES.TeacherOpenClass)
  return false;
#undef DO_
}

void TeacherOpenClass::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:METRO.CRO.MESSAGES.TeacherOpenClass)
  // optional string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "username");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->username(), output);
  }

  // optional int32 classid = 2;
  if (has_classid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->classid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:METRO.CRO.MESSAGES.TeacherOpenClass)
}

::google::protobuf::uint8* TeacherOpenClass::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:METRO.CRO.MESSAGES.TeacherOpenClass)
  // optional string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "username");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->username(), target);
  }

  // optional int32 classid = 2;
  if (has_classid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->classid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:METRO.CRO.MESSAGES.TeacherOpenClass)
  return target;
}

int TeacherOpenClass::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string username = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // optional int32 classid = 2;
    if (has_classid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->classid());
    }

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

void TeacherOpenClass::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TeacherOpenClass* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TeacherOpenClass*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TeacherOpenClass::MergeFrom(const TeacherOpenClass& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_classid()) {
      set_classid(from.classid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TeacherOpenClass::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TeacherOpenClass::CopyFrom(const TeacherOpenClass& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TeacherOpenClass::IsInitialized() const {

  return true;
}

void TeacherOpenClass::Swap(TeacherOpenClass* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(classid_, other->classid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TeacherOpenClass::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TeacherOpenClass_descriptor_;
  metadata.reflection = TeacherOpenClass_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

// @@protoc_insertion_point(global_scope)
