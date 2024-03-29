// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/gRPCCommunication/GrpcPackage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fgRPCCommunication_2fGrpcPackage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fgRPCCommunication_2fGrpcPackage_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "proto/gRPCCommunication/GrpcHeader.pb.h"
#include "proto/gRPCCommunication/GrpcStepInput.pb.h"
#include "proto/gRPCCommunication/GrpcStepOutput.pb.h"
#include "proto/gRPCCommunication/GrpcParameter.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fgRPCCommunication_2fGrpcPackage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fgRPCCommunication_2fGrpcPackage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto;
namespace gRPCCommunication {
class GrpcPackage;
class GrpcPackageDefaultTypeInternal;
extern GrpcPackageDefaultTypeInternal _GrpcPackage_default_instance_;
}  // namespace gRPCCommunication
PROTOBUF_NAMESPACE_OPEN
template<> ::gRPCCommunication::GrpcPackage* Arena::CreateMaybeMessage<::gRPCCommunication::GrpcPackage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gRPCCommunication {

// ===================================================================

class GrpcPackage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gRPCCommunication.GrpcPackage) */ {
 public:
  GrpcPackage();
  virtual ~GrpcPackage();

  GrpcPackage(const GrpcPackage& from);
  GrpcPackage(GrpcPackage&& from) noexcept
    : GrpcPackage() {
    *this = ::std::move(from);
  }

  inline GrpcPackage& operator=(const GrpcPackage& from) {
    CopyFrom(from);
    return *this;
  }
  inline GrpcPackage& operator=(GrpcPackage&& from) noexcept {
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
  static const GrpcPackage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GrpcPackage* internal_default_instance() {
    return reinterpret_cast<const GrpcPackage*>(
               &_GrpcPackage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GrpcPackage* other);
  friend void swap(GrpcPackage& a, GrpcPackage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GrpcPackage* New() const final {
    return CreateMaybeMessage<GrpcPackage>(nullptr);
  }

  GrpcPackage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GrpcPackage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GrpcPackage& from);
  void MergeFrom(const GrpcPackage& from);
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
  void InternalSwap(GrpcPackage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gRPCCommunication.GrpcPackage";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto);
    return ::descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .gRPCCommunication.GrpcParameter trainingParameters = 4;
  int trainingparameters_size() const;
  void clear_trainingparameters();
  static const int kTrainingParametersFieldNumber = 4;
  ::gRPCCommunication::GrpcParameter* mutable_trainingparameters(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gRPCCommunication::GrpcParameter >*
      mutable_trainingparameters();
  const ::gRPCCommunication::GrpcParameter& trainingparameters(int index) const;
  ::gRPCCommunication::GrpcParameter* add_trainingparameters();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gRPCCommunication::GrpcParameter >&
      trainingparameters() const;

  // .gRPCCommunication.GrpcHeader header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::gRPCCommunication::GrpcHeader& header() const;
  ::gRPCCommunication::GrpcHeader* release_header();
  ::gRPCCommunication::GrpcHeader* mutable_header();
  void set_allocated_header(::gRPCCommunication::GrpcHeader* header);

  // .gRPCCommunication.GrpcStepInput input = 2;
  bool has_input() const;
  void clear_input();
  static const int kInputFieldNumber = 2;
  const ::gRPCCommunication::GrpcStepInput& input() const;
  ::gRPCCommunication::GrpcStepInput* release_input();
  ::gRPCCommunication::GrpcStepInput* mutable_input();
  void set_allocated_input(::gRPCCommunication::GrpcStepInput* input);

  // .gRPCCommunication.GrpcStepOutput output = 3;
  bool has_output() const;
  void clear_output();
  static const int kOutputFieldNumber = 3;
  const ::gRPCCommunication::GrpcStepOutput& output() const;
  ::gRPCCommunication::GrpcStepOutput* release_output();
  ::gRPCCommunication::GrpcStepOutput* mutable_output();
  void set_allocated_output(::gRPCCommunication::GrpcStepOutput* output);

  // @@protoc_insertion_point(class_scope:gRPCCommunication.GrpcPackage)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gRPCCommunication::GrpcParameter > trainingparameters_;
  ::gRPCCommunication::GrpcHeader* header_;
  ::gRPCCommunication::GrpcStepInput* input_;
  ::gRPCCommunication::GrpcStepOutput* output_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fgRPCCommunication_2fGrpcPackage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GrpcPackage

// .gRPCCommunication.GrpcHeader header = 1;
inline bool GrpcPackage::has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline const ::gRPCCommunication::GrpcHeader& GrpcPackage::header() const {
  const ::gRPCCommunication::GrpcHeader* p = header_;
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPackage.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::gRPCCommunication::GrpcHeader*>(
      &::gRPCCommunication::_GrpcHeader_default_instance_);
}
inline ::gRPCCommunication::GrpcHeader* GrpcPackage::release_header() {
  // @@protoc_insertion_point(field_release:gRPCCommunication.GrpcPackage.header)
  
  ::gRPCCommunication::GrpcHeader* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::gRPCCommunication::GrpcHeader* GrpcPackage::mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::gRPCCommunication::GrpcHeader>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gRPCCommunication.GrpcPackage.header)
  return header_;
}
inline void GrpcPackage::set_allocated_header(::gRPCCommunication::GrpcHeader* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:gRPCCommunication.GrpcPackage.header)
}

// .gRPCCommunication.GrpcStepInput input = 2;
inline bool GrpcPackage::has_input() const {
  return this != internal_default_instance() && input_ != nullptr;
}
inline const ::gRPCCommunication::GrpcStepInput& GrpcPackage::input() const {
  const ::gRPCCommunication::GrpcStepInput* p = input_;
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPackage.input)
  return p != nullptr ? *p : *reinterpret_cast<const ::gRPCCommunication::GrpcStepInput*>(
      &::gRPCCommunication::_GrpcStepInput_default_instance_);
}
inline ::gRPCCommunication::GrpcStepInput* GrpcPackage::release_input() {
  // @@protoc_insertion_point(field_release:gRPCCommunication.GrpcPackage.input)
  
  ::gRPCCommunication::GrpcStepInput* temp = input_;
  input_ = nullptr;
  return temp;
}
inline ::gRPCCommunication::GrpcStepInput* GrpcPackage::mutable_input() {
  
  if (input_ == nullptr) {
    auto* p = CreateMaybeMessage<::gRPCCommunication::GrpcStepInput>(GetArenaNoVirtual());
    input_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gRPCCommunication.GrpcPackage.input)
  return input_;
}
inline void GrpcPackage::set_allocated_input(::gRPCCommunication::GrpcStepInput* input) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(input_);
  }
  if (input) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      input = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, input, submessage_arena);
    }
    
  } else {
    
  }
  input_ = input;
  // @@protoc_insertion_point(field_set_allocated:gRPCCommunication.GrpcPackage.input)
}

