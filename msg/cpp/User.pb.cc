// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: User.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "User.pb.h"

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

const ::google::protobuf::Descriptor* User_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  User_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_User_2eproto() {
  protobuf_AddDesc_User_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "User.proto");
  GOOGLE_CHECK(file != NULL);
  User_descriptor_ = file->message_type(0);
  static const int User_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, username_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, email_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, fullname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, yearofborn_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, imgurl_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, password_),
  };
  User_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      User_descriptor_,
      User::default_instance_,
      User_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(User));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_User_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    User_descriptor_, &User::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_User_2eproto() {
  delete User::default_instance_;
  delete User_reflection_;
}

void protobuf_AddDesc_User_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nUser.proto\022\022METRO.CRO.MESSAGES\"o\n\004User"
    "\022\020\n\010username\030\001 \002(\t\022\r\n\005email\030\002 \002(\t\022\020\n\010ful"
    "lname\030\003 \001(\t\022\022\n\nyearofborn\030\004 \002(\t\022\016\n\006imgur"
    "l\030\005 \001(\t\022\020\n\010password\030\006 \001(\t", 145);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "User.proto", &protobuf_RegisterTypes);
  User::default_instance_ = new User();
  User::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_User_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_User_2eproto {
  StaticDescriptorInitializer_User_2eproto() {
    protobuf_AddDesc_User_2eproto();
  }
} static_descriptor_initializer_User_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int User::kUsernameFieldNumber;
const int User::kEmailFieldNumber;
const int User::kFullnameFieldNumber;
const int User::kYearofbornFieldNumber;
const int User::kImgurlFieldNumber;
const int User::kPasswordFieldNumber;
#endif  // !_MSC_VER

User::User()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:METRO.CRO.MESSAGES.User)
}

void User::InitAsDefaultInstance() {
}

User::User(const User& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:METRO.CRO.MESSAGES.User)
}

void User::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fullname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  yearofborn_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  imgurl_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

User::~User() {
  // @@protoc_insertion_point(destructor:METRO.CRO.MESSAGES.User)
  SharedDtor();
}

void User::SharedDtor() {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete username_;
  }
  if (email_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete email_;
  }
  if (fullname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete fullname_;
  }
  if (yearofborn_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete yearofborn_;
  }
  if (imgurl_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete imgurl_;
  }
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (this != default_instance_) {
  }
}

void User::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* User::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return User_descriptor_;
}

const User& User::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_User_2eproto();
  return *default_instance_;
}

User* User::default_instance_ = NULL;

User* User::New() const {
  return new User;
}

void User::Clear() {
  if (_has_bits_[0 / 32] & 63) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        username_->clear();
      }
    }
    if (has_email()) {
      if (email_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        email_->clear();
      }
    }
    if (has_fullname()) {
      if (fullname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        fullname_->clear();
      }
    }
    if (has_yearofborn()) {
      if (yearofborn_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        yearofborn_->clear();
      }
    }
    if (has_imgurl()) {
      if (imgurl_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        imgurl_->clear();
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

bool User::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:METRO.CRO.MESSAGES.User)
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
        if (input->ExpectTag(18)) goto parse_email;
        break;
      }

      // required string email = 2;
      case 2: {
        if (tag == 18) {
         parse_email:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_email()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->email().data(), this->email().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "email");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_fullname;
        break;
      }

      // optional string fullname = 3;
      case 3: {
        if (tag == 26) {
         parse_fullname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_fullname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->fullname().data(), this->fullname().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "fullname");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_yearofborn;
        break;
      }

      // required string yearofborn = 4;
      case 4: {
        if (tag == 34) {
         parse_yearofborn:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_yearofborn()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->yearofborn().data(), this->yearofborn().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "yearofborn");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_imgurl;
        break;
      }

      // optional string imgurl = 5;
      case 5: {
        if (tag == 42) {
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
        if (input->ExpectTag(50)) goto parse_password;
        break;
      }

      // optional string password = 6;
      case 6: {
        if (tag == 50) {
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
  // @@protoc_insertion_point(parse_success:METRO.CRO.MESSAGES.User)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:METRO.CRO.MESSAGES.User)
  return false;
#undef DO_
}

void User::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:METRO.CRO.MESSAGES.User)
  // required string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "username");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->username(), output);
  }

  // required string email = 2;
  if (has_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "email");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->email(), output);
  }

  // optional string fullname = 3;
  if (has_fullname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->fullname().data(), this->fullname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "fullname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->fullname(), output);
  }

  // required string yearofborn = 4;
  if (has_yearofborn()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->yearofborn().data(), this->yearofborn().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "yearofborn");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->yearofborn(), output);
  }

  // optional string imgurl = 5;
  if (has_imgurl()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->imgurl().data(), this->imgurl().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "imgurl");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->imgurl(), output);
  }

  // optional string password = 6;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "password");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->password(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:METRO.CRO.MESSAGES.User)
}

::google::protobuf::uint8* User::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:METRO.CRO.MESSAGES.User)
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

  // required string email = 2;
  if (has_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "email");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->email(), target);
  }

  // optional string fullname = 3;
  if (has_fullname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->fullname().data(), this->fullname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "fullname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->fullname(), target);
  }

  // required string yearofborn = 4;
  if (has_yearofborn()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->yearofborn().data(), this->yearofborn().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "yearofborn");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->yearofborn(), target);
  }

  // optional string imgurl = 5;
  if (has_imgurl()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->imgurl().data(), this->imgurl().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "imgurl");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->imgurl(), target);
  }

  // optional string password = 6;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "password");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->password(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:METRO.CRO.MESSAGES.User)
  return target;
}

int User::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string username = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // required string email = 2;
    if (has_email()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->email());
    }

    // optional string fullname = 3;
    if (has_fullname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->fullname());
    }

    // required string yearofborn = 4;
    if (has_yearofborn()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->yearofborn());
    }

    // optional string imgurl = 5;
    if (has_imgurl()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->imgurl());
    }

    // optional string password = 6;
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

void User::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const User* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const User*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void User::MergeFrom(const User& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_email()) {
      set_email(from.email());
    }
    if (from.has_fullname()) {
      set_fullname(from.fullname());
    }
    if (from.has_yearofborn()) {
      set_yearofborn(from.yearofborn());
    }
    if (from.has_imgurl()) {
      set_imgurl(from.imgurl());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void User::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void User::CopyFrom(const User& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool User::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000b) != 0x0000000b) return false;

  return true;
}

void User::Swap(User* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(email_, other->email_);
    std::swap(fullname_, other->fullname_);
    std::swap(yearofborn_, other->yearofborn_);
    std::swap(imgurl_, other->imgurl_);
    std::swap(password_, other->password_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata User::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = User_descriptor_;
  metadata.reflection = User_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

// @@protoc_insertion_point(global_scope)
