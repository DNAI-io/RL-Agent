// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/gRPCCommunication/GrpcHeader.proto

#include "proto/gRPCCommunication/GrpcHeader.pb.h"

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
class GrpcHeaderDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GrpcHeader> _instance;
} _GrpcHeader_default_instance_;
}  // namespace gRPCCommunication
static void InitDefaultsscc_info_GrpcHeader_proto_2fgRPCCommunication_2fGrpcHeader_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gRPCCommunication::_GrpcHeader_default_instance_;
    new (ptr) ::gRPCCommunication::GrpcHeader();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gRPCCommunication::GrpcHeader::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GrpcHeader_proto_2fgRPCCommunication_2fGrpcHeader_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_GrpcHeader_proto_2fgRPCCommunication_2fGrpcHeader_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fgRPCCommunication_2fGrpcHeader_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2fgRPCCommunication_2fGrpcHeader_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fgRPCCommunication_2fGrpcHeader_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fgRPCCommunication_2fGrpcHeader_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcHeader, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcHeader, magicnumber_),
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcHeader, status_),
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcHeader, commandtypes_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gRPCCommunication::GrpcHeader)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gRPCCommunication::_GrpcHeader_default_instance_),
};

const char descriptor_table_protodef_proto_2fgRPCCommunication_2fGrpcHeader_2eproto[] =
  "\n(proto/gRPCCommunication/GrpcHeader.pro"
  "to\022\021gRPCCommunication\032,proto/gRPCCommuni"
  "cation/GrpCommandType.proto\"j\n\nGrpcHeade"
  "r\022\023\n\013magicNumber\030\001 \001(\005\022\016\n\006status\030\002 \001(\005\0227"
  "\n\014commandTypes\030\003 \001(\0162!.gRPCCommunication"
  ".GrpCommandTypeb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto_deps[1] = {
  &::descriptor_table_proto_2fgRPCCommunication_2fGrpCommandType_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto_sccs[1] = {
  &scc_info_GrpcHeader_proto_2fgRPCCommunication_2fGrpcHeader_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto_once;
static bool descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto = {
  &descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto_initialized, descriptor_table_protodef_proto_2fgRPCCommunication_2fGrpcHeader_2eproto, "proto/gRPCCommunication/GrpcHeader.proto", 223,
  &descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto_once, descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto_sccs, descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_proto_2fgRPCCommunication_2fGrpcHeader_2eproto::offsets,
  file_level_metadata_proto_2fgRPCCommunication_2fGrpcHeader_2eproto, 1, file_level_enum_descriptors_proto_2fgRPCCommunication_2fGrpcHeader_2eproto, file_level_service_descriptors_proto_2fgRPCCommunication_2fGrpcHeader_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fgRPCCommunication_2fGrpcHeader_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto), true);
namespace gRPCCommunication {

// ===================================================================

void GrpcHeader::InitAsDefaultInstance() {
}
class GrpcHeader::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GrpcHeader::kMagicNumberFieldNumber;
const int GrpcHeader::kStatusFieldNumber;
const int GrpcHeader::kCommandTypesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GrpcHeader::GrpcHeader()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gRPCCommunication.GrpcHeader)
}
GrpcHeader::GrpcHeader(const GrpcHeader& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&magicnumber_, &from.magicnumber_,
    static_cast<size_t>(reinterpret_cast<char*>(&commandtypes_) -
    reinterpret_cast<char*>(&magicnumber_)) + sizeof(commandtypes_));
  // @@protoc_insertion_point(copy_constructor:gRPCCommunication.GrpcHeader)
}

void GrpcHeader::SharedCtor() {
  ::memset(&magicnumber_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&commandtypes_) -
      reinterpret_cast<char*>(&magicnumber_)) + sizeof(commandtypes_));
}

GrpcHeader::~GrpcHeader() {
  // @@protoc_insertion_point(destructor:gRPCCommunication.GrpcHeader)
  SharedDtor();
}

