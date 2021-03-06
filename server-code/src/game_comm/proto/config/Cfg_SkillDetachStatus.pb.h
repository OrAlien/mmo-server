// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_SkillDetachStatus.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fSkillDetachStatus_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fSkillDetachStatus_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_config_2fCfg_5fSkillDetachStatus_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_config_2fCfg_5fSkillDetachStatus_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_config_2fCfg_5fSkillDetachStatus_2eproto;
class Cfg_SkillDetachStatus;
class Cfg_SkillDetachStatusDefaultTypeInternal;
extern Cfg_SkillDetachStatusDefaultTypeInternal _Cfg_SkillDetachStatus_default_instance_;
class Cfg_SkillDetachStatus_Row;
class Cfg_SkillDetachStatus_RowDefaultTypeInternal;
extern Cfg_SkillDetachStatus_RowDefaultTypeInternal _Cfg_SkillDetachStatus_Row_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Cfg_SkillDetachStatus* Arena::CreateMaybeMessage<::Cfg_SkillDetachStatus>(Arena*);
template<> ::Cfg_SkillDetachStatus_Row* Arena::CreateMaybeMessage<::Cfg_SkillDetachStatus_Row>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Cfg_SkillDetachStatus_Row :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Cfg_SkillDetachStatus.Row) */ {
 public:
  Cfg_SkillDetachStatus_Row();
  virtual ~Cfg_SkillDetachStatus_Row();

  Cfg_SkillDetachStatus_Row(const Cfg_SkillDetachStatus_Row& from);
  Cfg_SkillDetachStatus_Row(Cfg_SkillDetachStatus_Row&& from) noexcept
    : Cfg_SkillDetachStatus_Row() {
    *this = ::std::move(from);
  }

  inline Cfg_SkillDetachStatus_Row& operator=(const Cfg_SkillDetachStatus_Row& from) {
    CopyFrom(from);
    return *this;
  }
  inline Cfg_SkillDetachStatus_Row& operator=(Cfg_SkillDetachStatus_Row&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Cfg_SkillDetachStatus_Row& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Cfg_SkillDetachStatus_Row* internal_default_instance() {
    return reinterpret_cast<const Cfg_SkillDetachStatus_Row*>(
               &_Cfg_SkillDetachStatus_Row_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Cfg_SkillDetachStatus_Row& a, Cfg_SkillDetachStatus_Row& b) {
    a.Swap(&b);
  }
  inline void Swap(Cfg_SkillDetachStatus_Row* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Cfg_SkillDetachStatus_Row* New() const final {
    return CreateMaybeMessage<Cfg_SkillDetachStatus_Row>(nullptr);
  }

  Cfg_SkillDetachStatus_Row* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Cfg_SkillDetachStatus_Row>(arena);
  }
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Cfg_SkillDetachStatus_Row* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Cfg_SkillDetachStatus.Row";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_config_2fCfg_5fSkillDetachStatus_2eproto);
    return ::descriptor_table_config_2fCfg_5fSkillDetachStatus_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kIdskillFieldNumber = 2,
    kStatusIdFieldNumber = 3,
    kStatusTypeFieldNumber = 4,
    kStatusFlagFieldNumber = 5,
  };
  // uint32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 idskill = 2;
  void clear_idskill();
  ::PROTOBUF_NAMESPACE_ID::uint32 idskill() const;
  void set_idskill(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_idskill() const;
  void _internal_set_idskill(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 status_id = 3;
  void clear_status_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 status_id() const;
  void set_status_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_status_id() const;
  void _internal_set_status_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 status_type = 4;
  void clear_status_type();
  ::PROTOBUF_NAMESPACE_ID::uint32 status_type() const;
  void set_status_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_status_type() const;
  void _internal_set_status_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 status_flag = 5;
  void clear_status_flag();
  ::PROTOBUF_NAMESPACE_ID::uint32 status_flag() const;
  void set_status_flag(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_status_flag() const;
  void _internal_set_status_flag(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:Cfg_SkillDetachStatus.Row)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 idskill_;
  ::PROTOBUF_NAMESPACE_ID::uint32 status_id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 status_type_;
  ::PROTOBUF_NAMESPACE_ID::uint32 status_flag_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_config_2fCfg_5fSkillDetachStatus_2eproto;
};
// -------------------------------------------------------------------

class Cfg_SkillDetachStatus :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Cfg_SkillDetachStatus) */ {
 public:
  Cfg_SkillDetachStatus();
  virtual ~Cfg_SkillDetachStatus();

  Cfg_SkillDetachStatus(const Cfg_SkillDetachStatus& from);
  Cfg_SkillDetachStatus(Cfg_SkillDetachStatus&& from) noexcept
    : Cfg_SkillDetachStatus() {
    *this = ::std::move(from);
  }

  inline Cfg_SkillDetachStatus& operator=(const Cfg_SkillDetachStatus& from) {
    CopyFrom(from);
    return *this;
  }
  inline Cfg_SkillDetachStatus& operator=(Cfg_SkillDetachStatus&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Cfg_SkillDetachStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Cfg_SkillDetachStatus* internal_default_instance() {
    return reinterpret_cast<const Cfg_SkillDetachStatus*>(
               &_Cfg_SkillDetachStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Cfg_SkillDetachStatus& a, Cfg_SkillDetachStatus& b) {
    a.Swap(&b);
  }
  inline void Swap(Cfg_SkillDetachStatus* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Cfg_SkillDetachStatus* New() const final {
    return CreateMaybeMessage<Cfg_SkillDetachStatus>(nullptr);
  }

  Cfg_SkillDetachStatus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Cfg_SkillDetachStatus>(arena);
  }
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Cfg_SkillDetachStatus* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Cfg_SkillDetachStatus";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_config_2fCfg_5fSkillDetachStatus_2eproto);
    return ::descriptor_table_config_2fCfg_5fSkillDetachStatus_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Cfg_SkillDetachStatus_Row Row;

  // accessors -------------------------------------------------------

  enum : int {
    kRowsFieldNumber = 1,
  };
  // repeated .Cfg_SkillDetachStatus.Row rows = 1;
  int rows_size() const;
  private:
  int _internal_rows_size() const;
  public:
  void clear_rows();
  ::Cfg_SkillDetachStatus_Row* mutable_rows(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_SkillDetachStatus_Row >*
      mutable_rows();
  private:
  const ::Cfg_SkillDetachStatus_Row& _internal_rows(int index) const;
  ::Cfg_SkillDetachStatus_Row* _internal_add_rows();
  public:
  const ::Cfg_SkillDetachStatus_Row& rows(int index) const;
  ::Cfg_SkillDetachStatus_Row* add_rows();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_SkillDetachStatus_Row >&
      rows() const;

  // @@protoc_insertion_point(class_scope:Cfg_SkillDetachStatus)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_SkillDetachStatus_Row > rows_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_config_2fCfg_5fSkillDetachStatus_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Cfg_SkillDetachStatus_Row

// uint32 id = 1;
inline void Cfg_SkillDetachStatus_Row::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_SkillDetachStatus_Row::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_SkillDetachStatus_Row::id() const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.Row.id)
  return _internal_id();
}
inline void Cfg_SkillDetachStatus_Row::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void Cfg_SkillDetachStatus_Row::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Cfg_SkillDetachStatus.Row.id)
}

// uint32 idskill = 2;
inline void Cfg_SkillDetachStatus_Row::clear_idskill() {
  idskill_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_SkillDetachStatus_Row::_internal_idskill() const {
  return idskill_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_SkillDetachStatus_Row::idskill() const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.Row.idskill)
  return _internal_idskill();
}
inline void Cfg_SkillDetachStatus_Row::_internal_set_idskill(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  idskill_ = value;
}
inline void Cfg_SkillDetachStatus_Row::set_idskill(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_idskill(value);
  // @@protoc_insertion_point(field_set:Cfg_SkillDetachStatus.Row.idskill)
}

// uint32 status_id = 3;
inline void Cfg_SkillDetachStatus_Row::clear_status_id() {
  status_id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_SkillDetachStatus_Row::_internal_status_id() const {
  return status_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_SkillDetachStatus_Row::status_id() const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.Row.status_id)
  return _internal_status_id();
}
inline void Cfg_SkillDetachStatus_Row::_internal_set_status_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  status_id_ = value;
}
inline void Cfg_SkillDetachStatus_Row::set_status_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_status_id(value);
  // @@protoc_insertion_point(field_set:Cfg_SkillDetachStatus.Row.status_id)
}

// uint32 status_type = 4;
inline void Cfg_SkillDetachStatus_Row::clear_status_type() {
  status_type_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_SkillDetachStatus_Row::_internal_status_type() const {
  return status_type_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_SkillDetachStatus_Row::status_type() const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.Row.status_type)
  return _internal_status_type();
}
inline void Cfg_SkillDetachStatus_Row::_internal_set_status_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  status_type_ = value;
}
inline void Cfg_SkillDetachStatus_Row::set_status_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_status_type(value);
  // @@protoc_insertion_point(field_set:Cfg_SkillDetachStatus.Row.status_type)
}

