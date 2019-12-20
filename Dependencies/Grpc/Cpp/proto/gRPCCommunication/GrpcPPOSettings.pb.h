// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/gRPCCommunication/GrpcPPOSettings.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fgRPCCommunication_2fGrpcPPOSettings_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fgRPCCommunication_2fGrpcPPOSettings_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fgRPCCommunication_2fGrpcPPOSettings_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fgRPCCommunication_2fGrpcPPOSettings_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fgRPCCommunication_2fGrpcPPOSettings_2eproto;
namespace gRPCCommunication {
class GrpcPPOSettings;
class GrpcPPOSettingsDefaultTypeInternal;
extern GrpcPPOSettingsDefaultTypeInternal _GrpcPPOSettings_default_instance_;
}  // namespace gRPCCommunication
PROTOBUF_NAMESPACE_OPEN
template<> ::gRPCCommunication::GrpcPPOSettings* Arena::CreateMaybeMessage<::gRPCCommunication::GrpcPPOSettings>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gRPCCommunication {

// ===================================================================

class GrpcPPOSettings :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gRPCCommunication.GrpcPPOSettings) */ {
 public:
  GrpcPPOSettings();
  virtual ~GrpcPPOSettings();

  GrpcPPOSettings(const GrpcPPOSettings& from);
  GrpcPPOSettings(GrpcPPOSettings&& from) noexcept
    : GrpcPPOSettings() {
    *this = ::std::move(from);
  }