void GrpcHeader::SharedDtor() {
}

void GrpcHeader::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GrpcHeader& GrpcHeader::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GrpcHeader_proto_2fgRPCCommunication_2fGrpcHeader_2eproto.base);
  return *internal_default_instance();
}


void GrpcHeader::Clear() {
// @@protoc_insertion_point(message_clear_start:gRPCCommunication.GrpcHeader)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&magicnumber_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&commandtypes_) -
      reinterpret_cast<char*>(&magicnumber_)) + sizeof(commandtypes_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* GrpcHeader::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 magicNumber = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          magicnumber_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 status = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .gRPCCommunication.GrpCommandType commandTypes = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          set_commandtypes(static_cast<::gRPCCommunication::GrpCommandType>(val));
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
bool GrpcHeader::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:gRPCCommunication.GrpcHeader)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 magicNumber = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &magicnumber_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 status = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gRPCCommunication.GrpCommandType commandTypes = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {
          int value = 0;
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   int, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_commandtypes(static_cast< ::gRPCCommunication::GrpCommandType >(value));
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
  // @@protoc_insertion_point(parse_success:gRPCCommunication.GrpcHeader)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gRPCCommunication.GrpcHeader)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void GrpcHeader::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gRPCCommunication.GrpcHeader)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 magicNumber = 1;
  if (this->magicnumber() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(1, this->magicnumber(), output);
  }

  // int32 status = 2;
  if (this->status() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(2, this->status(), output);
  }

  // .gRPCCommunication.GrpCommandType commandTypes = 3;
  if (this->commandtypes() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnum(
      3, this->commandtypes(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gRPCCommunication.GrpcHeader)
}

::PROTOBUF_NAMESPACE_ID::uint8* GrpcHeader::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gRPCCommunication.GrpcHeader)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 magicNumber = 1;
  if (this->magicnumber() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->magicnumber(), target);
  }

  // int32 status = 2;
  if (this->status() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->status(), target);
  }

  // .gRPCCommunication.GrpCommandType commandTypes = 3;
  if (this->commandtypes() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->commandtypes(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gRPCCommunication.GrpcHeader)
  return target;
}

size_t GrpcHeader::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gRPCCommunication.GrpcHeader)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 magicNumber = 1;
  if (this->magicnumber() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->magicnumber());
  }

  // int32 status = 2;
  if (this->status() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->status());
  }

  // .gRPCCommunication.GrpCommandType commandTypes = 3;
  if (this->commandtypes() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->commandtypes());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GrpcHeader::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gRPCCommunication.GrpcHeader)
  GOOGLE_DCHECK_NE(&from, this);
  const GrpcHeader* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GrpcHeader>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gRPCCommunication.GrpcHeader)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gRPCCommunication.GrpcHeader)
    MergeFrom(*source);
  }
}

void GrpcHeader::MergeFrom(const GrpcHeader& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gRPCCommunication.GrpcHeader)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.magicnumber() != 0) {
    set_magicnumber(from.magicnumber());
  }
  if (from.status() != 0) {
    set_status(from.status());
  }
  if (from.commandtypes() != 0) {
    set_commandtypes(from.commandtypes());
  }
}

void GrpcHeader::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gRPCCommunication.GrpcHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GrpcHeader::CopyFrom(const GrpcHeader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gRPCCommunication.GrpcHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GrpcHeader::IsInitialized() const {
  return true;
}

void GrpcHeader::Swap(GrpcHeader* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GrpcHeader::InternalSwap(GrpcHeader* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(magicnumber_, other->magicnumber_);
  swap(status_, other->status_);
  swap(commandtypes_, other->commandtypes_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GrpcHeader::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace gRPCCommunication
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gRPCCommunication::GrpcHeader* Arena::CreateMaybeMessage< ::gRPCCommunication::GrpcHeader >(Arena* arena) {
  return Arena::CreateInternal< ::gRPCCommunication::GrpcHeader >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
