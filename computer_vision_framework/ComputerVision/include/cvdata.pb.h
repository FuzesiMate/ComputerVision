// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cvdata.proto

#ifndef PROTOBUF_cvdata_2eproto__INCLUDED
#define PROTOBUF_cvdata_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)
namespace cvdata {
class Marker;
class MarkerDefaultTypeInternal;
extern MarkerDefaultTypeInternal _Marker_default_instance_;
class Object;
class ObjectDefaultTypeInternal;
extern ObjectDefaultTypeInternal _Object_default_instance_;
class ObjectPositions;
class ObjectPositionsDefaultTypeInternal;
extern ObjectPositionsDefaultTypeInternal _ObjectPositions_default_instance_;
class ThreeDPosition;
class ThreeDPositionDefaultTypeInternal;
extern ThreeDPositionDefaultTypeInternal _ThreeDPosition_default_instance_;
class TwoDPosition;
class TwoDPositionDefaultTypeInternal;
extern TwoDPositionDefaultTypeInternal _TwoDPosition_default_instance_;
}  // namespace cvdata

namespace cvdata {

namespace protobuf_cvdata_2eproto {
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
}  // namespace protobuf_cvdata_2eproto

// ===================================================================

class ObjectPositions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cvdata.ObjectPositions) */ {
 public:
  ObjectPositions();
  virtual ~ObjectPositions();

  ObjectPositions(const ObjectPositions& from);