  inline GrpcPPOSettings& operator=(const GrpcPPOSettings& from) {
    CopyFrom(from);
    return *this;
  }
  inline GrpcPPOSettings& operator=(GrpcPPOSettings&& from) noexcept {
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
  static const GrpcPPOSettings& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GrpcPPOSettings* internal_default_instance() {
    return reinterpret_cast<const GrpcPPOSettings*>(
               &_GrpcPPOSettings_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GrpcPPOSettings* other);
  friend void swap(GrpcPPOSettings& a, GrpcPPOSettings& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GrpcPPOSettings* New() const final {
    return CreateMaybeMessage<GrpcPPOSettings>(nullptr);
  }

  GrpcPPOSettings* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GrpcPPOSettings>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GrpcPPOSettings& from);
  void MergeFrom(const GrpcPPOSettings& from);
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
  void InternalSwap(GrpcPPOSettings* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gRPCCommunication.GrpcPPOSettings";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fgRPCCommunication_2fGrpcPPOSettings_2eproto);
    return ::descriptor_table_proto_2fgRPCCommunication_2fGrpcPPOSettings_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string learningRateDecay = 6;
  void clear_learningratedecay();
  static const int kLearningRateDecayFieldNumber = 6;
  const std::string& learningratedecay() const;
  void set_learningratedecay(const std::string& value);
  void set_learningratedecay(std::string&& value);
  void set_learningratedecay(const char* value);
  void set_learningratedecay(const char* value, size_t size);
  std::string* mutable_learningratedecay();
  std::string* release_learningratedecay();
  void set_allocated_learningratedecay(std::string* learningratedecay);

  // int32 numAction = 1;
  void clear_numaction();
  static const int kNumActionFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::int32 numaction() const;
  void set_numaction(::PROTOBUF_NAMESPACE_ID::int32 value);

  // float valueFactor = 2;
  void clear_valuefactor();
  static const int kValueFactorFieldNumber = 2;
  float valuefactor() const;
  void set_valuefactor(float value);

  // float entropyFactor = 3;
  void clear_entropyfactor();
  static const int kEntropyFactorFieldNumber = 3;
  float entropyfactor() const;
  void set_entropyfactor(float value);

  // float epsilon = 4;
  void clear_epsilon();
  static const int kEpsilonFieldNumber = 4;
  float epsilon() const;
  void set_epsilon(float value);

  // float learningRate = 5;
  void clear_learningrate();
  static const int kLearningRateFieldNumber = 5;
  float learningrate() const;
  void set_learningrate(float value);

  // float grapClip = 7;
  void clear_grapclip();
  static const int kGrapClipFieldNumber = 7;
  float grapclip() const;
  void set_grapclip(float value);

  // float loadEpisodeSaved = 8;
  void clear_loadepisodesaved();
  static const int kLoadEpisodeSavedFieldNumber = 8;
  float loadepisodesaved() const;
  void set_loadepisodesaved(float value);

  // float savedEpisode = 9;
  void clear_savedepisode();
  static const int kSavedEpisodeFieldNumber = 9;
  float savedepisode() const;
  void set_savedepisode(float value);

  // float timeHozizon = 10;
  void clear_timehozizon();
  static const int kTimeHozizonFieldNumber = 10;
  float timehozizon() const;
  void set_timehozizon(float value);

  // float batchSize = 11;
  void clear_batchsize();
  static const int kBatchSizeFieldNumber = 11;
  float batchsize() const;
  void set_batchsize(float value);

  // float gamma = 12;
  void clear_gamma();
  static const int kGammaFieldNumber = 12;
  float gamma() const;
  void set_gamma(float value);

  // float lam = 13;
  void clear_lam();
  static const int kLamFieldNumber = 13;
  float lam() const;
  void set_lam(float value);

  // int32 epoch = 14;
  void clear_epoch();
  static const int kEpochFieldNumber = 14;
  ::PROTOBUF_NAMESPACE_ID::int32 epoch() const;
  void set_epoch(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 actors = 15;
  void clear_actors();
  static const int kActorsFieldNumber = 15;
  ::PROTOBUF_NAMESPACE_ID::int32 actors() const;
  void set_actors(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 finalStep = 16;
  void clear_finalstep();
  static const int kFinalStepFieldNumber = 16;
  ::PROTOBUF_NAMESPACE_ID::int32 finalstep() const;
  void set_finalstep(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:gRPCCommunication.GrpcPPOSettings)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr learningratedecay_;
  ::PROTOBUF_NAMESPACE_ID::int32 numaction_;
  float valuefactor_;
  float entropyfactor_;
  float epsilon_;
  float learningrate_;
  float grapclip_;
  float loadepisodesaved_;
  float savedepisode_;
  float timehozizon_;
  float batchsize_;
  float gamma_;
  float lam_;
  ::PROTOBUF_NAMESPACE_ID::int32 epoch_;
  ::PROTOBUF_NAMESPACE_ID::int32 actors_;
  ::PROTOBUF_NAMESPACE_ID::int32 finalstep_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fgRPCCommunication_2fGrpcPPOSettings_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GrpcPPOSettings

// int32 numAction = 1;
inline void GrpcPPOSettings::clear_numaction() {
  numaction_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GrpcPPOSettings::numaction() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.numAction)
  return numaction_;
}
inline void GrpcPPOSettings::set_numaction(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  numaction_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.numAction)
}

// float valueFactor = 2;
inline void GrpcPPOSettings::clear_valuefactor() {
  valuefactor_ = 0;
}
inline float GrpcPPOSettings::valuefactor() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.valueFactor)
  return valuefactor_;
}
inline void GrpcPPOSettings::set_valuefactor(float value) {
  
  valuefactor_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.valueFactor)
}

// float entropyFactor = 3;
inline void GrpcPPOSettings::clear_entropyfactor() {
  entropyfactor_ = 0;
}
inline float GrpcPPOSettings::entropyfactor() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.entropyFactor)
  return entropyfactor_;
}
inline void GrpcPPOSettings::set_entropyfactor(float value) {
  
  entropyfactor_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.entropyFactor)
}

// float epsilon = 4;
inline void GrpcPPOSettings::clear_epsilon() {
  epsilon_ = 0;
}
inline float GrpcPPOSettings::epsilon() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.epsilon)
  return epsilon_;
}
inline void GrpcPPOSettings::set_epsilon(float value) {
  
  epsilon_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.epsilon)
}

// float learningRate = 5;
inline void GrpcPPOSettings::clear_learningrate() {
  learningrate_ = 0;
}
inline float GrpcPPOSettings::learningrate() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.learningRate)
  return learningrate_;
}
inline void GrpcPPOSettings::set_learningrate(float value) {
  
  learningrate_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.learningRate)
}

