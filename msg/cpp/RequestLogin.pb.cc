// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RequestLogin.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RequestLogin.pb.h"

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

const ::google::protobuf::Descriptor* RequestLogin_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RequestLogin_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RequestLogin_2eproto() {
  protobuf_AddDesc_RequestLogin_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RequestLogin.proto");
  GOOGLE_CHECK(file != NULL);
  RequestLogin_descriptor_ = file->message_type(0);
  static const int RequestLogin_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestLogin, username_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestLogin, password_),
  };
  RequestLogin_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RequestLogin_descriptor_,
      RequestLogin::default_instance_,
      RequestLogin_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestLogin, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestLogin, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RequestLogin));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RequestLogin_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RequestLogin_descriptor_, &RequestLogin::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RequestLogin_2eproto() {
  delete RequestLogin::default_instance_;
  delete RequestLogin_reflection_;
}

void protobuf_AddDesc_RequestLogin_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::METRO::CRO::MESSAGES::protobuf_AddDesc_IpcMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022RequestLogin.proto\022\022METRO.CRO.MESSAGES"
    "\032\020IpcMessage.proto\"\205\001\n\014RequestLogin\022\020\n\010u"
    "sername\030\001 \002(\t\022\020\n\010password\030\002 \002(\t2Q\n\007messa"
    "ge\022\036.METRO.CRO.MESSAGES.IpcMessage\030g \001(\013"
    "2 .METRO.CRO.MESSAGES.RequestLogin", 194);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RequestLogin.proto", &protobuf_RegisterTypes);
  RequestLogin::default_instance_ = new RequestLogin();
  RequestLogin::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::METRO::CRO::MESSAGES::IpcMessage::default_instance(),
    103, 11, false, false,
    &::METRO::CRO::MESSAGES::RequestLogin::default_instance());
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RequestLogin_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RequestLogin_2eproto {
  StaticDescriptorInitializer_RequestLogin_2eproto() {
    protobuf_AddDesc_RequestLogin_2eproto();
  }
} static_descriptor_initializer_RequestLogin_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RequestLogin::kUsernameFieldNumber;
const int RequestLogin::kPasswordFieldNumber;
#endif  // !_MSC_VER

#ifndef _MSC_VER
const int RequestLogin::kMessageFieldNumber;
#endif
::google::protobuf::internal::ExtensionIdentifier< ::METRO::CRO::MESSAGES::IpcMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::METRO::CRO::MESSAGES::RequestLogin >, 11, false >
  RequestLogin::message(kMessageFieldNumber, ::METRO::CRO::MESSAGES::RequestLogin::default_instance());
RequestLogin::RequestLogin()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:METRO.CRO.MESSAGES.RequestLogin)
}

void RequestLogin::InitAsDefaultInstance() {
}

RequestLogin::RequestLogin(const RequestLogin& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:METRO.CRO.MESSAGES.RequestLogin)
}

void RequestLogin::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RequestLogin::~RequestLogin() {
  // @@protoc_insertion_point(destructor:METRO.CRO.MESSAGES.RequestLogin)
  SharedDtor();
}

void RequestLogin::SharedDtor() {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete username_;
  }
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (this != default_instance_) {
  }
}

void RequestLogin::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RequestLogin::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RequestLogin_descriptor_;
}

const RequestLogin& RequestLogin::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RequestLogin_2eproto();
  return *default_instance_;
}

RequestLogin* RequestLogin::default_instance_ = NULL;

RequestLogin* RequestLogin::New() const {
  return new RequestLogin;
}

void RequestLogin::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        username_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        password_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RequestLogin::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:METRO.CRO.MESSAGES.RequestLogin)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string username = 1;
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
        if (input->ExpectTag(18)) goto parse_password;
        break;
      }

      // required string password = 2;
      case 2: {
        if (tag == 18) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->password().data(), this->password().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "password");
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
  // @@protoc_insertion_point(parse_success:METRO.CRO.MESSAGES.RequestLogin)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:METRO.CRO.MESSAGES.RequestLogin)
  return false;
#undef DO_
}

void RequestLogin::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:METRO.CRO.MESSAGES.RequestLogin)
  // required string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "username");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->username(), output);
  }

  // required string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "password");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->password(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:METRO.CRO.MESSAGES.RequestLogin)
}

::google::protobuf::uint8* RequestLogin::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:METRO.CRO.MESSAGES.RequestLogin)
  // required string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "username");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->username(), target);
  }

  // required string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "password");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->password(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:METRO.CRO.MESSAGES.RequestLogin)
  return target;
}

int RequestLogin::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string username = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // required string password = 2;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
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

void RequestLogin::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RequestLogin* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RequestLogin*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RequestLogin::MergeFrom(const RequestLogin& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RequestLogin::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestLogin::CopyFrom(const RequestLogin& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestLogin::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void RequestLogin::Swap(RequestLogin* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(password_, other->password_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RequestLogin::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RequestLogin_descriptor_;
  metadata.reflection = RequestLogin_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

// @@protoc_insertion_point(global_scope)
