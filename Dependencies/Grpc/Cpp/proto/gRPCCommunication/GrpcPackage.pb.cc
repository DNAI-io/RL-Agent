// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/gRPCCommunication/GrpcPackage.proto

#include "proto/gRPCCommunication/GrpcPackage.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_proto_2fgRPCCommunication_2fGrpcHeader_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GrpcHeader_proto_2fgRPCCommunication_2fGrpcHeader_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2fgRPCCommunication_2fGrpcParameter_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GrpcParameter_proto_2fgRPCCommunication_2fGrpcParameter_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GrpcStepInput_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2fgRPCCommunication_2fGrpcStepOutput_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_GrpcStepOutput_proto_2fgRPCCommunication_2fGrpcStepOutput_2eproto;
namespace gRPCCommunication {
class GrpcPackageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GrpcPackage> _instance;
} _GrpcPackage_default_instance_;
}  // namespace gRPCCommunication
static void InitDefaultsscc_info_GrpcPackage_proto_2fgRPCCommunication_2fGrpcPackage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gRPCCommunication::_GrpcPackage_default_instance_;
    new (ptr) ::gRPCCommunication::GrpcPackage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gRPCCommunication::GrpcPackage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_GrpcPackage_proto_2fgRPCCommunication_2fGrpcPackage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 4, InitDefaultsscc_info_GrpcPackage_proto_2fgRPCCommunication_2fGrpcPackage_2eproto}, {
      &scc_info_GrpcHeader_proto_2fgRPCCommunication_2fGrpcHeader_2eproto.base,
      &scc_info_GrpcStepInput_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto.base,
      &scc_info_GrpcStepOutput_proto_2fgRPCCommunication_2fGrpcStepOutput_2eproto.base,
      &scc_info_GrpcParameter_proto_2fgRPCCommunication_2fGrpcParameter_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fgRPCCommunication_2fGrpcPackage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2fgRPCCommunication_2fGrpcPackage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fgRPCCommunication_2fGrpcPackage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fgRPCCommunication_2fGrpcPackage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcPackage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcPackage, header_),
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcPackage, input_),
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcPackage, output_),
  PROTOBUF_FIELD_OFFSET(::gRPCCommunication::GrpcPackage, trainingparameters_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gRPCCommunication::GrpcPackage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gRPCCommunication::_GrpcPackage_default_instance_),
};

const char descriptor_table_protodef_proto_2fgRPCCommunication_2fGrpcPackage_2eproto[] =
  "\n)proto/gRPCCommunication/GrpcPackage.pr"
  "oto\022\021gRPCCommunication\032(proto/gRPCCommun"
  "ication/GrpcHeader.proto\032+proto/gRPCComm"
  "unication/GrpcStepInput.proto\032,proto/gRP"
  "CCommunication/GrpcStepOutput.proto\032+pro"
  "to/gRPCCommunication/GrpcParameter.proto"
  "\"\336\001\n\013GrpcPackage\022-\n\006header\030\001 \001(\0132\035.gRPCC"
  "ommunication.GrpcHeader\022/\n\005input\030\002 \001(\0132 "
  ".gRPCCommunication.GrpcStepInput\0221\n\006outp"
  "ut\030\003 \001(\0132!.gRPCCommunication.GrpcStepOut"
  "put\022<\n\022trainingParameters\030\004 \003(\0132 .gRPCCo"
  "mmunication.GrpcParameterb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto_deps[4] = {
  &::descriptor_table_proto_2fgRPCCommunication_2fGrpcHeader_2eproto,
  &::descriptor_table_proto_2fgRPCCommunication_2fGrpcParameter_2eproto,
  &::descriptor_table_proto_2fgRPCCommunication_2fGrpcStepInput_2eproto,
  &::descriptor_table_proto_2fgRPCCommunication_2fGrpcStepOutput_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto_sccs[1] = {
  &scc_info_GrpcPackage_proto_2fgRPCCommunication_2fGrpcPackage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto_once;
static bool descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto = {
  &descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto_initialized, descriptor_table_protodef_proto_2fgRPCCommunication_2fGrpcPackage_2eproto, "proto/gRPCCommunication/GrpcPackage.proto", 473,
  &descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto_once, descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto_sccs, descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto_deps, 1, 4,
  schemas, file_default_instances, TableStruct_proto_2fgRPCCommunication_2fGrpcPackage_2eproto::offsets,
  file_level_metadata_proto_2fgRPCCommunication_2fGrpcPackage_2eproto, 1, file_level_enum_descriptors_proto_2fgRPCCommunication_2fGrpcPackage_2eproto, file_level_service_descriptors_proto_2fgRPCCommunication_2fGrpcPackage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fgRPCCommunication_2fGrpcPackage_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fgRPCCommunication_2fGrpcPackage_2eproto), true);