  inline ObjectPositions& operator=(const ObjectPositions& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ObjectPositions& default_instance();

  static inline const ObjectPositions* internal_default_instance() {
    return reinterpret_cast<const ObjectPositions*>(
               &_ObjectPositions_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ObjectPositions* other);

  // implements Message ----------------------------------------------

  inline ObjectPositions* New() const PROTOBUF_FINAL { return New(NULL); }

  ObjectPositions* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ObjectPositions& from);
  void MergeFrom(const ObjectPositions& from);
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
  void InternalSwap(ObjectPositions* other);
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

  // repeated .cvdata.Object objects = 1;
  int objects_size() const;
  void clear_objects();
  static const int kObjectsFieldNumber = 1;
  const ::cvdata::Object& objects(int index) const;
  ::cvdata::Object* mutable_objects(int index);
  ::cvdata::Object* add_objects();
  ::google::protobuf::RepeatedPtrField< ::cvdata::Object >*
      mutable_objects();
  const ::google::protobuf::RepeatedPtrField< ::cvdata::Object >&
      objects() const;

  // int64 timestamp = 2;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 2;
  ::google::protobuf::int64 timestamp() const;
  void set_timestamp(::google::protobuf::int64 value);

  // int64 frameindex = 3;
  void clear_frameindex();
  static const int kFrameindexFieldNumber = 3;
  ::google::protobuf::int64 frameindex() const;
  void set_frameindex(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:cvdata.ObjectPositions)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::cvdata::Object > objects_;
  ::google::protobuf::int64 timestamp_;
  ::google::protobuf::int64 frameindex_;
  mutable int _cached_size_;
  friend struct protobuf_cvdata_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Object : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cvdata.Object) */ {
 public:
  Object();
  virtual ~Object();

  Object(const Object& from);

  inline Object& operator=(const Object& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Object& default_instance();

  static inline const Object* internal_default_instance() {
    return reinterpret_cast<const Object*>(
               &_Object_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Object* other);

  // implements Message ----------------------------------------------

  inline Object* New() const PROTOBUF_FINAL { return New(NULL); }

  Object* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Object& from);
  void MergeFrom(const Object& from);
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
  void InternalSwap(Object* other);
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

  // repeated .cvdata.Marker markers = 2;
  int markers_size() const;
  void clear_markers();
  static const int kMarkersFieldNumber = 2;
  const ::cvdata::Marker& markers(int index) const;
  ::cvdata::Marker* mutable_markers(int index);
  ::cvdata::Marker* add_markers();
  ::google::protobuf::RepeatedPtrField< ::cvdata::Marker >*
      mutable_markers();
  const ::google::protobuf::RepeatedPtrField< ::cvdata::Marker >&
      markers() const;

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:cvdata.Object)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::cvdata::Marker > markers_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable int _cached_size_;
  friend struct protobuf_cvdata_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Marker : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cvdata.Marker) */ {
 public:
  Marker();
  virtual ~Marker();

  Marker(const Marker& from);

  inline Marker& operator=(const Marker& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Marker& default_instance();

  static inline const Marker* internal_default_instance() {
    return reinterpret_cast<const Marker*>(
               &_Marker_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Marker* other);

  // implements Message ----------------------------------------------

  inline Marker* New() const PROTOBUF_FINAL { return New(NULL); }

  Marker* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Marker& from);
  void MergeFrom(const Marker& from);
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
  void InternalSwap(Marker* other);
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

  // repeated .cvdata.TwoDPosition screenPositions = 3;
  int screenpositions_size() const;
  void clear_screenpositions();
  static const int kScreenPositionsFieldNumber = 3;
  const ::cvdata::TwoDPosition& screenpositions(int index) const;
  ::cvdata::TwoDPosition* mutable_screenpositions(int index);
  ::cvdata::TwoDPosition* add_screenpositions();
  ::google::protobuf::RepeatedPtrField< ::cvdata::TwoDPosition >*
      mutable_screenpositions();
  const ::google::protobuf::RepeatedPtrField< ::cvdata::TwoDPosition >&
      screenpositions() const;

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .cvdata.ThreeDPosition realposition = 2;
  bool has_realposition() const;
  void clear_realposition();
  static const int kRealpositionFieldNumber = 2;
  const ::cvdata::ThreeDPosition& realposition() const;
  ::cvdata::ThreeDPosition* mutable_realposition();
  ::cvdata::ThreeDPosition* release_realposition();
  void set_allocated_realposition(::cvdata::ThreeDPosition* realposition);

  // bool tracked = 4;
  void clear_tracked();
  static const int kTrackedFieldNumber = 4;
  bool tracked() const;
  void set_tracked(bool value);

  // @@protoc_insertion_point(class_scope:cvdata.Marker)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::cvdata::TwoDPosition > screenpositions_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::cvdata::ThreeDPosition* realposition_;
  bool tracked_;
  mutable int _cached_size_;
  friend struct protobuf_cvdata_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ThreeDPosition : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cvdata.ThreeDPosition) */ {
 public:
  ThreeDPosition();
  virtual ~ThreeDPosition();

  ThreeDPosition(const ThreeDPosition& from);

  inline ThreeDPosition& operator=(const ThreeDPosition& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ThreeDPosition& default_instance();

  static inline const ThreeDPosition* internal_default_instance() {
    return reinterpret_cast<const ThreeDPosition*>(
               &_ThreeDPosition_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(ThreeDPosition* other);

  // implements Message ----------------------------------------------

  inline ThreeDPosition* New() const PROTOBUF_FINAL { return New(NULL); }

  ThreeDPosition* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ThreeDPosition& from);
  void MergeFrom(const ThreeDPosition& from);
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
  void InternalSwap(ThreeDPosition* other);
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

  // double x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // double y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // double z = 3;
  void clear_z();
  static const int kZFieldNumber = 3;
  double z() const;
  void set_z(double value);

  // @@protoc_insertion_point(class_scope:cvdata.ThreeDPosition)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  double z_;
  mutable int _cached_size_;
  friend struct protobuf_cvdata_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TwoDPosition : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cvdata.TwoDPosition) */ {
 public:
  TwoDPosition();
  virtual ~TwoDPosition();

  TwoDPosition(const TwoDPosition& from);

  inline TwoDPosition& operator=(const TwoDPosition& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TwoDPosition& default_instance();

  static inline const TwoDPosition* internal_default_instance() {
    return reinterpret_cast<const TwoDPosition*>(
               &_TwoDPosition_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(TwoDPosition* other);

  // implements Message ----------------------------------------------

  inline TwoDPosition* New() const PROTOBUF_FINAL { return New(NULL); }

  TwoDPosition* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TwoDPosition& from);
  void MergeFrom(const TwoDPosition& from);
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
  void InternalSwap(TwoDPosition* other);
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

  // double x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // double y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // @@protoc_insertion_point(class_scope:cvdata.TwoDPosition)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  mutable int _cached_size_;
  friend struct protobuf_cvdata_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ObjectPositions

// repeated .cvdata.Object objects = 1;
inline int ObjectPositions::objects_size() const {
  return objects_.size();
}
inline void ObjectPositions::clear_objects() {
  objects_.Clear();
}
inline const ::cvdata::Object& ObjectPositions::objects(int index) const {
  // @@protoc_insertion_point(field_get:cvdata.ObjectPositions.objects)
  return objects_.Get(index);
}
inline ::cvdata::Object* ObjectPositions::mutable_objects(int index) {
  // @@protoc_insertion_point(field_mutable:cvdata.ObjectPositions.objects)
  return objects_.Mutable(index);
}
inline ::cvdata::Object* ObjectPositions::add_objects() {
  // @@protoc_insertion_point(field_add:cvdata.ObjectPositions.objects)
  return objects_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::cvdata::Object >*
ObjectPositions::mutable_objects() {
  // @@protoc_insertion_point(field_mutable_list:cvdata.ObjectPositions.objects)
  return &objects_;
}
inline const ::google::protobuf::RepeatedPtrField< ::cvdata::Object >&
ObjectPositions::objects() const {
  // @@protoc_insertion_point(field_list:cvdata.ObjectPositions.objects)
  return objects_;
}

// int64 timestamp = 2;
inline void ObjectPositions::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ObjectPositions::timestamp() const {
  // @@protoc_insertion_point(field_get:cvdata.ObjectPositions.timestamp)
  return timestamp_;
}
inline void ObjectPositions::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:cvdata.ObjectPositions.timestamp)
}

// int64 frameindex = 3;
inline void ObjectPositions::clear_frameindex() {
  frameindex_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ObjectPositions::frameindex() const {
  // @@protoc_insertion_point(field_get:cvdata.ObjectPositions.frameindex)
  return frameindex_;
}
inline void ObjectPositions::set_frameindex(::google::protobuf::int64 value) {
  
  frameindex_ = value;
  // @@protoc_insertion_point(field_set:cvdata.ObjectPositions.frameindex)
}

// -------------------------------------------------------------------

// Object

// string name = 1;
inline void Object::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Object::name() const {
  // @@protoc_insertion_point(field_get:cvdata.Object.name)
  return name_.GetNoArena();
}
inline void Object::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cvdata.Object.name)
}
#if LANG_CXX11
inline void Object::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cvdata.Object.name)
}
#endif
inline void Object::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cvdata.Object.name)
}
inline void Object::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cvdata.Object.name)
}
inline ::std::string* Object::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:cvdata.Object.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Object::release_name() {
  // @@protoc_insertion_point(field_release:cvdata.Object.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Object::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:cvdata.Object.name)
}

