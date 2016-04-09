// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClassroomInfoOfCategory.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ClassroomInfoOfCategory.pb.h"

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

const ::google::protobuf::Descriptor* ClassroomInfoOfCategory_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClassroomInfoOfCategory_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ClassroomInfoOfCategory_2eproto() {
  protobuf_AddDesc_ClassroomInfoOfCategory_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ClassroomInfoOfCategory.proto");
  GOOGLE_CHECK(file != NULL);
  ClassroomInfoOfCategory_descriptor_ = file->message_type(0);
  static const int ClassroomInfoOfCategory_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassroomInfoOfCategory, cateid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassroomInfoOfCategory, listofclasses_),
  };
  ClassroomInfoOfCategory_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ClassroomInfoOfCategory_descriptor_,
      ClassroomInfoOfCategory::default_instance_,
      ClassroomInfoOfCategory_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassroomInfoOfCategory, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassroomInfoOfCategory, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ClassroomInfoOfCategory));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ClassroomInfoOfCategory_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ClassroomInfoOfCategory_descriptor_, &ClassroomInfoOfCategory::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ClassroomInfoOfCategory_2eproto() {
  delete ClassroomInfoOfCategory::default_instance_;
  delete ClassroomInfoOfCategory_reflection_;
}

void protobuf_AddDesc_ClassroomInfoOfCategory_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::METRO::CRO::MESSAGES::protobuf_AddDesc_ClassroomInfo_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035ClassroomInfoOfCategory.proto\022\022METRO.C"
    "RO.MESSAGES\032\023ClassroomInfo.proto\"c\n\027Clas"
    "sroomInfoOfCategory\022\016\n\006cateid\030\001 \002(\t\0228\n\rl"
    "istOfClasses\030\002 \003(\0132!.METRO.CRO.MESSAGES."
    "ClassroomInfo", 173);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ClassroomInfoOfCategory.proto", &protobuf_RegisterTypes);
  ClassroomInfoOfCategory::default_instance_ = new ClassroomInfoOfCategory();
  ClassroomInfoOfCategory::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ClassroomInfoOfCategory_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ClassroomInfoOfCategory_2eproto {
  StaticDescriptorInitializer_ClassroomInfoOfCategory_2eproto() {
    protobuf_AddDesc_ClassroomInfoOfCategory_2eproto();
  }
} static_descriptor_initializer_ClassroomInfoOfCategory_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ClassroomInfoOfCategory::kCateidFieldNumber;
const int ClassroomInfoOfCategory::kListOfClassesFieldNumber;
#endif  // !_MSC_VER

ClassroomInfoOfCategory::ClassroomInfoOfCategory()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:METRO.CRO.MESSAGES.ClassroomInfoOfCategory)
}

void ClassroomInfoOfCategory::InitAsDefaultInstance() {
}

ClassroomInfoOfCategory::ClassroomInfoOfCategory(const ClassroomInfoOfCategory& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:METRO.CRO.MESSAGES.ClassroomInfoOfCategory)
}

void ClassroomInfoOfCategory::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  cateid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClassroomInfoOfCategory::~ClassroomInfoOfCategory() {
  // @@protoc_insertion_point(destructor:METRO.CRO.MESSAGES.ClassroomInfoOfCategory)
  SharedDtor();
}

void ClassroomInfoOfCategory::SharedDtor() {
  if (cateid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete cateid_;
  }
  if (this != default_instance_) {
  }
}

void ClassroomInfoOfCategory::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClassroomInfoOfCategory::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClassroomInfoOfCategory_descriptor_;
}

const ClassroomInfoOfCategory& ClassroomInfoOfCategory::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ClassroomInfoOfCategory_2eproto();
  return *default_instance_;
}

ClassroomInfoOfCategory* ClassroomInfoOfCategory::default_instance_ = NULL;

ClassroomInfoOfCategory* ClassroomInfoOfCategory::New() const {
  return new ClassroomInfoOfCategory;
}

void ClassroomInfoOfCategory::Clear() {
  if (has_cateid()) {
    if (cateid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      cateid_->clear();
    }
  }
  listofclasses_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ClassroomInfoOfCategory::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:METRO.CRO.MESSAGES.ClassroomInfoOfCategory)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string cateid = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cateid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->cateid().data(), this->cateid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "cateid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_listOfClasses;
        break;
      }

      // repeated .METRO.CRO.MESSAGES.ClassroomInfo listOfClasses = 2;
      case 2: {
        if (tag == 18) {
         parse_listOfClasses:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_listofclasses()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_listOfClasses;
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
  // @@protoc_insertion_point(parse_success:METRO.CRO.MESSAGES.ClassroomInfoOfCategory)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:METRO.CRO.MESSAGES.ClassroomInfoOfCategory)
  return false;
#undef DO_
}

void ClassroomInfoOfCategory::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:METRO.CRO.MESSAGES.ClassroomInfoOfCategory)
  // required string cateid = 1;
  if (has_cateid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->cateid().data(), this->cateid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "cateid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->cateid(), output);
  }

  // repeated .METRO.CRO.MESSAGES.ClassroomInfo listOfClasses = 2;
  for (int i = 0; i < this->listofclasses_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->listofclasses(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:METRO.CRO.MESSAGES.ClassroomInfoOfCategory)
}

::google::protobuf::uint8* ClassroomInfoOfCategory::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:METRO.CRO.MESSAGES.ClassroomInfoOfCategory)
  // required string cateid = 1;
  if (has_cateid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->cateid().data(), this->cateid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "cateid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->cateid(), target);
  }

  // repeated .METRO.CRO.MESSAGES.ClassroomInfo listOfClasses = 2;
  for (int i = 0; i < this->listofclasses_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->listofclasses(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:METRO.CRO.MESSAGES.ClassroomInfoOfCategory)
  return target;
}

int ClassroomInfoOfCategory::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string cateid = 1;
    if (has_cateid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->cateid());
    }

  }
  // repeated .METRO.CRO.MESSAGES.ClassroomInfo listOfClasses = 2;
  total_size += 1 * this->listofclasses_size();
  for (int i = 0; i < this->listofclasses_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->listofclasses(i));
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

void ClassroomInfoOfCategory::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ClassroomInfoOfCategory* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ClassroomInfoOfCategory*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ClassroomInfoOfCategory::MergeFrom(const ClassroomInfoOfCategory& from) {
  GOOGLE_CHECK_NE(&from, this);
  listofclasses_.MergeFrom(from.listofclasses_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cateid()) {
      set_cateid(from.cateid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ClassroomInfoOfCategory::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClassroomInfoOfCategory::CopyFrom(const ClassroomInfoOfCategory& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClassroomInfoOfCategory::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->listofclasses())) return false;
  return true;
}

void ClassroomInfoOfCategory::Swap(ClassroomInfoOfCategory* other) {
  if (other != this) {
    std::swap(cateid_, other->cateid_);
    listofclasses_.Swap(&other->listofclasses_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ClassroomInfoOfCategory::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClassroomInfoOfCategory_descriptor_;
  metadata.reflection = ClassroomInfoOfCategory_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

// @@protoc_insertion_point(global_scope)
