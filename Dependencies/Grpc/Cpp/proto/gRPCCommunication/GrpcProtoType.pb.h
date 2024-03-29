// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/gRPCCommunication/GrpcProtoType.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fgRPCCommunication_2fGrpcProtoType_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fgRPCCommunication_2fGrpcProtoType_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fgRPCCommunication_2fGrpcProtoType_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fgRPCCommunication_2fGrpcProtoType_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fgRPCCommunication_2fGrpcProtoType_2eproto;
namespace gRPCCommunication {
class GrpcProtoType;
class GrpcProtoTypeDefaultTypeInternal;
extern GrpcProtoTypeDefaultTypeInternal _GrpcProtoType_default_instance_;
}  // namespace gRPCCommunication
PROTOBUF_NAMESPACE_OPEN
template<> ::gRPCCommunication::GrpcProtoType* Arena::CreateMaybeMessage<::gRPCCommunication::GrpcProtoType>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gRPCCommunication {

enum GrpcBaseProtoType : int {
  DOUBLE = 0,
  FLOAT = 1,
  INT32 = 2,
  INT64 = 3,
  UINT32 = 4,
  UINT64 = 5,
  SINT32 = 6,
  SINT64 = 7,
  FIXED32 = 8,
  FIXED64 = 9,
  SFIXED32 = 10,
  SFIXED64 = 11,
  BOOL = 12,
  STRING = 13,
  BYTES = 14,
  GrpcBaseProtoType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  GrpcBaseProtoType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool GrpcBaseProtoType_IsValid(int value);
constexpr GrpcBaseProtoType GrpcBaseProtoType_MIN = DOUBLE;
constexpr GrpcBaseProtoType GrpcBaseProtoType_MAX = BYTES;
constexpr int GrpcBaseProtoType_ARRAYSIZE = GrpcBaseProtoType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GrpcBaseProtoType_descriptor();
template<typename T>
inline const std::string& GrpcBaseProtoType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, GrpcBaseProtoType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function GrpcBaseProtoType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    GrpcBaseProtoType_descriptor(), enum_t_value);
}
inline bool GrpcBaseProtoType_Parse(
    const std::string& name, GrpcBaseProtoType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<GrpcBaseProtoType>(
    GrpcBaseProtoType_descriptor(), name, value);
}
// ===================================================================

class GrpcProtoType :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gRPCCommunication.GrpcProtoType) */ {
 public:
  GrpcProtoType();
  virtual ~GrpcProtoType();

  GrpcProtoType(const GrpcProtoType& from);
  GrpcProtoType(GrpcProtoType&& from) noexcept
    : GrpcProtoType() {
    *this = ::std::move(from);
  }

  inline GrpcProtoType& operator=(const GrpcProtoType& from) {
    CopyFrom(from);
    return *this;
  }
  inline GrpcProtoType& operator=(GrpcProtoType&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GrpcProtoType& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GrpcProtoType* internal_default_instance() {
    return reinterpret_cast<const GrpcProtoType*>(
               &_GrpcProtoType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GrpcProtoType* other);
  friend void swap(GrpcProtoType& a, GrpcProtoType& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GrpcProtoType* New() const final {
    return CreateMaybeMessage<GrpcProtoType>(nullptr);
  }

  GrpcProtoType* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GrpcProtoType>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GrpcProtoType& from);
  void MergeFrom(const GrpcProtoType& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GrpcProtoType* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gRPCCommunication.GrpcProtoType";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fgRPCCommunication_2fGrpcProtoType_2eproto);
    return ::descriptor_table_proto_2fgRPCCommunication_2fGrpcProtoType_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .gRPCCommunication.GrpcBaseProtoType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::gRPCCommunication::GrpcBaseProtoType type() const;
  void set_type(::gRPCCommunication::GrpcBaseProtoType value);

  // bool repeated = 2;
  void clear_repeated();
  static const int kRepeatedFieldNumber = 2;
  bool repeated() const;
  void set_repeated(bool value);

  // @@protoc_insertion_point(class_scope:gRPCCommunication.GrpcProtoType)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  int type_;
  bool repeated_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fgRPCCommunication_2fGrpcProtoType_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GrpcProtoType

// .gRPCCommunication.GrpcBaseProtoType type = 1;
inline void GrpcProtoType::clear_type() {
  type_ = 0;
}
inline ::gRPCCommunication::GrpcBaseProtoType GrpcProtoType::type() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcProtoType.type)
  return static_cast< ::gRPCCommunication::GrpcBaseProtoType >(type_);
}
inline void GrpcProtoType::set_type(::gRPCCommunication::GrpcBaseProtoType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcProtoType.type)
}

// bool repeated = 2;
inline void GrpcProtoType::clear_repeated() {
  repeated_ = false;
}
inline bool GrpcProtoType::repeated() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcProtoType.repeated)
  return repeated_;
}
inline void GrpcProtoType::set_repeated(bool value) {
  
  repeated_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcProtoType.repeated)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace gRPCCommunication

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::gRPCCommunication::GrpcBaseProtoType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gRPCCommunication::GrpcBaseProtoType>() {
  return ::gRPCCommunication::GrpcBaseProtoType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fgRPCCommunication_2fGrpcProtoType_2eproto
