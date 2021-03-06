// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TrainCurrentSpeed.proto

#ifndef PROTOBUF_TrainCurrentSpeed_2eproto__INCLUDED
#define PROTOBUF_TrainCurrentSpeed_2eproto__INCLUDED

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
class TrainCurrentSpeed;
class TrainCurrentSpeedDefaultTypeInternal;
extern TrainCurrentSpeedDefaultTypeInternal _TrainCurrentSpeed_default_instance_;
}  // namespace protobuf
}  // namespace modes3

namespace modes3 {
namespace protobuf {

namespace protobuf_TrainCurrentSpeed_2eproto {
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
}  // namespace protobuf_TrainCurrentSpeed_2eproto

// ===================================================================

class TrainCurrentSpeed : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:modes3.protobuf.TrainCurrentSpeed) */ {
 public:
  TrainCurrentSpeed();
  virtual ~TrainCurrentSpeed();

  TrainCurrentSpeed(const TrainCurrentSpeed& from);

  inline TrainCurrentSpeed& operator=(const TrainCurrentSpeed& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TrainCurrentSpeed& default_instance();

  static inline const TrainCurrentSpeed* internal_default_instance() {
    return reinterpret_cast<const TrainCurrentSpeed*>(
               &_TrainCurrentSpeed_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(TrainCurrentSpeed* other);

  // implements Message ----------------------------------------------

  inline TrainCurrentSpeed* New() const PROTOBUF_FINAL { return New(NULL); }

  TrainCurrentSpeed* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TrainCurrentSpeed& from);
  void MergeFrom(const TrainCurrentSpeed& from);
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
  void InternalSwap(TrainCurrentSpeed* other);
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

  // uint32 trainID = 1;
  void clear_trainid();
  static const int kTrainIDFieldNumber = 1;
  ::google::protobuf::uint32 trainid() const;
  void set_trainid(::google::protobuf::uint32 value);

  // uint32 currentSpeed = 2;
  void clear_currentspeed();
  static const int kCurrentSpeedFieldNumber = 2;
  ::google::protobuf::uint32 currentspeed() const;
  void set_currentspeed(::google::protobuf::uint32 value);

  // .modes3.protobuf.TrainDirectionValue direction = 3;
  void clear_direction();
  static const int kDirectionFieldNumber = 3;
  ::modes3::protobuf::TrainDirectionValue direction() const;
  void set_direction(::modes3::protobuf::TrainDirectionValue value);

  // @@protoc_insertion_point(class_scope:modes3.protobuf.TrainCurrentSpeed)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 trainid_;
  ::google::protobuf::uint32 currentspeed_;
  int direction_;
  mutable int _cached_size_;
  friend struct protobuf_TrainCurrentSpeed_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TrainCurrentSpeed

// uint32 trainID = 1;
inline void TrainCurrentSpeed::clear_trainid() {
  trainid_ = 0u;
}
inline ::google::protobuf::uint32 TrainCurrentSpeed::trainid() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.TrainCurrentSpeed.trainID)
  return trainid_;
}
inline void TrainCurrentSpeed::set_trainid(::google::protobuf::uint32 value) {
  
  trainid_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.TrainCurrentSpeed.trainID)
}

// uint32 currentSpeed = 2;
inline void TrainCurrentSpeed::clear_currentspeed() {
  currentspeed_ = 0u;
}
inline ::google::protobuf::uint32 TrainCurrentSpeed::currentspeed() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.TrainCurrentSpeed.currentSpeed)
  return currentspeed_;
}
inline void TrainCurrentSpeed::set_currentspeed(::google::protobuf::uint32 value) {
  
  currentspeed_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.TrainCurrentSpeed.currentSpeed)
}

// .modes3.protobuf.TrainDirectionValue direction = 3;
inline void TrainCurrentSpeed::clear_direction() {
  direction_ = 0;
}
inline ::modes3::protobuf::TrainDirectionValue TrainCurrentSpeed::direction() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.TrainCurrentSpeed.direction)
  return static_cast< ::modes3::protobuf::TrainDirectionValue >(direction_);
}
inline void TrainCurrentSpeed::set_direction(::modes3::protobuf::TrainDirectionValue value) {
  
  direction_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.TrainCurrentSpeed.direction)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace protobuf
}  // namespace modes3

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_TrainCurrentSpeed_2eproto__INCLUDED
