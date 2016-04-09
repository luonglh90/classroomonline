// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LoginStatus.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LoginStatus.pb.h"

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

const ::google::protobuf::Descriptor* LoginStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginStatus_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_LoginStatus_2eproto() {
  protobuf_AddDesc_LoginStatus_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "LoginStatus.proto");
  GOOGLE_CHECK(file != NULL);
  LoginStatus_descriptor_ = file->message_type(0);
  static const int LoginStatus_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginStatus, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginStatus, stt_),
  };
  LoginStatus_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginStatus_descriptor_,
      LoginStatus::default_instance_,
      LoginStatus_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginStatus, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginStatus, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginStatus));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_LoginStatus_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginStatus_descriptor_, &LoginStatus::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_LoginStatus_2eproto() {
  delete LoginStatus::default_instance_;
  delete LoginStatus_reflection_;
}

void protobuf_AddDesc_LoginStatus_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::METRO::CRO::MESSAGES::protobuf_AddDesc_IpcMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021LoginStatus.proto\022\022METRO.CRO.MESSAGES\032"
    "\020IpcMessage.proto\"z\n\013LoginStatus\022\014\n\004name"
    "\030\001 \001(\t\022\013\n\003stt\030\002 \001(\t2P\n\007message\022\036.METRO.C"
    "RO.MESSAGES.IpcMessage\030o \001(\0132\037.METRO.CRO"
    ".MESSAGES.LoginStatus", 181);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LoginStatus.proto", &protobuf_RegisterTypes);
  LoginStatus::default_instance_ = new LoginStatus();
  LoginStatus::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::METRO::CRO::MESSAGES::IpcMessage::default_instance(),
    111, 11, false, false,
    &::METRO::CRO::MESSAGES::LoginStatus::default_instance());
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_LoginStatus_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_LoginStatus_2eproto {
  StaticDescriptorInitializer_LoginStatus_2eproto() {
    protobuf_AddDesc_LoginStatus_2eproto();
  }
} static_descriptor_initializer_LoginStatus_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LoginStatus::kNameFieldNumber;
const int LoginStatus::kSttFieldNumber;
#endif  // !_MSC_VER

#ifndef _MSC_VER
const int LoginStatus::kMessageFieldNumber;
#endif
::google::protobuf::internal::ExtensionIdentifier< ::METRO::CRO::MESSAGES::IpcMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::METRO::CRO::MESSAGES::LoginStatus >, 11, false >
  LoginStatus::message(kMessageFieldNumber, ::METRO::CRO::MESSAGES::LoginStatus::default_instance());
LoginStatus::LoginStatus()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:METRO.CRO.MESSAGES.LoginStatus)
}

void LoginStatus::InitAsDefaultInstance() {
}

LoginStatus::LoginStatus(const LoginStatus& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:METRO.CRO.MESSAGES.LoginStatus)
}

void LoginStatus::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stt_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginStatus::~LoginStatus() {
  // @@protoc_insertion_point(destructor:METRO.CRO.MESSAGES.LoginStatus)
  SharedDtor();
}

void LoginStatus::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (stt_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete stt_;
  }
  if (this != default_instance_) {
  }
}

void LoginStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginStatus_descriptor_;
}

const LoginStatus& LoginStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LoginStatus_2eproto();
  return *default_instance_;
}

LoginStatus* LoginStatus::default_instance_ = NULL;

LoginStatus* LoginStatus::New() const {
  return new LoginStatus;
}

void LoginStatus::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
    if (has_stt()) {
      if (stt_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        stt_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LoginStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:METRO.CRO.MESSAGES.LoginStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_stt;
        break;
      }

      // optional string stt = 2;
      case 2: {
        if (tag == 18) {
         parse_stt:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_stt()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->stt().data(), this->stt().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "stt");
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
  // @@protoc_insertion_point(parse_success:METRO.CRO.MESSAGES.LoginStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:METRO.CRO.MESSAGES.LoginStatus)
  return false;
#undef DO_
}

void LoginStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:METRO.CRO.MESSAGES.LoginStatus)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string stt = 2;
  if (has_stt()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->stt().data(), this->stt().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "stt");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->stt(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:METRO.CRO.MESSAGES.LoginStatus)
}

::google::protobuf::uint8* LoginStatus::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:METRO.CRO.MESSAGES.LoginStatus)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string stt = 2;
  if (has_stt()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->stt().data(), this->stt().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "stt");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->stt(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:METRO.CRO.MESSAGES.LoginStatus)
  return target;
}

int LoginStatus::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string stt = 2;
    if (has_stt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->stt());
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

void LoginStatus::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LoginStatus* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LoginStatus*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LoginStatus::MergeFrom(const LoginStatus& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_stt()) {
      set_stt(from.stt());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LoginStatus::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginStatus::CopyFrom(const LoginStatus& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginStatus::IsInitialized() const {

  return true;
}

void LoginStatus::Swap(LoginStatus* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(stt_, other->stt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LoginStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginStatus_descriptor_;
  metadata.reflection = LoginStatus_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

// @@protoc_insertion_point(global_scope)