// repeated .cvdata.Marker markers = 2;
inline int Object::markers_size() const {
  return markers_.size();
}
inline void Object::clear_markers() {
  markers_.Clear();
}
inline const ::cvdata::Marker& Object::markers(int index) const {
  // @@protoc_insertion_point(field_get:cvdata.Object.markers)
  return markers_.Get(index);
}
inline ::cvdata::Marker* Object::mutable_markers(int index) {
  // @@protoc_insertion_point(field_mutable:cvdata.Object.markers)
  return markers_.Mutable(index);
}
inline ::cvdata::Marker* Object::add_markers() {
  // @@protoc_insertion_point(field_add:cvdata.Object.markers)
  return markers_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::cvdata::Marker >*
Object::mutable_markers() {
  // @@protoc_insertion_point(field_mutable_list:cvdata.Object.markers)
  return &markers_;
}
inline const ::google::protobuf::RepeatedPtrField< ::cvdata::Marker >&
Object::markers() const {
  // @@protoc_insertion_point(field_list:cvdata.Object.markers)
  return markers_;
}

// -------------------------------------------------------------------

// Marker

// string name = 1;
inline void Marker::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Marker::name() const {
  // @@protoc_insertion_point(field_get:cvdata.Marker.name)
  return name_.GetNoArena();
}
inline void Marker::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cvdata.Marker.name)
}
#if LANG_CXX11
inline void Marker::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cvdata.Marker.name)
}
#endif
inline void Marker::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cvdata.Marker.name)
}
inline void Marker::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cvdata.Marker.name)
}
inline ::std::string* Marker::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:cvdata.Marker.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Marker::release_name() {
  // @@protoc_insertion_point(field_release:cvdata.Marker.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Marker::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:cvdata.Marker.name)
}