// string learningRateDecay = 6;
inline void GrpcPPOSettings::clear_learningratedecay() {
  learningratedecay_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& GrpcPPOSettings::learningratedecay() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.learningRateDecay)
  return learningratedecay_.GetNoArena();
}
inline void GrpcPPOSettings::set_learningratedecay(const std::string& value) {
  
  learningratedecay_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.learningRateDecay)
}
inline void GrpcPPOSettings::set_learningratedecay(std::string&& value) {
  
  learningratedecay_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gRPCCommunication.GrpcPPOSettings.learningRateDecay)
}
inline void GrpcPPOSettings::set_learningratedecay(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  learningratedecay_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gRPCCommunication.GrpcPPOSettings.learningRateDecay)
}
inline void GrpcPPOSettings::set_learningratedecay(const char* value, size_t size) {
  
  learningratedecay_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gRPCCommunication.GrpcPPOSettings.learningRateDecay)
}
inline std::string* GrpcPPOSettings::mutable_learningratedecay() {
  
  // @@protoc_insertion_point(field_mutable:gRPCCommunication.GrpcPPOSettings.learningRateDecay)
  return learningratedecay_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* GrpcPPOSettings::release_learningratedecay() {
  // @@protoc_insertion_point(field_release:gRPCCommunication.GrpcPPOSettings.learningRateDecay)
  
  return learningratedecay_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void GrpcPPOSettings::set_allocated_learningratedecay(std::string* learningratedecay) {
  if (learningratedecay != nullptr) {
    
  } else {
    
  }
  learningratedecay_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), learningratedecay);
  // @@protoc_insertion_point(field_set_allocated:gRPCCommunication.GrpcPPOSettings.learningRateDecay)
}

// float grapClip = 7;
inline void GrpcPPOSettings::clear_grapclip() {
  grapclip_ = 0;
}
inline float GrpcPPOSettings::grapclip() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.grapClip)
  return grapclip_;
}
inline void GrpcPPOSettings::set_grapclip(float value) {
  
  grapclip_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.grapClip)
}

// float loadEpisodeSaved = 8;
inline void GrpcPPOSettings::clear_loadepisodesaved() {
  loadepisodesaved_ = 0;
}
inline float GrpcPPOSettings::loadepisodesaved() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.loadEpisodeSaved)
  return loadepisodesaved_;
}
inline void GrpcPPOSettings::set_loadepisodesaved(float value) {
  
  loadepisodesaved_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.loadEpisodeSaved)
}

// float savedEpisode = 9;
inline void GrpcPPOSettings::clear_savedepisode() {
  savedepisode_ = 0;
}
inline float GrpcPPOSettings::savedepisode() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.savedEpisode)
  return savedepisode_;
}
inline void GrpcPPOSettings::set_savedepisode(float value) {
  
  savedepisode_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.savedEpisode)
}

// float timeHozizon = 10;
inline void GrpcPPOSettings::clear_timehozizon() {
  timehozizon_ = 0;
}
inline float GrpcPPOSettings::timehozizon() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.timeHozizon)
  return timehozizon_;
}
inline void GrpcPPOSettings::set_timehozizon(float value) {
  
  timehozizon_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.timeHozizon)
}

// float batchSize = 11;
inline void GrpcPPOSettings::clear_batchsize() {
  batchsize_ = 0;
}
inline float GrpcPPOSettings::batchsize() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.batchSize)
  return batchsize_;
}
inline void GrpcPPOSettings::set_batchsize(float value) {
  
  batchsize_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.batchSize)
}

// float gamma = 12;
inline void GrpcPPOSettings::clear_gamma() {
  gamma_ = 0;
}
inline float GrpcPPOSettings::gamma() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.gamma)
  return gamma_;
}
inline void GrpcPPOSettings::set_gamma(float value) {
  
  gamma_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.gamma)
}

// float lam = 13;
inline void GrpcPPOSettings::clear_lam() {
  lam_ = 0;
}
inline float GrpcPPOSettings::lam() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.lam)
  return lam_;
}
inline void GrpcPPOSettings::set_lam(float value) {
  
  lam_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.lam)
}

// int32 epoch = 14;
inline void GrpcPPOSettings::clear_epoch() {
  epoch_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GrpcPPOSettings::epoch() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.epoch)
  return epoch_;
}
inline void GrpcPPOSettings::set_epoch(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  epoch_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.epoch)
}

// int32 actors = 15;
inline void GrpcPPOSettings::clear_actors() {
  actors_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GrpcPPOSettings::actors() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.actors)
  return actors_;
}
inline void GrpcPPOSettings::set_actors(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  actors_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.actors)
}

// int32 finalStep = 16;
inline void GrpcPPOSettings::clear_finalstep() {
  finalstep_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GrpcPPOSettings::finalstep() const {
  // @@protoc_insertion_point(field_get:gRPCCommunication.GrpcPPOSettings.finalStep)
  return finalstep_;
}
inline void GrpcPPOSettings::set_finalstep(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  finalstep_ = value;
  // @@protoc_insertion_point(field_set:gRPCCommunication.GrpcPPOSettings.finalStep)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace gRPCCommunication

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fgRPCCommunication_2fGrpcPPOSettings_2eproto
