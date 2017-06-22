// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TurnoutReferenceCommand.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TurnoutReferenceCommand.pb.h"

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
class TurnoutReferenceCommandDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<TurnoutReferenceCommand> {
} _TurnoutReferenceCommand_default_instance_;

namespace protobuf_TurnoutReferenceCommand_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TurnoutReferenceCommand, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TurnoutReferenceCommand, turnoutid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TurnoutReferenceCommand, state_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(TurnoutReferenceCommand)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_TurnoutReferenceCommand_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "TurnoutReferenceCommand.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _TurnoutReferenceCommand_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::modes3::protobuf::protobuf_Enums_2eproto::InitDefaults();
  _TurnoutReferenceCommand_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\035TurnoutReferenceCommand.proto\022\017modes3."
      "protobuf\032\013Enums.proto\"_\n\027TurnoutReferenc"
      "eCommand\022\021\n\tturnoutID\030\001 \001(\r\0221\n\005state\030\002 \001"
      "(\0162\".modes3.protobuf.TurnoutStateValueB0"
      "\n,hu.bme.mit.inf.modes3.messaging.mms.me"
      "ssagesP\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 216);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "TurnoutReferenceCommand.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_TurnoutReferenceCommand_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TurnoutReferenceCommand::kTurnoutIDFieldNumber;
const int TurnoutReferenceCommand::kStateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TurnoutReferenceCommand::TurnoutReferenceCommand()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_TurnoutReferenceCommand_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:modes3.protobuf.TurnoutReferenceCommand)
}
TurnoutReferenceCommand::TurnoutReferenceCommand(const TurnoutReferenceCommand& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&turnoutid_, &from.turnoutid_,
    reinterpret_cast<char*>(&state_) -
    reinterpret_cast<char*>(&turnoutid_) + sizeof(state_));
  // @@protoc_insertion_point(copy_constructor:modes3.protobuf.TurnoutReferenceCommand)
}

void TurnoutReferenceCommand::SharedCtor() {
  ::memset(&turnoutid_, 0, reinterpret_cast<char*>(&state_) -
    reinterpret_cast<char*>(&turnoutid_) + sizeof(state_));
  _cached_size_ = 0;
}

TurnoutReferenceCommand::~TurnoutReferenceCommand() {
  // @@protoc_insertion_point(destructor:modes3.protobuf.TurnoutReferenceCommand)
  SharedDtor();
}

void TurnoutReferenceCommand::SharedDtor() {
}

void TurnoutReferenceCommand::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TurnoutReferenceCommand::descriptor() {
  protobuf_TurnoutReferenceCommand_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_TurnoutReferenceCommand_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TurnoutReferenceCommand& TurnoutReferenceCommand::default_instance() {
  protobuf_TurnoutReferenceCommand_2eproto::InitDefaults();
  return *internal_default_instance();
}

TurnoutReferenceCommand* TurnoutReferenceCommand::New(::google::protobuf::Arena* arena) const {
  TurnoutReferenceCommand* n = new TurnoutReferenceCommand;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TurnoutReferenceCommand::Clear() {
// @@protoc_insertion_point(message_clear_start:modes3.protobuf.TurnoutReferenceCommand)
  ::memset(&turnoutid_, 0, reinterpret_cast<char*>(&state_) -
    reinterpret_cast<char*>(&turnoutid_) + sizeof(state_));
}

bool TurnoutReferenceCommand::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:modes3.protobuf.TurnoutReferenceCommand)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 turnoutID = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &turnoutid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .modes3.protobuf.TurnoutStateValue state = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_state(static_cast< ::modes3::protobuf::TurnoutStateValue >(value));
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
  // @@protoc_insertion_point(parse_success:modes3.protobuf.TurnoutReferenceCommand)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:modes3.protobuf.TurnoutReferenceCommand)
  return false;
#undef DO_
}

void TurnoutReferenceCommand::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:modes3.protobuf.TurnoutReferenceCommand)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 turnoutID = 1;
  if (this->turnoutid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->turnoutid(), output);
  }

  // .modes3.protobuf.TurnoutStateValue state = 2;
  if (this->state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->state(), output);
  }

  // @@protoc_insertion_point(serialize_end:modes3.protobuf.TurnoutReferenceCommand)
}

::google::protobuf::uint8* TurnoutReferenceCommand::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:modes3.protobuf.TurnoutReferenceCommand)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 turnoutID = 1;
  if (this->turnoutid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->turnoutid(), target);
  }

  // .modes3.protobuf.TurnoutStateValue state = 2;
  if (this->state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->state(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:modes3.protobuf.TurnoutReferenceCommand)
  return target;
}

size_t TurnoutReferenceCommand::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:modes3.protobuf.TurnoutReferenceCommand)
  size_t total_size = 0;

  // uint32 turnoutID = 1;
  if (this->turnoutid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->turnoutid());
  }

  // .modes3.protobuf.TurnoutStateValue state = 2;
  if (this->state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->state());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TurnoutReferenceCommand::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:modes3.protobuf.TurnoutReferenceCommand)
  GOOGLE_DCHECK_NE(&from, this);
  const TurnoutReferenceCommand* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TurnoutReferenceCommand>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:modes3.protobuf.TurnoutReferenceCommand)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:modes3.protobuf.TurnoutReferenceCommand)
    MergeFrom(*source);
  }
}

void TurnoutReferenceCommand::MergeFrom(const TurnoutReferenceCommand& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:modes3.protobuf.TurnoutReferenceCommand)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.turnoutid() != 0) {
    set_turnoutid(from.turnoutid());
  }
  if (from.state() != 0) {
    set_state(from.state());
  }
}

void TurnoutReferenceCommand::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:modes3.protobuf.TurnoutReferenceCommand)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TurnoutReferenceCommand::CopyFrom(const TurnoutReferenceCommand& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:modes3.protobuf.TurnoutReferenceCommand)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TurnoutReferenceCommand::IsInitialized() const {
  return true;
}

void TurnoutReferenceCommand::Swap(TurnoutReferenceCommand* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TurnoutReferenceCommand::InternalSwap(TurnoutReferenceCommand* other) {
  std::swap(turnoutid_, other->turnoutid_);
  std::swap(state_, other->state_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TurnoutReferenceCommand::GetMetadata() const {
  protobuf_TurnoutReferenceCommand_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_TurnoutReferenceCommand_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TurnoutReferenceCommand

// uint32 turnoutID = 1;
void TurnoutReferenceCommand::clear_turnoutid() {
  turnoutid_ = 0u;
}
::google::protobuf::uint32 TurnoutReferenceCommand::turnoutid() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.TurnoutReferenceCommand.turnoutID)
  return turnoutid_;
}
void TurnoutReferenceCommand::set_turnoutid(::google::protobuf::uint32 value) {
  
  turnoutid_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.TurnoutReferenceCommand.turnoutID)
}

// .modes3.protobuf.TurnoutStateValue state = 2;
void TurnoutReferenceCommand::clear_state() {
  state_ = 0;
}
::modes3::protobuf::TurnoutStateValue TurnoutReferenceCommand::state() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.TurnoutReferenceCommand.state)
  return static_cast< ::modes3::protobuf::TurnoutStateValue >(state_);
}
void TurnoutReferenceCommand::set_state(::modes3::protobuf::TurnoutStateValue value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.TurnoutReferenceCommand.state)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace modes3

// @@protoc_insertion_point(global_scope)