// uint32 status_flag = 5;
inline void Cfg_SkillDetachStatus_Row::clear_status_flag() {
  status_flag_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_SkillDetachStatus_Row::_internal_status_flag() const {
  return status_flag_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_SkillDetachStatus_Row::status_flag() const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.Row.status_flag)
  return _internal_status_flag();
}
inline void Cfg_SkillDetachStatus_Row::_internal_set_status_flag(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  status_flag_ = value;
}
inline void Cfg_SkillDetachStatus_Row::set_status_flag(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_status_flag(value);
  // @@protoc_insertion_point(field_set:Cfg_SkillDetachStatus.Row.status_flag)
}

// -------------------------------------------------------------------

// Cfg_SkillDetachStatus

// repeated .Cfg_SkillDetachStatus.Row rows = 1;
inline int Cfg_SkillDetachStatus::_internal_rows_size() const {
  return rows_.size();
}
inline int Cfg_SkillDetachStatus::rows_size() const {
  return _internal_rows_size();
}
inline void Cfg_SkillDetachStatus::clear_rows() {
  rows_.Clear();
}
inline ::Cfg_SkillDetachStatus_Row* Cfg_SkillDetachStatus::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_SkillDetachStatus.rows)
  return rows_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_SkillDetachStatus_Row >*
Cfg_SkillDetachStatus::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_SkillDetachStatus.rows)
  return &rows_;
}
inline const ::Cfg_SkillDetachStatus_Row& Cfg_SkillDetachStatus::_internal_rows(int index) const {
  return rows_.Get(index);
}
inline const ::Cfg_SkillDetachStatus_Row& Cfg_SkillDetachStatus::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.rows)
  return _internal_rows(index);
}
inline ::Cfg_SkillDetachStatus_Row* Cfg_SkillDetachStatus::_internal_add_rows() {
  return rows_.Add();
}
inline ::Cfg_SkillDetachStatus_Row* Cfg_SkillDetachStatus::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_SkillDetachStatus.rows)
  return _internal_add_rows();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_SkillDetachStatus_Row >&
Cfg_SkillDetachStatus::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_SkillDetachStatus.rows)
  return rows_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fSkillDetachStatus_2eproto
