// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TestRoomInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TestRoomInfo.pb.h"

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

const ::google::protobuf::Descriptor* TestRoomInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestRoomInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_TestRoomInfo_2eproto() {
  protobuf_AddDesc_TestRoomInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "TestRoomInfo.proto");
  GOOGLE_CHECK(file != NULL);
  TestRoomInfo_descriptor_ = file->message_type(0);
  static const int TestRoomInfo_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestRoomInfo, uid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestRoomInfo, cateid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestRoomInfo, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestRoomInfo, teacher_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestRoomInfo, description_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestRoomInfo, imgurl_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestRoomInfo, timeopen_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestRoomInfo, timeclose_),
  };
  TestRoomInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TestRoomInfo_descriptor_,
      TestRoomInfo::default_instance_,
      TestRoomInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestRoomInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestRoomInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TestRoomInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_TestRoomInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TestRoomInfo_descriptor_, &TestRoomInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_TestRoomInfo_2eproto() {
  delete TestRoomInfo::default_instance_;
  delete TestRoomInfo_reflection_;
}

void protobuf_AddDesc_TestRoomInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::METRO::CRO::MESSAGES::protobuf_AddDesc_User_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022TestRoomInfo.proto\022\022METRO.CRO.MESSAGES"
    "\032\nUser.proto\"\256\001\n\014TestRoomInfo\022\013\n\003uid\030\001 \002"
    "(\t\022\016\n\006cateid\030\002 \002(\t\022\014\n\004name\030\003 \002(\t\022)\n\007teac"
    "her\030\004 \002(\0132\030.METRO.CRO.MESSAGES.User\022\023\n\013d"
    "escription\030\005 \001(\t\022\016\n\006imgurl\030\006 \001(\t\022\020\n\010time"
    "open\030\007 \001(\t\022\021\n\ttimeclose\030\010 \001(\t", 229);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "TestRoomInfo.proto", &protobuf_RegisterTypes);
  TestRoomInfo::default_instance_ = new TestRoomInfo();
  TestRoomInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_TestRoomInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_TestRoomInfo_2eproto {
  StaticDescriptorInitializer_TestRoomInfo_2eproto() {
    protobuf_AddDesc_TestRoomInfo_2eproto();
  }
} static_descriptor_initializer_TestRoomInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TestRoomInfo::kUidFieldNumber;
const int TestRoomInfo::kCateidFieldNumber;
const int TestRoomInfo::kNameFieldNumber;
const int TestRoomInfo::kTeacherFieldNumber;
const int TestRoomInfo::kDescriptionFieldNumber;
const int TestRoomInfo::kImgurlFieldNumber;
const int TestRoomInfo::kTimeopenFieldNumber;
const int TestRoomInfo::kTimecloseFieldNumber;
#endif  // !_MSC_VER

TestRoomInfo::TestRoomInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:METRO.CRO.MESSAGES.TestRoomInfo)
}

void TestRoomInfo::InitAsDefaultInstance() {
  teacher_ = const_cast< ::METRO::CRO::MESSAGES::User*>(&::METRO::CRO::MESSAGES::User::default_instance());
}

TestRoomInfo::TestRoomInfo(const TestRoomInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:METRO.CRO.MESSAGES.TestRoomInfo)
}

void TestRoomInfo::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  uid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cateid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  teacher_ = NULL;
  description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  imgurl_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  timeopen_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  timeclose_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TestRoomInfo::~TestRoomInfo() {
  // @@protoc_insertion_point(destructor:METRO.CRO.MESSAGES.TestRoomInfo)
  SharedDtor();
}

void TestRoomInfo::SharedDtor() {
  if (uid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete uid_;
  }
  if (cateid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete cateid_;
  }
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete description_;
  }
  if (imgurl_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete imgurl_;
  }
  if (timeopen_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete timeopen_;
  }
  if (timeclose_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete timeclose_;
  }
  if (this != default_instance_) {
    delete teacher_;
  }
}

void TestRoomInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestRoomInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestRoomInfo_descriptor_;
}

const TestRoomInfo& TestRoomInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TestRoomInfo_2eproto();
  return *default_instance_;
}

TestRoomInfo* TestRoomInfo::default_instance_ = NULL;

TestRoomInfo* TestRoomInfo::New() const {
  return new TestRoomInfo;
}

