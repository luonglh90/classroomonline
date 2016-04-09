// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Enums.proto

#ifndef PROTOBUF_Enums_2eproto__INCLUDED
#define PROTOBUF_Enums_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace METRO {
namespace CRO {
namespace MESSAGES {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Enums_2eproto();
void protobuf_AssignDesc_Enums_2eproto();
void protobuf_ShutdownFile_Enums_2eproto();

class Enums;

enum Enums_ResponseLoginEnums {
  Enums_ResponseLoginEnums_SUCCESS = 0,
  Enums_ResponseLoginEnums_FAILD_WRONG_PASS = 1
};
bool Enums_ResponseLoginEnums_IsValid(int value);
const Enums_ResponseLoginEnums Enums_ResponseLoginEnums_ResponseLoginEnums_MIN = Enums_ResponseLoginEnums_SUCCESS;
const Enums_ResponseLoginEnums Enums_ResponseLoginEnums_ResponseLoginEnums_MAX = Enums_ResponseLoginEnums_FAILD_WRONG_PASS;
const int Enums_ResponseLoginEnums_ResponseLoginEnums_ARRAYSIZE = Enums_ResponseLoginEnums_ResponseLoginEnums_MAX + 1;

const ::google::protobuf::EnumDescriptor* Enums_ResponseLoginEnums_descriptor();
inline const ::std::string& Enums_ResponseLoginEnums_Name(Enums_ResponseLoginEnums value) {
  return ::google::protobuf::internal::NameOfEnum(
    Enums_ResponseLoginEnums_descriptor(), value);
}
inline bool Enums_ResponseLoginEnums_Parse(
    const ::std::string& name, Enums_ResponseLoginEnums* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Enums_ResponseLoginEnums>(
    Enums_ResponseLoginEnums_descriptor(), name, value);
}
// ===================================================================

class Enums : public ::google::protobuf::Message {
 public:
  Enums();
  virtual ~Enums();

  Enums(const Enums& from);

  inline Enums& operator=(const Enums& from) {
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
  static const Enums& default_instance();

  void Swap(Enums* other);

  // implements Message ----------------------------------------------

  Enums* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Enums& from);
  void MergeFrom(const Enums& from);
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

  typedef Enums_ResponseLoginEnums ResponseLoginEnums;
  static const ResponseLoginEnums SUCCESS = Enums_ResponseLoginEnums_SUCCESS;
  static const ResponseLoginEnums FAILD_WRONG_PASS = Enums_ResponseLoginEnums_FAILD_WRONG_PASS;
  static inline bool ResponseLoginEnums_IsValid(int value) {
    return Enums_ResponseLoginEnums_IsValid(value);
  }
  static const ResponseLoginEnums ResponseLoginEnums_MIN =
    Enums_ResponseLoginEnums_ResponseLoginEnums_MIN;
  static const ResponseLoginEnums ResponseLoginEnums_MAX =
    Enums_ResponseLoginEnums_ResponseLoginEnums_MAX;
  static const int ResponseLoginEnums_ARRAYSIZE =
    Enums_ResponseLoginEnums_ResponseLoginEnums_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ResponseLoginEnums_descriptor() {
    return Enums_ResponseLoginEnums_descriptor();
  }
  static inline const ::std::string& ResponseLoginEnums_Name(ResponseLoginEnums value) {
    return Enums_ResponseLoginEnums_Name(value);
  }
  static inline bool ResponseLoginEnums_Parse(const ::std::string& name,
      ResponseLoginEnums* value) {
    return Enums_ResponseLoginEnums_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:METRO.CRO.MESSAGES.Enums)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Enums_2eproto();
  friend void protobuf_AssignDesc_Enums_2eproto();
  friend void protobuf_ShutdownFile_Enums_2eproto();

  void InitAsDefaultInstance();
  static Enums* default_instance_;
};
// ===================================================================


// ===================================================================

// Enums


// @@protoc_insertion_point(namespace_scope)

}  // namespace MESSAGES
}  // namespace CRO
}  // namespace METRO

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::METRO::CRO::MESSAGES::Enums_ResponseLoginEnums> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::METRO::CRO::MESSAGES::Enums_ResponseLoginEnums>() {
  return ::METRO::CRO::MESSAGES::Enums_ResponseLoginEnums_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Enums_2eproto__INCLUDED