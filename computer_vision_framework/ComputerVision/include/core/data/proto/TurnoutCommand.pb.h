// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TurnoutCommand.proto

#ifndef PROTOBUF_TurnoutCommand_2eproto__INCLUDED
#define PROTOBUF_TurnoutCommand_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "Enums.pb.h"
// @@protoc_insertion_point(includes)
namespace modes3 {
namespace protobuf {
class TurnoutCommand;
class TurnoutCommandDefaultTypeInternal;
extern TurnoutCommandDefaultTypeInternal _TurnoutCommand_default_instance_;
}  // namespace protobuf
}  // namespace modes3

namespace modes3 {
namespace protobuf {

namespace protobuf_TurnoutCommand_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_TurnoutCommand_2eproto

// ===================================================================

class TurnoutCommand : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:modes3.protobuf.TurnoutCommand) */ {
 public:
  TurnoutCommand();
  virtual ~TurnoutCommand();

  TurnoutCommand(const TurnoutCommand& from);

  inline TurnoutCommand& operator=(const TurnoutCommand& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TurnoutCommand& default_instance();

  static inline const TurnoutCommand* internal_default_instance() {
    return reinterpret_cast<const TurnoutCommand*>(
               &_TurnoutCommand_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(TurnoutCommand* other);

  // implements Message ----------------------------------------------

  inline TurnoutCommand* New() const PROTOBUF_FINAL { return New(NULL); }

  TurnoutCommand* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TurnoutCommand& from);
  void MergeFrom(const TurnoutCommand& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(TurnoutCommand* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 turnoutID = 1;
  void clear_turnoutid();
  static const int kTurnoutIDFieldNumber = 1;
  ::google::protobuf::uint32 turnoutid() const;
  void set_turnoutid(::google::protobuf::uint32 value);

  // .modes3.protobuf.TurnoutStateValue state = 2;
  void clear_state();
  static const int kStateFieldNumber = 2;
  ::modes3::protobuf::TurnoutStateValue state() const;
  void set_state(::modes3::protobuf::TurnoutStateValue value);

  // @@protoc_insertion_point(class_scope:modes3.protobuf.TurnoutCommand)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 turnoutid_;
  int state_;
  mutable int _cached_size_;
  friend struct protobuf_TurnoutCommand_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TurnoutCommand

// uint32 turnoutID = 1;
inline void TurnoutCommand::clear_turnoutid() {
  turnoutid_ = 0u;
}
inline ::google::protobuf::uint32 TurnoutCommand::turnoutid() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.TurnoutCommand.turnoutID)
  return turnoutid_;
}
inline void TurnoutCommand::set_turnoutid(::google::protobuf::uint32 value) {
  
  turnoutid_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.TurnoutCommand.turnoutID)
}

// .modes3.protobuf.TurnoutStateValue state = 2;
inline void TurnoutCommand::clear_state() {
  state_ = 0;
}
inline ::modes3::protobuf::TurnoutStateValue TurnoutCommand::state() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.TurnoutCommand.state)
  return static_cast< ::modes3::protobuf::TurnoutStateValue >(state_);
}
inline void TurnoutCommand::set_state(::modes3::protobuf::TurnoutStateValue value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.TurnoutCommand.state)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace protobuf
}  // namespace modes3

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_TurnoutCommand_2eproto__INCLUDED
