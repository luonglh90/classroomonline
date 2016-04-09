// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IpcMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "IpcMessage.pb.h"

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

const ::google::protobuf::Descriptor* IpcMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  IpcMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_IpcMessage_2eproto() {
  protobuf_AddDesc_IpcMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "IpcMessage.proto");
  GOOGLE_CHECK(file != NULL);
  IpcMessage_descriptor_ = file->message_type(0);
  static const int IpcMessage_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpcMessage, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpcMessage, payload_data_),
  };
  IpcMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      IpcMessage_descriptor_,
      IpcMessage::default_instance_,
      IpcMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpcMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IpcMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(IpcMessage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_IpcMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    IpcMessage_descriptor_, &IpcMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_IpcMessage_2eproto() {
  delete IpcMessage::default_instance_;
  delete IpcMessage_reflection_;
}

void protobuf_AddDesc_IpcMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020IpcMessage.proto\022\022METRO.CRO.MESSAGES\"."
    "\n\nIpcMessage\022\n\n\002id\030\001 \001(\003\022\024\n\014payload_data"
    "\030\002 \001(\014", 86);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "IpcMessage.proto", &protobuf_RegisterTypes);
  IpcMessage::default_instance_ = new IpcMessage();
  IpcMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_IpcMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_IpcMessage_2eproto {
  StaticDescriptorInitializer_IpcMessage_2eproto() {
    protobuf_AddDesc_IpcMessage_2eproto();
  }
} static_descriptor_initializer_IpcMessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int IpcMessage::kIdFieldNumber;
const int IpcMessage::kPayloadDataFieldNumber;
#endif  // !_MSC_VER

IpcMessage::IpcMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:METRO.CRO.MESSAGES.IpcMessage)
}

void IpcMessage::InitAsDefaultInstance() {
}

IpcMessage::IpcMessage(const IpcMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:METRO.CRO.MESSAGES.IpcMessage)
}

void IpcMessage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = GOOGLE_LONGLONG(0);
  payload_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IpcMessage::~IpcMessage() {
  // @@protoc_insertion_point(destructor:METRO.CRO.MESSAGES.IpcMessage)
  SharedDtor();
}

void IpcMessage::SharedDtor() {
  if (payload_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete payload_data_;
  }
  if (this != default_instance_) {
  }
}

void IpcMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* IpcMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return IpcMessage_descriptor_;
}

const IpcMessage& IpcMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_IpcMessage_2eproto();
  return *default_instance_;
}

IpcMessage* IpcMessage::default_instance_ = NULL;

IpcMessage* IpcMessage::New() const {
  return new IpcMessage;
}

void IpcMessage::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    id_ = GOOGLE_LONGLONG(0);
    if (has_payload_data()) {
      if (payload_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        payload_data_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool IpcMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:METRO.CRO.MESSAGES.IpcMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_payload_data;
        break;
      }

      // optional bytes payload_data = 2;
      case 2: {
        if (tag == 18) {
         parse_payload_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_payload_data()));
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
  // @@protoc_insertion_point(parse_success:METRO.CRO.MESSAGES.IpcMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:METRO.CRO.MESSAGES.IpcMessage)
  return false;
#undef DO_
}

void IpcMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:METRO.CRO.MESSAGES.IpcMessage)
  // optional int64 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // optional bytes payload_data = 2;
  if (has_payload_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->payload_data(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:METRO.CRO.MESSAGES.IpcMessage)
}

::google::protobuf::uint8* IpcMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:METRO.CRO.MESSAGES.IpcMessage)
  // optional int64 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->id(), target);
  }

  // optional bytes payload_data = 2;
  if (has_payload_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->payload_data(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:METRO.CRO.MESSAGES.IpcMessage)
  return target;
}

int IpcMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->id());
    }

    // optional bytes payload_data = 2;
    if (has_payload_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->payload_data());
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

void IpcMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const IpcMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const IpcMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void IpcMessage::MergeFrom(const IpcMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_payload_data()) {
      set_payload_data(from.payload_data());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void IpcMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IpcMessage::CopyFrom(const IpcMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IpcMessage::IsInitialized() const {

  return true;
}

void IpcMessage::Swap(IpcMessage* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(payload_data_, other->payload_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata IpcMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = IpcMessage_descriptor_;
  metadata.reflection = IpcMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

// @@protoc_insertion_point(global_scope)
