// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SegmentState.proto

#ifndef PROTOBUF_SegmentState_2eproto__INCLUDED
#define PROTOBUF_SegmentState_2eproto__INCLUDED

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
class SegmentState;
class SegmentStateDefaultTypeInternal;
extern SegmentStateDefaultTypeInternal _SegmentState_default_instance_;
}  // namespace protobuf
}  // namespace modes3

namespace modes3 {
namespace protobuf {

namespace protobuf_SegmentState_2eproto {
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
}  // namespace protobuf_SegmentState_2eproto

// ===================================================================

class SegmentState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:modes3.protobuf.SegmentState) */ {
 public:
  SegmentState();
  virtual ~SegmentState();

  SegmentState(const SegmentState& from);

  inline SegmentState& operator=(const SegmentState& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SegmentState& default_instance();

  static inline const SegmentState* internal_default_instance() {
    return reinterpret_cast<const SegmentState*>(
               &_SegmentState_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SegmentState* other);

  // implements Message ----------------------------------------------

  inline SegmentState* New() const PROTOBUF_FINAL { return New(NULL); }

  SegmentState* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SegmentState& from);
  void MergeFrom(const SegmentState& from);
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
  void InternalSwap(SegmentState* other);
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

  // uint32 segmentID = 1;
  void clear_segmentid();
  static const int kSegmentIDFieldNumber = 1;
  ::google::protobuf::uint32 segmentid() const;
  void set_segmentid(::google::protobuf::uint32 value);

  // .modes3.protobuf.SegmentStateValue state = 2;
  void clear_state();
  static const int kStateFieldNumber = 2;
  ::modes3::protobuf::SegmentStateValue state() const;
  void set_state(::modes3::protobuf::SegmentStateValue value);

  // @@protoc_insertion_point(class_scope:modes3.protobuf.SegmentState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 segmentid_;
  int state_;
  mutable int _cached_size_;
  friend struct protobuf_SegmentState_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SegmentState

// uint32 segmentID = 1;
inline void SegmentState::clear_segmentid() {
  segmentid_ = 0u;
}
inline ::google::protobuf::uint32 SegmentState::segmentid() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.SegmentState.segmentID)
  return segmentid_;
}
inline void SegmentState::set_segmentid(::google::protobuf::uint32 value) {
  
  segmentid_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.SegmentState.segmentID)
}

// .modes3.protobuf.SegmentStateValue state = 2;
inline void SegmentState::clear_state() {
  state_ = 0;
}
inline ::modes3::protobuf::SegmentStateValue SegmentState::state() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.SegmentState.state)
  return static_cast< ::modes3::protobuf::SegmentStateValue >(state_);
}
inline void SegmentState::set_state(::modes3::protobuf::SegmentStateValue value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.SegmentState.state)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace protobuf
}  // namespace modes3

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SegmentState_2eproto__INCLUDED
