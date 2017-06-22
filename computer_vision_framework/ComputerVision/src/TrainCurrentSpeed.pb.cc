// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TrainCurrentSpeed.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TrainCurrentSpeed.pb.h"

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
class TrainCurrentSpeedDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<TrainCurrentSpeed> {
} _TrainCurrentSpeed_default_instance_;

namespace protobuf_TrainCurrentSpeed_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrainCurrentSpeed, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrainCurrentSpeed, trainid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrainCurrentSpeed, currentspeed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrainCurrentSpeed, direction_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(TrainCurrentSpeed)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_TrainCurrentSpeed_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "TrainCurrentSpeed.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _TrainCurrentSpeed_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::modes3::protobuf::protobuf_Enums_2eproto::InitDefaults();
  _TrainCurrentSpeed_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\027TrainCurrentSpeed.proto\022\017modes3.protob"
      "uf\032\013Enums.proto\"s\n\021TrainCurrentSpeed\022\017\n\007"
      "trainID\030\001 \001(\r\022\024\n\014currentSpeed\030\002 \001(\r\0227\n\td"
      "irection\030\003 \001(\0162$.modes3.protobuf.TrainDi"
      "rectionValueB0\n,hu.bme.mit.inf.modes3.me"
      "ssaging.mms.messagesP\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 230);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "TrainCurrentSpeed.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_TrainCurrentSpeed_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TrainCurrentSpeed::kTrainIDFieldNumber;
const int TrainCurrentSpeed::kCurrentSpeedFieldNumber;
const int TrainCurrentSpeed::kDirectionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TrainCurrentSpeed::TrainCurrentSpeed()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_TrainCurrentSpeed_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:modes3.protobuf.TrainCurrentSpeed)
}
TrainCurrentSpeed::TrainCurrentSpeed(const TrainCurrentSpeed& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&trainid_, &from.trainid_,
    reinterpret_cast<char*>(&direction_) -
    reinterpret_cast<char*>(&trainid_) + sizeof(direction_));
  // @@protoc_insertion_point(copy_constructor:modes3.protobuf.TrainCurrentSpeed)
}

void TrainCurrentSpeed::SharedCtor() {
  ::memset(&trainid_, 0, reinterpret_cast<char*>(&direction_) -
    reinterpret_cast<char*>(&trainid_) + sizeof(direction_));
  _cached_size_ = 0;
}

TrainCurrentSpeed::~TrainCurrentSpeed() {
  // @@protoc_insertion_point(destructor:modes3.protobuf.TrainCurrentSpeed)
  SharedDtor();
}

void TrainCurrentSpeed::SharedDtor() {
}

void TrainCurrentSpeed::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TrainCurrentSpeed::descriptor() {
  protobuf_TrainCurrentSpeed_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_TrainCurrentSpeed_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TrainCurrentSpeed& TrainCurrentSpeed::default_instance() {
  protobuf_TrainCurrentSpeed_2eproto::InitDefaults();
  return *internal_default_instance();
}

TrainCurrentSpeed* TrainCurrentSpeed::New(::google::protobuf::Arena* arena) const {
  TrainCurrentSpeed* n = new TrainCurrentSpeed;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TrainCurrentSpeed::Clear() {
// @@protoc_insertion_point(message_clear_start:modes3.protobuf.TrainCurrentSpeed)
  ::memset(&trainid_, 0, reinterpret_cast<char*>(&direction_) -
    reinterpret_cast<char*>(&trainid_) + sizeof(direction_));
}

bool TrainCurrentSpeed::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:modes3.protobuf.TrainCurrentSpeed)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 trainID = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &trainid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 currentSpeed = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &currentspeed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .modes3.protobuf.TrainDirectionValue direction = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_direction(static_cast< ::modes3::protobuf::TrainDirectionValue >(value));
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
  // @@protoc_insertion_point(parse_success:modes3.protobuf.TrainCurrentSpeed)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:modes3.protobuf.TrainCurrentSpeed)
  return false;
#undef DO_
}