// .cvdata.ThreeDPosition realposition = 2;
inline bool Marker::has_realposition() const {
  return this != internal_default_instance() && realposition_ != NULL;
}
inline void Marker::clear_realposition() {
  if (GetArenaNoVirtual() == NULL && realposition_ != NULL) delete realposition_;
  realposition_ = NULL;
}
inline const ::cvdata::ThreeDPosition& Marker::realposition() const {
  // @@protoc_insertion_point(field_get:cvdata.Marker.realposition)
  return realposition_ != NULL ? *realposition_
                         : *::cvdata::ThreeDPosition::internal_default_instance();
}
inline ::cvdata::ThreeDPosition* Marker::mutable_realposition() {
  
  if (realposition_ == NULL) {
    realposition_ = new ::cvdata::ThreeDPosition;
  }
  // @@protoc_insertion_point(field_mutable:cvdata.Marker.realposition)
  return realposition_;
}
inline ::cvdata::ThreeDPosition* Marker::release_realposition() {
  // @@protoc_insertion_point(field_release:cvdata.Marker.realposition)
  
  ::cvdata::ThreeDPosition* temp = realposition_;
  realposition_ = NULL;
  return temp;
}
inline void Marker::set_allocated_realposition(::cvdata::ThreeDPosition* realposition) {
  delete realposition_;
  realposition_ = realposition;
  if (realposition) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cvdata.Marker.realposition)
}

// repeated .cvdata.TwoDPosition screenPositions = 3;
inline int Marker::screenpositions_size() const {
  return screenpositions_.size();
}
inline void Marker::clear_screenpositions() {
  screenpositions_.Clear();
}
inline const ::cvdata::TwoDPosition& Marker::screenpositions(int index) const {
  // @@protoc_insertion_point(field_get:cvdata.Marker.screenPositions)
  return screenpositions_.Get(index);
}
inline ::cvdata::TwoDPosition* Marker::mutable_screenpositions(int index) {
  // @@protoc_insertion_point(field_mutable:cvdata.Marker.screenPositions)
  return screenpositions_.Mutable(index);
}
inline ::cvdata::TwoDPosition* Marker::add_screenpositions() {
  // @@protoc_insertion_point(field_add:cvdata.Marker.screenPositions)
  return screenpositions_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::cvdata::TwoDPosition >*
Marker::mutable_screenpositions() {
  // @@protoc_insertion_point(field_mutable_list:cvdata.Marker.screenPositions)
  return &screenpositions_;
}
inline const ::google::protobuf::RepeatedPtrField< ::cvdata::TwoDPosition >&
Marker::screenpositions() const {
  // @@protoc_insertion_point(field_list:cvdata.Marker.screenPositions)
  return screenpositions_;
}

// bool tracked = 4;
inline void Marker::clear_tracked() {
  tracked_ = false;
}
inline bool Marker::tracked() const {
  // @@protoc_insertion_point(field_get:cvdata.Marker.tracked)
  return tracked_;
}
inline void Marker::set_tracked(bool value) {
  
  tracked_ = value;
  // @@protoc_insertion_point(field_set:cvdata.Marker.tracked)
}

// -------------------------------------------------------------------

// ThreeDPosition

// double x = 1;
inline void ThreeDPosition::clear_x() {
  x_ = 0;
}
inline double ThreeDPosition::x() const {
  // @@protoc_insertion_point(field_get:cvdata.ThreeDPosition.x)
  return x_;
}
inline void ThreeDPosition::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:cvdata.ThreeDPosition.x)
}

// double y = 2;
inline void ThreeDPosition::clear_y() {
  y_ = 0;
}
inline double ThreeDPosition::y() const {
  // @@protoc_insertion_point(field_get:cvdata.ThreeDPosition.y)
  return y_;
}
inline void ThreeDPosition::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:cvdata.ThreeDPosition.y)
}

// double z = 3;
inline void ThreeDPosition::clear_z() {
  z_ = 0;
}
inline double ThreeDPosition::z() const {
  // @@protoc_insertion_point(field_get:cvdata.ThreeDPosition.z)
  return z_;
}
inline void ThreeDPosition::set_z(double value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:cvdata.ThreeDPosition.z)
}

// -------------------------------------------------------------------

// TwoDPosition

// double x = 1;
inline void TwoDPosition::clear_x() {
  x_ = 0;
}
inline double TwoDPosition::x() const {
  // @@protoc_insertion_point(field_get:cvdata.TwoDPosition.x)
  return x_;
}
inline void TwoDPosition::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:cvdata.TwoDPosition.x)
}

// double y = 2;
inline void TwoDPosition::clear_y() {
  y_ = 0;
}
inline double TwoDPosition::y() const {
  // @@protoc_insertion_point(field_get:cvdata.TwoDPosition.y)
  return y_;
}
inline void TwoDPosition::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:cvdata.TwoDPosition.y)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace cvdata

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cvdata_2eproto__INCLUDED