namespace gRPCCommunication {

// ===================================================================

void GrpcPackage::InitAsDefaultInstance() {
  ::gRPCCommunication::_GrpcPackage_default_instance_._instance.get_mutable()->header_ = const_cast< ::gRPCCommunication::GrpcHeader*>(
      ::gRPCCommunication::GrpcHeader::internal_default_instance());
  ::gRPCCommunication::_GrpcPackage_default_instance_._instance.get_mutable()->input_ = const_cast< ::gRPCCommunication::GrpcStepInput*>(
      ::gRPCCommunication::GrpcStepInput::internal_default_instance());
  ::gRPCCommunication::_GrpcPackage_default_instance_._instance.get_mutable()->output_ = const_cast< ::gRPCCommunication::GrpcStepOutput*>(
      ::gRPCCommunication::GrpcStepOutput::internal_default_instance());
}
class GrpcPackage::HasBitSetters {
 public:
  static const ::gRPCCommunication::GrpcHeader& header(const GrpcPackage* msg);
  static const ::gRPCCommunication::GrpcStepInput& input(const GrpcPackage* msg);
  static const ::gRPCCommunication::GrpcStepOutput& output(const GrpcPackage* msg);
};

const ::gRPCCommunication::GrpcHeader&
GrpcPackage::HasBitSetters::header(const GrpcPackage* msg) {
  return *msg->header_;
}
const ::gRPCCommunication::GrpcStepInput&
GrpcPackage::HasBitSetters::input(const GrpcPackage* msg) {
  return *msg->input_;
}
const ::gRPCCommunication::GrpcStepOutput&
GrpcPackage::HasBitSetters::output(const GrpcPackage* msg) {
  return *msg->output_;
}
void GrpcPackage::clear_header() {
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
void GrpcPackage::clear_input() {
  if (GetArenaNoVirtual() == nullptr && input_ != nullptr) {
    delete input_;
  }
  input_ = nullptr;
}
void GrpcPackage::clear_output() {
  if (GetArenaNoVirtual() == nullptr && output_ != nullptr) {
    delete output_;
  }
  output_ = nullptr;
}
void GrpcPackage::clear_trainingparameters() {
  trainingparameters_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GrpcPackage::kHeaderFieldNumber;
const int GrpcPackage::kInputFieldNumber;
const int GrpcPackage::kOutputFieldNumber;
const int GrpcPackage::kTrainingParametersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GrpcPackage::GrpcPackage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gRPCCommunication.GrpcPackage)
}
GrpcPackage::GrpcPackage(const GrpcPackage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      trainingparameters_(from.trainingparameters_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gRPCCommunication::GrpcHeader(*from.header_);
  } else {
    header_ = nullptr;
  }
  if (from.has_input()) {
    input_ = new ::gRPCCommunication::GrpcStepInput(*from.input_);
  } else {
    input_ = nullptr;
  }
  if (from.has_output()) {
    output_ = new ::gRPCCommunication::GrpcStepOutput(*from.output_);
  } else {
    output_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gRPCCommunication.GrpcPackage)
}

void GrpcPackage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GrpcPackage_proto_2fgRPCCommunication_2fGrpcPackage_2eproto.base);
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&output_) -
      reinterpret_cast<char*>(&header_)) + sizeof(output_));
}

GrpcPackage::~GrpcPackage() {
  // @@protoc_insertion_point(destructor:gRPCCommunication.GrpcPackage)
  SharedDtor();
}

void GrpcPackage::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete input_;
  if (this != internal_default_instance()) delete output_;
}

void GrpcPackage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GrpcPackage& GrpcPackage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GrpcPackage_proto_2fgRPCCommunication_2fGrpcPackage_2eproto.base);
  return *internal_default_instance();
}