// .gRPCCommunication.GrpcStepOutput output = 3;
inline bool GrpcPackage::has_output() const {
  return this != internal_default_instance() && output_ != nullptr;
}
inline const ::gRPCCommunication::GrpcStepOutput& GrpcPackage::output() const {
  const ::gRPCCommunication::GrpcStepOutput* p = output_;
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPackage.output)
  return p != nullptr ? *p : *reinterpret_cast<const ::gRPCCommunication::GrpcStepOutput*>(
      &::gRPCCommunication::_GrpcStepOutput_default_instance_);
}
inline ::gRPCCommunication::GrpcStepOutput* GrpcPackage::release_output() {
  // @@protoc_insertion_point(field_release:gRPCCommunication.GrpcPackage.output)
  
  ::gRPCCommunication::GrpcStepOutput* temp = output_;
  output_ = nullptr;
  return temp;
}
inline ::gRPCCommunication::GrpcStepOutput* GrpcPackage::mutable_output() {
  
  if (output_ == nullptr) {
    auto* p = CreateMaybeMessage<::gRPCCommunication::GrpcStepOutput>(GetArenaNoVirtual());
    output_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gRPCCommunication.GrpcPackage.output)
  return output_;
}
inline void GrpcPackage::set_allocated_output(::gRPCCommunication::GrpcStepOutput* output) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(output_);
  }
  if (output) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      output = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, output, submessage_arena);
    }
    
  } else {
    
  }
  output_ = output;
  // @@protoc_insertion_point(field_set_allocated:gRPCCommunication.GrpcPackage.output)
}

// repeated .gRPCCommunication.GrpcParameter trainingParameters = 4;
inline int GrpcPackage::trainingparameters_size() const {
  return trainingparameters_.size();
}
inline ::gRPCCommunication::GrpcParameter* GrpcPackage::mutable_trainingparameters(int index) {
  // @@protoc_insertion_point(field_mutable:gRPCCommunication.GrpcPackage.trainingParameters)
  return trainingparameters_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gRPCCommunication::GrpcParameter >*
GrpcPackage::mutable_trainingparameters() {
  // @@protoc_insertion_point(field_mutable_list:gRPCCommunication.GrpcPackage.trainingParameters)
  return &trainingparameters_;
}
inline const ::gRPCCommunication::GrpcParameter& GrpcPackage::trainingparameters(int index) const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPackage.trainingParameters)
  return trainingparameters_.Get(index);
}
inline ::gRPCCommunication::GrpcParameter* GrpcPackage::add_trainingparameters() {
  // @@protoc_insertion_point(field_add:gRPCCommunication.GrpcPackage.trainingParameters)
  return trainingparameters_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gRPCCommunication::GrpcParameter >&
GrpcPackage::trainingparameters() const {
  // @@protoc_insertion_point(field_list:gRPCCommunication.GrpcPackage.trainingParameters)
  return trainingparameters_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace gRPCCommunication

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fgRPCCommunication_2fGrpcPackage_2eproto
