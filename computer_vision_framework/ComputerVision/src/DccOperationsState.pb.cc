// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DccOperationsState.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DccOperationsState.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace modes3 {
namespace protobuf {
class DccOperationsStateDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<DccOperationsState> {
} _DccOperationsState_default_instance_;

namespace protobuf_DccOperationsState_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DccOperationsState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DccOperationsState, dccoperations_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(DccOperationsState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_DccOperationsState_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "DccOperationsState.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _DccOperationsState_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::modes3::protobuf::protobuf_Enums_2eproto::InitDefaults();
  _DccOperationsState_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\030DccOperationsState.proto\022\017modes3.proto"
      "buf\032\013Enums.proto\"K\n\022DccOperationsState\0225"
      "\n\rdccOperations\030\001 \001(\0162\036.modes3.protobuf."
      "DccOperationsB0\n,hu.bme.mit.inf.modes3.m"
      "essaging.mms.messagesP\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 191);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DccOperationsState.proto", &protobuf_RegisterTypes);
  ::modes3::protobuf::protobuf_Enums_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_DccOperationsState_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DccOperationsState::kDccOperationsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DccOperationsState::DccOperationsState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_DccOperationsState_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:modes3.protobuf.DccOperationsState)
}
DccOperationsState::DccOperationsState(const DccOperationsState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  dccoperations_ = from.dccoperations_;
  // @@protoc_insertion_point(copy_constructor:modes3.protobuf.DccOperationsState)
}

void DccOperationsState::SharedCtor() {
  dccoperations_ = 0;
  _cached_size_ = 0;
}

DccOperationsState::~DccOperationsState() {
  // @@protoc_insertion_point(destructor:modes3.protobuf.DccOperationsState)
  SharedDtor();
}

void DccOperationsState::SharedDtor() {
}

void DccOperationsState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DccOperationsState::descriptor() {
  protobuf_DccOperationsState_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DccOperationsState_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const DccOperationsState& DccOperationsState::default_instance() {
  protobuf_DccOperationsState_2eproto::InitDefaults();
  return *internal_default_instance();
}

DccOperationsState* DccOperationsState::New(::google::protobuf::Arena* arena) const {
  DccOperationsState* n = new DccOperationsState;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DccOperationsState::Clear() {
// @@protoc_insertion_point(message_clear_start:modes3.protobuf.DccOperationsState)
  dccoperations_ = 0;
}

bool DccOperationsState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:modes3.protobuf.DccOperationsState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .modes3.protobuf.DccOperations dccOperations = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_dccoperations(static_cast< ::modes3::protobuf::DccOperations >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:modes3.protobuf.DccOperationsState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:modes3.protobuf.DccOperationsState)
  return false;
#undef DO_
}

void DccOperationsState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:modes3.protobuf.DccOperationsState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .modes3.protobuf.DccOperations dccOperations = 1;
  if (this->dccoperations() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->dccoperations(), output);
  }

  // @@protoc_insertion_point(serialize_end:modes3.protobuf.DccOperationsState)
}

::google::protobuf::uint8* DccOperationsState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:modes3.protobuf.DccOperationsState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .modes3.protobuf.DccOperations dccOperations = 1;
  if (this->dccoperations() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->dccoperations(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:modes3.protobuf.DccOperationsState)
  return target;
}

size_t DccOperationsState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:modes3.protobuf.DccOperationsState)
  size_t total_size = 0;

  // .modes3.protobuf.DccOperations dccOperations = 1;
  if (this->dccoperations() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->dccoperations());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DccOperationsState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:modes3.protobuf.DccOperationsState)
  GOOGLE_DCHECK_NE(&from, this);
  const DccOperationsState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DccOperationsState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:modes3.protobuf.DccOperationsState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:modes3.protobuf.DccOperationsState)
    MergeFrom(*source);
  }
}

void DccOperationsState::MergeFrom(const DccOperationsState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:modes3.protobuf.DccOperationsState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.dccoperations() != 0) {
    set_dccoperations(from.dccoperations());
  }
}

void DccOperationsState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:modes3.protobuf.DccOperationsState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DccOperationsState::CopyFrom(const DccOperationsState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:modes3.protobuf.DccOperationsState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DccOperationsState::IsInitialized() const {
  return true;
}

void DccOperationsState::Swap(DccOperationsState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DccOperationsState::InternalSwap(DccOperationsState* other) {
  std::swap(dccoperations_, other->dccoperations_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DccOperationsState::GetMetadata() const {
  protobuf_DccOperationsState_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DccOperationsState_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DccOperationsState

// .modes3.protobuf.DccOperations dccOperations = 1;
void DccOperationsState::clear_dccoperations() {
  dccoperations_ = 0;
}
::modes3::protobuf::DccOperations DccOperationsState::dccoperations() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.DccOperationsState.dccOperations)
  return static_cast< ::modes3::protobuf::DccOperations >(dccoperations_);
}
void DccOperationsState::set_dccoperations(::modes3::protobuf::DccOperations value) {
  
  dccoperations_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.DccOperationsState.dccOperations)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace modes3

// @@protoc_insertion_point(global_scope)