void GrpcPackage::Clear() {
// @@protoc_insertion_point(message_clear_start:gRPCCommunication.GrpcPackage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  trainingparameters_.Clear();
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && input_ != nullptr) {
    delete input_;
  }
  input_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && output_ != nullptr) {
    delete output_;
  }
  output_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* GrpcPackage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .gRPCCommunication.GrpcHeader header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .gRPCCommunication.GrpcStepInput input = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(mutable_input(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .gRPCCommunication.GrpcStepOutput output = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(mutable_output(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .gRPCCommunication.GrpcParameter trainingParameters = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_trainingparameters(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 34);
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
bool GrpcPackage::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:gRPCCommunication.GrpcPackage)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gRPCCommunication.GrpcHeader header = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gRPCCommunication.GrpcStepInput input = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_input()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gRPCCommunication.GrpcStepOutput output = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_output()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gRPCCommunication.GrpcParameter trainingParameters = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_trainingparameters()));
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
  // @@protoc_insertion_point(parse_success:gRPCCommunication.GrpcPackage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gRPCCommunication.GrpcPackage)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void GrpcPackage::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gRPCCommunication.GrpcPackage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gRPCCommunication.GrpcHeader header = 1;
  if (this->has_header()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::header(this), output);
  }

  // .gRPCCommunication.GrpcStepInput input = 2;
  if (this->has_input()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::input(this), output);
  }

  // .gRPCCommunication.GrpcStepOutput output = 3;
  if (this->has_output()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, HasBitSetters::output(this), output);
  }

  // repeated .gRPCCommunication.GrpcParameter trainingParameters = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->trainingparameters_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      4,
      this->trainingparameters(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gRPCCommunication.GrpcPackage)
}

::PROTOBUF_NAMESPACE_ID::uint8* GrpcPackage::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gRPCCommunication.GrpcPackage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gRPCCommunication.GrpcHeader header = 1;
  if (this->has_header()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::header(this), target);
  }

  // .gRPCCommunication.GrpcStepInput input = 2;
  if (this->has_input()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::input(this), target);
  }

  // .gRPCCommunication.GrpcStepOutput output = 3;
  if (this->has_output()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, HasBitSetters::output(this), target);
  }

  // repeated .gRPCCommunication.GrpcParameter trainingParameters = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->trainingparameters_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->trainingparameters(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gRPCCommunication.GrpcPackage)
  return target;
}

size_t GrpcPackage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gRPCCommunication.GrpcPackage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gRPCCommunication.GrpcParameter trainingParameters = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->trainingparameters_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->trainingparameters(static_cast<int>(i)));
    }
  }

  // .gRPCCommunication.GrpcHeader header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gRPCCommunication.GrpcStepInput input = 2;
  if (this->has_input()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *input_);
  }

  // .gRPCCommunication.GrpcStepOutput output = 3;
  if (this->has_output()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *output_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GrpcPackage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gRPCCommunication.GrpcPackage)
  GOOGLE_DCHECK_NE(&from, this);
  const GrpcPackage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GrpcPackage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gRPCCommunication.GrpcPackage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gRPCCommunication.GrpcPackage)
    MergeFrom(*source);
  }
}

void GrpcPackage::MergeFrom(const GrpcPackage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gRPCCommunication.GrpcPackage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  trainingparameters_.MergeFrom(from.trainingparameters_);
  if (from.has_header()) {
    mutable_header()->::gRPCCommunication::GrpcHeader::MergeFrom(from.header());
  }
  if (from.has_input()) {
    mutable_input()->::gRPCCommunication::GrpcStepInput::MergeFrom(from.input());
  }
  if (from.has_output()) {
    mutable_output()->::gRPCCommunication::GrpcStepOutput::MergeFrom(from.output());
  }
}

void GrpcPackage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gRPCCommunication.GrpcPackage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GrpcPackage::CopyFrom(const GrpcPackage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gRPCCommunication.GrpcPackage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GrpcPackage::IsInitialized() const {
  return true;
}

void GrpcPackage::Swap(GrpcPackage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GrpcPackage::InternalSwap(GrpcPackage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&trainingparameters_)->InternalSwap(CastToBase(&other->trainingparameters_));
  swap(header_, other->header_);
  swap(input_, other->input_);
  swap(output_, other->output_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GrpcPackage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace gRPCCommunication
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gRPCCommunication::GrpcPackage* Arena::CreateMaybeMessage< ::gRPCCommunication::GrpcPackage >(Arena* arena) {
  return Arena::CreateInternal< ::gRPCCommunication::GrpcPackage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