void TrainCurrentSpeed::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:modes3.protobuf.TrainCurrentSpeed)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 trainID = 1;
  if (this->trainid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->trainid(), output);
  }

  // uint32 currentSpeed = 2;
  if (this->currentspeed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->currentspeed(), output);
  }

  // .modes3.protobuf.TrainDirectionValue direction = 3;
  if (this->direction() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->direction(), output);
  }

  // @@protoc_insertion_point(serialize_end:modes3.protobuf.TrainCurrentSpeed)
}

::google::protobuf::uint8* TrainCurrentSpeed::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:modes3.protobuf.TrainCurrentSpeed)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 trainID = 1;
  if (this->trainid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->trainid(), target);
  }

  // uint32 currentSpeed = 2;
  if (this->currentspeed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->currentspeed(), target);
  }

  // .modes3.protobuf.TrainDirectionValue direction = 3;
  if (this->direction() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->direction(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:modes3.protobuf.TrainCurrentSpeed)
  return target;
}

size_t TrainCurrentSpeed::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:modes3.protobuf.TrainCurrentSpeed)
  size_t total_size = 0;

  // uint32 trainID = 1;
  if (this->trainid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->trainid());
  }

  // uint32 currentSpeed = 2;
  if (this->currentspeed() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->currentspeed());
  }

  // .modes3.protobuf.TrainDirectionValue direction = 3;
  if (this->direction() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->direction());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TrainCurrentSpeed::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:modes3.protobuf.TrainCurrentSpeed)
  GOOGLE_DCHECK_NE(&from, this);
  const TrainCurrentSpeed* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TrainCurrentSpeed>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:modes3.protobuf.TrainCurrentSpeed)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:modes3.protobuf.TrainCurrentSpeed)
    MergeFrom(*source);
  }
}

void TrainCurrentSpeed::MergeFrom(const TrainCurrentSpeed& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:modes3.protobuf.TrainCurrentSpeed)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.trainid() != 0) {
    set_trainid(from.trainid());
  }
  if (from.currentspeed() != 0) {
    set_currentspeed(from.currentspeed());
  }
  if (from.direction() != 0) {
    set_direction(from.direction());
  }
}

void TrainCurrentSpeed::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:modes3.protobuf.TrainCurrentSpeed)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrainCurrentSpeed::CopyFrom(const TrainCurrentSpeed& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:modes3.protobuf.TrainCurrentSpeed)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrainCurrentSpeed::IsInitialized() const {
  return true;
}

void TrainCurrentSpeed::Swap(TrainCurrentSpeed* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TrainCurrentSpeed::InternalSwap(TrainCurrentSpeed* other) {
  std::swap(trainid_, other->trainid_);
  std::swap(currentspeed_, other->currentspeed_);
  std::swap(direction_, other->direction_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TrainCurrentSpeed::GetMetadata() const {
  protobuf_TrainCurrentSpeed_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_TrainCurrentSpeed_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TrainCurrentSpeed

// uint32 trainID = 1;
void TrainCurrentSpeed::clear_trainid() {
  trainid_ = 0u;
}
::google::protobuf::uint32 TrainCurrentSpeed::trainid() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.TrainCurrentSpeed.trainID)
  return trainid_;
}
void TrainCurrentSpeed::set_trainid(::google::protobuf::uint32 value) {
  
  trainid_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.TrainCurrentSpeed.trainID)
}

// uint32 currentSpeed = 2;
void TrainCurrentSpeed::clear_currentspeed() {
  currentspeed_ = 0u;
}
::google::protobuf::uint32 TrainCurrentSpeed::currentspeed() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.TrainCurrentSpeed.currentSpeed)
  return currentspeed_;
}
void TrainCurrentSpeed::set_currentspeed(::google::protobuf::uint32 value) {
  
  currentspeed_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.TrainCurrentSpeed.currentSpeed)
}

// .modes3.protobuf.TrainDirectionValue direction = 3;
void TrainCurrentSpeed::clear_direction() {
  direction_ = 0;
}
::modes3::protobuf::TrainDirectionValue TrainCurrentSpeed::direction() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.TrainCurrentSpeed.direction)
  return static_cast< ::modes3::protobuf::TrainDirectionValue >(direction_);
}
void TrainCurrentSpeed::set_direction(::modes3::protobuf::TrainDirectionValue value) {
  
  direction_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.TrainCurrentSpeed.direction)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace modes3

// @@protoc_insertion_point(global_scope)