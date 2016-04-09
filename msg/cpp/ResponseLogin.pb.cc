// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ResponseLogin.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ResponseLogin.pb.h"

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

const ::google::protobuf::Descriptor* ResponseLogin_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ResponseLogin_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ResponseLogin_2eproto() {
  protobuf_AddDesc_ResponseLogin_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ResponseLogin.proto");
  GOOGLE_CHECK(file != NULL);
  ResponseLogin_descriptor_ = file->message_type(0);
  static const int ResponseLogin_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseLogin, username_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseLogin, status_),
  };
  ResponseLogin_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ResponseLogin_descriptor_,
      ResponseLogin::default_instance_,
      ResponseLogin_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseLogin, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResponseLogin, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ResponseLogin));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ResponseLogin_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ResponseLogin_descriptor_, &ResponseLogin::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ResponseLogin_2eproto() {
  delete ResponseLogin::default_instance_;
  delete ResponseLogin_reflection_;
}

void protobuf_AddDesc_ResponseLogin_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::METRO::CRO::MESSAGES::protobuf_AddDesc_IpcMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023ResponseLogin.proto\022\022METRO.CRO.MESSAGE"
    "S\032\020IpcMessage.proto\"\205\001\n\rResponseLogin\022\020\n"
    "\010username\030\001 \001(\t\022\016\n\006status\030\002 \001(\0052R\n\007messa"
    "ge\022\036.METRO.CRO.MESSAGES.IpcMessage\030k \001(\013"
    "2!.METRO.CRO.MESSAGES.ResponseLogin", 195);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ResponseLogin.proto", &protobuf_RegisterTypes);
  ResponseLogin::default_instance_ = new ResponseLogin();
  ResponseLogin::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::METRO::CRO::MESSAGES::IpcMessage::default_instance(),
    107, 11, false, false,
    &::METRO::CRO::MESSAGES::ResponseLogin::default_instance());
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ResponseLogin_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ResponseLogin_2eproto {
  StaticDescriptorInitializer_ResponseLogin_2eproto() {
    protobuf_AddDesc_ResponseLogin_2eproto();
  }
} static_descriptor_initializer_ResponseLogin_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ResponseLogin::kUsernameFieldNumber;
const int ResponseLogin::kStatusFieldNumber;
#endif  // !_MSC_VER

#ifndef _MSC_VER
const int ResponseLogin::kMessageFieldNumber;
#endif
::google::protobuf::internal::ExtensionIdentifier< ::METRO::CRO::MESSAGES::IpcMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::METRO::CRO::MESSAGES::ResponseLogin >, 11, false >
  ResponseLogin::message(kMessageFieldNumber, ::METRO::CRO::MESSAGES::ResponseLogin::default_instance());
ResponseLogin::ResponseLogin()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:METRO.CRO.MESSAGES.ResponseLogin)
}

void ResponseLogin::InitAsDefaultInstance() {
}

ResponseLogin::ResponseLogin(const ResponseLogin& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:METRO.CRO.MESSAGES.ResponseLogin)
}

void ResponseLogin::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ResponseLogin::~ResponseLogin() {
  // @@protoc_insertion_point(destructor:METRO.CRO.MESSAGES.ResponseLogin)
  SharedDtor();
}

void ResponseLogin::SharedDtor() {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete username_;
  }
  if (this != default_instance_) {
  }
}

void ResponseLogin::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ResponseLogin::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ResponseLogin_descriptor_;
}

const ResponseLogin& ResponseLogin::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ResponseLogin_2eproto();
  return *default_instance_;
}

ResponseLogin* ResponseLogin::default_instance_ = NULL;

ResponseLogin* ResponseLogin::New() const {
  return new ResponseLogin;
}

void ResponseLogin::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        username_->clear();
      }
    }
    status_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ResponseLogin::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:METRO.CRO.MESSAGES.ResponseLogin)
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
        if (input->ExpectTag(16)) goto parse_status;
        break;
      }

      // optional int32 status = 2;
      case 2: {
        if (tag == 16) {
         parse_status:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
          set_has_status();
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
  // @@protoc_insertion_point(parse_success:METRO.CRO.MESSAGES.ResponseLogin)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:METRO.CRO.MESSAGES.ResponseLogin)
  return false;
#undef DO_
}

void ResponseLogin::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:METRO.CRO.MESSAGES.ResponseLogin)
  // optional string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "username");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->username(), output);
  }

  // optional int32 status = 2;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->status(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:METRO.CRO.MESSAGES.ResponseLogin)
}

::google::protobuf::uint8* ResponseLogin::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:METRO.CRO.MESSAGES.ResponseLogin)
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

  // optional int32 status = 2;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->status(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:METRO.CRO.MESSAGES.ResponseLogin)
  return target;
}

int ResponseLogin::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string username = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // optional int32 status = 2;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->status());
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

void ResponseLogin::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ResponseLogin* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ResponseLogin*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ResponseLogin::MergeFrom(const ResponseLogin& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ResponseLogin::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResponseLogin::CopyFrom(const ResponseLogin& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseLogin::IsInitialized() const {

  return true;
}

void ResponseLogin::Swap(ResponseLogin* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(status_, other->status_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ResponseLogin::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ResponseLogin_descriptor_;
  metadata.reflection = ResponseLogin_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

// @@protoc_insertion_point(global_scope)
