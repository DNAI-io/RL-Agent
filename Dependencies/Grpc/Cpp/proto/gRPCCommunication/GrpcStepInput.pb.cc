// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/gRPCCommunication/GrpcStepInput.proto

#include "proto/gRPCCommunication/GrpcStepInput.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace gRPCCommunication {
class GrpcStepInputDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GrpcStepInput> _instance;
} _GrpcStepInput_default_instance_;
}  // namespace gRPCCommunication
static void InitDefaultsscc_info_GrpcStepInput_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gRPCCommunication::_GrpcStepInput_default_instance_;
    new (ptr) ::gRPCCommunication::GrpcStepInput();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gRPCCommunication::GrpcStepInput::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GrpcStepInput_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_GrpcStepInput_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcStepInput, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcStepInput, actions_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gRPCCommunication::GrpcStepInput)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gRPCCommunication::_GrpcStepInput_default_instance_),
};

const char descriptor_table_protodef_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto[] =
  "\n+proto/gRPCCommunication/GrpcStepInput."
  "proto\022\021gRPCCommunication\" \n\rGrpcStepInpu"
  "t\022\017\n\007actions\030\001 \003(\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto_sccs[1] = {
  &scc_info_GrpcStepInput_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto_once;
static bool descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto = {
  &descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto_initialized, descriptor_table_protodef_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto, "proto/gRPCCommunication/GrpcStepInput.proto", 106,
  &descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto_once, descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto_sccs, descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto::offsets,
  file_level_metadata_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto, 1, file_level_enum_descriptors_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto, file_level_service_descriptors_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto), true);
namespace gRPCCommunication {

// ===================================================================

void GrpcStepInput::InitAsDefaultInstance() {
}
class GrpcStepInput::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GrpcStepInput::kActionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GrpcStepInput::GrpcStepInput()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gRPCCommunication.GrpcStepInput)
}
GrpcStepInput::GrpcStepInput(const GrpcStepInput& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      actions_(from.actions_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:gRPCCommunication.GrpcStepInput)
}

void GrpcStepInput::SharedCtor() {
}

GrpcStepInput::~GrpcStepInput() {
  // @@protoc_insertion_point(destructor:gRPCCommunication.GrpcStepInput)
  SharedDtor();
}

void GrpcStepInput::SharedDtor() {
}

void GrpcStepInput::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GrpcStepInput& GrpcStepInput::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GrpcStepInput_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto.base);
  return *internal_default_instance();
}


void GrpcStepInput::Clear() {
// @@protoc_insertion_point(message_clear_start:gRPCCommunication.GrpcStepInput)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  actions_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* GrpcStepInput::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated float actions = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(mutable_actions(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13) {
          add_actions(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool GrpcStepInput::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:gRPCCommunication.GrpcStepInput)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated float actions = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_actions())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (13 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 10u, input, this->mutable_actions())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gRPCCommunication.GrpcStepInput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gRPCCommunication.GrpcStepInput)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void GrpcStepInput::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gRPCCommunication.GrpcStepInput)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated float actions = 1;
  if (this->actions_size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTag(1, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_actions_cached_byte_size_.load(
        std::memory_order_relaxed));
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatArray(
      this->actions().data(), this->actions_size(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gRPCCommunication.GrpcStepInput)
}

::PROTOBUF_NAMESPACE_ID::uint8* GrpcStepInput::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gRPCCommunication.GrpcStepInput)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated float actions = 1;
  if (this->actions_size() > 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTagToArray(
      1,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream::WriteVarint32ToArray(
        _actions_cached_byte_size_.load(std::memory_order_relaxed),
         target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->actions_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gRPCCommunication.GrpcStepInput)
  return target;
}

size_t GrpcStepInput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gRPCCommunication.GrpcStepInput)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float actions = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->actions_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _actions_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GrpcStepInput::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gRPCCommunication.GrpcStepInput)
  GOOGLE_DCHECK_NE(&from, this);
  const GrpcStepInput* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GrpcStepInput>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gRPCCommunication.GrpcStepInput)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gRPCCommunication.GrpcStepInput)
    MergeFrom(*source);
  }
}

void GrpcStepInput::MergeFrom(const GrpcStepInput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gRPCCommunication.GrpcStepInput)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  actions_.MergeFrom(from.actions_);
}

void GrpcStepInput::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gRPCCommunication.GrpcStepInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GrpcStepInput::CopyFrom(const GrpcStepInput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gRPCCommunication.GrpcStepInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GrpcStepInput::IsInitialized() const {
  return true;
}

void GrpcStepInput::Swap(GrpcStepInput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GrpcStepInput::InternalSwap(GrpcStepInput* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  actions_.InternalSwap(&other->actions_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GrpcStepInput::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace gRPCCommunication
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gRPCCommunication::GrpcStepInput* Arena::CreateMaybeMessage< ::gRPCCommunication::GrpcStepInput >(Arena* arena) {
  return Arena::CreateInternal< ::gRPCCommunication::GrpcStepInput >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