void TestRoomInfo::Clear() {
  if (_has_bits_[0 / 32] & 255) {
    if (has_uid()) {
      if (uid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        uid_->clear();
      }
    }
    if (has_cateid()) {
      if (cateid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        cateid_->clear();
      }
    }
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
    if (has_teacher()) {
      if (teacher_ != NULL) teacher_->::METRO::CRO::MESSAGES::User::Clear();
    }
    if (has_description()) {
      if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        description_->clear();
      }
    }
    if (has_imgurl()) {
      if (imgurl_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        imgurl_->clear();
      }
    }
    if (has_timeopen()) {
      if (timeopen_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        timeopen_->clear();
      }
    }
    if (has_timeclose()) {
      if (timeclose_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        timeclose_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TestRoomInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:METRO.CRO.MESSAGES.TestRoomInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string uid = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->uid().data(), this->uid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "uid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_cateid;
        break;
      }

      // required string cateid = 2;
      case 2: {
        if (tag == 18) {
         parse_cateid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cateid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->cateid().data(), this->cateid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "cateid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_name;
        break;
      }

      // required string name = 3;
      case 3: {
        if (tag == 26) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_teacher;
        break;
      }

      // required .METRO.CRO.MESSAGES.User teacher = 4;
      case 4: {
        if (tag == 34) {
         parse_teacher:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_teacher()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_description;
        break;
      }

      // optional string description = 5;
      case 5: {
        if (tag == 42) {
         parse_description:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->description().data(), this->description().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "description");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_imgurl;
        break;
      }

      // optional string imgurl = 6;
      case 6: {
        if (tag == 50) {
         parse_imgurl:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_imgurl()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->imgurl().data(), this->imgurl().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "imgurl");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_timeopen;
        break;
      }

      // optional string timeopen = 7;
      case 7: {
        if (tag == 58) {
         parse_timeopen:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_timeopen()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->timeopen().data(), this->timeopen().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "timeopen");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_timeclose;
        break;
      }

      // optional string timeclose = 8;
      case 8: {
        if (tag == 66) {
         parse_timeclose:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_timeclose()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->timeclose().data(), this->timeclose().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "timeclose");
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
  // @@protoc_insertion_point(parse_success:METRO.CRO.MESSAGES.TestRoomInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:METRO.CRO.MESSAGES.TestRoomInfo)
  return false;
#undef DO_
}

void TestRoomInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:METRO.CRO.MESSAGES.TestRoomInfo)
  // required string uid = 1;
  if (has_uid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->uid().data(), this->uid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "uid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->uid(), output);
  }

  // required string cateid = 2;
  if (has_cateid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->cateid().data(), this->cateid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "cateid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->cateid(), output);
  }

  // required string name = 3;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->name(), output);
  }

  // required .METRO.CRO.MESSAGES.User teacher = 4;
  if (has_teacher()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->teacher(), output);
  }

  // optional string description = 5;
  if (has_description()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->description(), output);
  }

  // optional string imgurl = 6;
  if (has_imgurl()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->imgurl().data(), this->imgurl().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "imgurl");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->imgurl(), output);
  }

  // optional string timeopen = 7;
  if (has_timeopen()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->timeopen().data(), this->timeopen().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "timeopen");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->timeopen(), output);
  }

  // optional string timeclose = 8;
  if (has_timeclose()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->timeclose().data(), this->timeclose().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "timeclose");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->timeclose(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:METRO.CRO.MESSAGES.TestRoomInfo)
}

::google::protobuf::uint8* TestRoomInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:METRO.CRO.MESSAGES.TestRoomInfo)
  // required string uid = 1;
  if (has_uid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->uid().data(), this->uid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "uid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->uid(), target);
  }

  // required string cateid = 2;
  if (has_cateid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->cateid().data(), this->cateid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "cateid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->cateid(), target);
  }

  // required string name = 3;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  // required .METRO.CRO.MESSAGES.User teacher = 4;
  if (has_teacher()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->teacher(), target);
  }

  // optional string description = 5;
  if (has_description()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->description(), target);
  }

  // optional string imgurl = 6;
  if (has_imgurl()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->imgurl().data(), this->imgurl().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "imgurl");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->imgurl(), target);
  }

  // optional string timeopen = 7;
  if (has_timeopen()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->timeopen().data(), this->timeopen().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "timeopen");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->timeopen(), target);
  }

  // optional string timeclose = 8;
  if (has_timeclose()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->timeclose().data(), this->timeclose().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "timeclose");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->timeclose(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:METRO.CRO.MESSAGES.TestRoomInfo)
  return target;
}

int TestRoomInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string uid = 1;
    if (has_uid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->uid());
    }

    // required string cateid = 2;
    if (has_cateid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->cateid());
    }

    // required string name = 3;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required .METRO.CRO.MESSAGES.User teacher = 4;
    if (has_teacher()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->teacher());
    }

    // optional string description = 5;
    if (has_description()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->description());
    }

    // optional string imgurl = 6;
    if (has_imgurl()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->imgurl());
    }

    // optional string timeopen = 7;
    if (has_timeopen()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->timeopen());
    }

    // optional string timeclose = 8;
    if (has_timeclose()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->timeclose());
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

void TestRoomInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TestRoomInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TestRoomInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TestRoomInfo::MergeFrom(const TestRoomInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uid()) {
      set_uid(from.uid());
    }
    if (from.has_cateid()) {
      set_cateid(from.cateid());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_teacher()) {
      mutable_teacher()->::METRO::CRO::MESSAGES::User::MergeFrom(from.teacher());
    }
    if (from.has_description()) {
      set_description(from.description());
    }
    if (from.has_imgurl()) {
      set_imgurl(from.imgurl());
    }
    if (from.has_timeopen()) {
      set_timeopen(from.timeopen());
    }
    if (from.has_timeclose()) {
      set_timeclose(from.timeclose());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TestRoomInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestRoomInfo::CopyFrom(const TestRoomInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestRoomInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  if (has_teacher()) {
    if (!this->teacher().IsInitialized()) return false;
  }
  return true;
}

void TestRoomInfo::Swap(TestRoomInfo* other) {
  if (other != this) {
    std::swap(uid_, other->uid_);
    std::swap(cateid_, other->cateid_);
    std::swap(name_, other->name_);
    std::swap(teacher_, other->teacher_);
    std::swap(description_, other->description_);
    std::swap(imgurl_, other->imgurl_);
    std::swap(timeopen_, other->timeopen_);
    std::swap(timeclose_, other->timeclose_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TestRoomInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestRoomInfo_descriptor_;
  metadata.reflection = TestRoomInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

// @@protoc_insertion_point(global_scope)
