// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_Monster.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fMonster_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fMonster_2eproto

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
#include "common/AttribChangeDataProto.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_config_2fCfg_5fMonster_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_config_2fCfg_5fMonster_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_config_2fCfg_5fMonster_2eproto;
class Cfg_Monster;
class Cfg_MonsterDefaultTypeInternal;
extern Cfg_MonsterDefaultTypeInternal _Cfg_Monster_default_instance_;
class Cfg_Monster_Row;
class Cfg_Monster_RowDefaultTypeInternal;
extern Cfg_Monster_RowDefaultTypeInternal _Cfg_Monster_Row_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Cfg_Monster* Arena::CreateMaybeMessage<::Cfg_Monster>(Arena*);
template<> ::Cfg_Monster_Row* Arena::CreateMaybeMessage<::Cfg_Monster_Row>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Cfg_Monster_Row :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Cfg_Monster.Row) */ {
 public:
  Cfg_Monster_Row();
  virtual ~Cfg_Monster_Row();

  Cfg_Monster_Row(const Cfg_Monster_Row& from);
  Cfg_Monster_Row(Cfg_Monster_Row&& from) noexcept
    : Cfg_Monster_Row() {
    *this = ::std::move(from);
  }

  inline Cfg_Monster_Row& operator=(const Cfg_Monster_Row& from) {
    CopyFrom(from);
    return *this;
  }
  inline Cfg_Monster_Row& operator=(Cfg_Monster_Row&& from) noexcept {
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
  static const Cfg_Monster_Row& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Cfg_Monster_Row* internal_default_instance() {
    return reinterpret_cast<const Cfg_Monster_Row*>(
               &_Cfg_Monster_Row_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Cfg_Monster_Row& a, Cfg_Monster_Row& b) {
    a.Swap(&b);
  }
  inline void Swap(Cfg_Monster_Row* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Cfg_Monster_Row* New() const final {
    return CreateMaybeMessage<Cfg_Monster_Row>(nullptr);
  }

  Cfg_Monster_Row* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Cfg_Monster_Row>(arena);
  }
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Cfg_Monster_Row* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Cfg_Monster.Row";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_config_2fCfg_5fMonster_2eproto);
    return ::descriptor_table_config_2fCfg_5fMonster_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 3,
    kAttrDataFieldNumber = 20,
    kIdFieldNumber = 1,
    kLevelFieldNumber = 2,
    kMonsterTypeFieldNumber = 4,
    kMonsterFlagFieldNumber = 5,
    kKillExpFieldNumber = 6,
    kDropIdFieldNumber = 7,
    kScriptidFieldNumber = 9,
    kIdcampFieldNumber = 8,
    kAitypeFieldNumber = 10,
    kHighFieldNumber = 11,
    kVolumeFieldNumber = 12,
  };
  // string name = 3;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .AttribDataProto attr_data = 20;
  bool has_attr_data() const;
  private:
  bool _internal_has_attr_data() const;
  public:
  void clear_attr_data();
  const ::AttribDataProto& attr_data() const;
  ::AttribDataProto* release_attr_data();
  ::AttribDataProto* mutable_attr_data();
  void set_allocated_attr_data(::AttribDataProto* attr_data);
  private:
  const ::AttribDataProto& _internal_attr_data() const;
  ::AttribDataProto* _internal_mutable_attr_data();
  public:

  // uint32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 level = 2;
  void clear_level();
  ::PROTOBUF_NAMESPACE_ID::uint32 level() const;
  void set_level(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_level() const;
  void _internal_set_level(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 monster_type = 4;
  void clear_monster_type();
  ::PROTOBUF_NAMESPACE_ID::uint32 monster_type() const;
  void set_monster_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_monster_type() const;
  void _internal_set_monster_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 monster_flag = 5;
  void clear_monster_flag();
  ::PROTOBUF_NAMESPACE_ID::uint32 monster_flag() const;
  void set_monster_flag(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_monster_flag() const;
  void _internal_set_monster_flag(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 kill_exp = 6;
  void clear_kill_exp();
  ::PROTOBUF_NAMESPACE_ID::uint32 kill_exp() const;
  void set_kill_exp(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_kill_exp() const;
  void _internal_set_kill_exp(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 drop_id = 7;
  void clear_drop_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 drop_id() const;
  void set_drop_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_drop_id() const;
  void _internal_set_drop_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint64 scriptid = 9;
  void clear_scriptid();
  ::PROTOBUF_NAMESPACE_ID::uint64 scriptid() const;
  void set_scriptid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_scriptid() const;
  void _internal_set_scriptid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint32 idcamp = 8;
  void clear_idcamp();
  ::PROTOBUF_NAMESPACE_ID::uint32 idcamp() const;
  void set_idcamp(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_idcamp() const;
  void _internal_set_idcamp(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 aitype = 10;
  void clear_aitype();
  ::PROTOBUF_NAMESPACE_ID::uint32 aitype() const;
  void set_aitype(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_aitype() const;
  void _internal_set_aitype(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // float high = 11;
  void clear_high();
  float high() const;
  void set_high(float value);
  private:
  float _internal_high() const;
  void _internal_set_high(float value);
  public:

  // float volume = 12;
  void clear_volume();
  float volume() const;
  void set_volume(float value);
  private:
  float _internal_volume() const;
  void _internal_set_volume(float value);
  public:

  // @@protoc_insertion_point(class_scope:Cfg_Monster.Row)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::AttribDataProto* attr_data_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 level_;
  ::PROTOBUF_NAMESPACE_ID::uint32 monster_type_;
  ::PROTOBUF_NAMESPACE_ID::uint32 monster_flag_;
  ::PROTOBUF_NAMESPACE_ID::uint32 kill_exp_;
  ::PROTOBUF_NAMESPACE_ID::uint32 drop_id_;
  ::PROTOBUF_NAMESPACE_ID::uint64 scriptid_;
  ::PROTOBUF_NAMESPACE_ID::uint32 idcamp_;
  ::PROTOBUF_NAMESPACE_ID::uint32 aitype_;
  float high_;
  float volume_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_config_2fCfg_5fMonster_2eproto;
};
// -------------------------------------------------------------------

class Cfg_Monster :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Cfg_Monster) */ {
 public:
  Cfg_Monster();
  virtual ~Cfg_Monster();

  Cfg_Monster(const Cfg_Monster& from);
  Cfg_Monster(Cfg_Monster&& from) noexcept
    : Cfg_Monster() {
    *this = ::std::move(from);
  }

  inline Cfg_Monster& operator=(const Cfg_Monster& from) {
    CopyFrom(from);
    return *this;
  }
  inline Cfg_Monster& operator=(Cfg_Monster&& from) noexcept {
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
  static const Cfg_Monster& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Cfg_Monster* internal_default_instance() {
    return reinterpret_cast<const Cfg_Monster*>(
               &_Cfg_Monster_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Cfg_Monster& a, Cfg_Monster& b) {
    a.Swap(&b);
  }
  inline void Swap(Cfg_Monster* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Cfg_Monster* New() const final {
    return CreateMaybeMessage<Cfg_Monster>(nullptr);
  }

  Cfg_Monster* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Cfg_Monster>(arena);
  }
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Cfg_Monster* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Cfg_Monster";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_config_2fCfg_5fMonster_2eproto);
    return ::descriptor_table_config_2fCfg_5fMonster_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Cfg_Monster_Row Row;

  // accessors -------------------------------------------------------

  enum : int {
    kRowsFieldNumber = 1,
  };
  // repeated .Cfg_Monster.Row rows = 1;
  int rows_size() const;
  private:
  int _internal_rows_size() const;
  public:
  void clear_rows();
  ::Cfg_Monster_Row* mutable_rows(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_Monster_Row >*
      mutable_rows();
  private:
  const ::Cfg_Monster_Row& _internal_rows(int index) const;
  ::Cfg_Monster_Row* _internal_add_rows();
  public:
  const ::Cfg_Monster_Row& rows(int index) const;
  ::Cfg_Monster_Row* add_rows();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_Monster_Row >&
      rows() const;

  // @@protoc_insertion_point(class_scope:Cfg_Monster)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_Monster_Row > rows_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_config_2fCfg_5fMonster_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Cfg_Monster_Row

// uint32 id = 1;
inline void Cfg_Monster_Row::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::id() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.id)
  return _internal_id();
}
inline void Cfg_Monster_Row::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void Cfg_Monster_Row::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.id)
}

// uint32 level = 2;
inline void Cfg_Monster_Row::clear_level() {
  level_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::_internal_level() const {
  return level_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::level() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.level)
  return _internal_level();
}
inline void Cfg_Monster_Row::_internal_set_level(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  level_ = value;
}
inline void Cfg_Monster_Row::set_level(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_level(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.level)
}

// string name = 3;
inline void Cfg_Monster_Row::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Cfg_Monster_Row::name() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.name)
  return _internal_name();
}
inline void Cfg_Monster_Row::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.name)
}
inline std::string* Cfg_Monster_Row::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Cfg_Monster.Row.name)
  return _internal_mutable_name();
}
inline const std::string& Cfg_Monster_Row::_internal_name() const {
  return name_.GetNoArena();
}
inline void Cfg_Monster_Row::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Cfg_Monster_Row::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Cfg_Monster.Row.name)
}
inline void Cfg_Monster_Row::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Cfg_Monster.Row.name)
}
inline void Cfg_Monster_Row::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Cfg_Monster.Row.name)
}
inline std::string* Cfg_Monster_Row::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Cfg_Monster_Row::release_name() {
  // @@protoc_insertion_point(field_release:Cfg_Monster.Row.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Cfg_Monster_Row::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Cfg_Monster.Row.name)
}

// uint32 monster_type = 4;
inline void Cfg_Monster_Row::clear_monster_type() {
  monster_type_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::_internal_monster_type() const {
  return monster_type_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::monster_type() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.monster_type)
  return _internal_monster_type();
}
inline void Cfg_Monster_Row::_internal_set_monster_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  monster_type_ = value;
}
inline void Cfg_Monster_Row::set_monster_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_monster_type(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.monster_type)
}

// uint32 monster_flag = 5;
inline void Cfg_Monster_Row::clear_monster_flag() {
  monster_flag_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::_internal_monster_flag() const {
  return monster_flag_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::monster_flag() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.monster_flag)
  return _internal_monster_flag();
}
inline void Cfg_Monster_Row::_internal_set_monster_flag(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  monster_flag_ = value;
}
inline void Cfg_Monster_Row::set_monster_flag(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_monster_flag(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.monster_flag)
}

// uint32 kill_exp = 6;
inline void Cfg_Monster_Row::clear_kill_exp() {
  kill_exp_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::_internal_kill_exp() const {
  return kill_exp_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::kill_exp() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.kill_exp)
  return _internal_kill_exp();
}
inline void Cfg_Monster_Row::_internal_set_kill_exp(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  kill_exp_ = value;
}
inline void Cfg_Monster_Row::set_kill_exp(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_kill_exp(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.kill_exp)
}

// uint32 drop_id = 7;
inline void Cfg_Monster_Row::clear_drop_id() {
  drop_id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::_internal_drop_id() const {
  return drop_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::drop_id() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.drop_id)
  return _internal_drop_id();
}
inline void Cfg_Monster_Row::_internal_set_drop_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  drop_id_ = value;
}
inline void Cfg_Monster_Row::set_drop_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_drop_id(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.drop_id)
}

// uint32 idcamp = 8;
inline void Cfg_Monster_Row::clear_idcamp() {
  idcamp_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::_internal_idcamp() const {
  return idcamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::idcamp() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.idcamp)
  return _internal_idcamp();
}
inline void Cfg_Monster_Row::_internal_set_idcamp(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  idcamp_ = value;
}
inline void Cfg_Monster_Row::set_idcamp(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_idcamp(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.idcamp)
}

// uint64 scriptid = 9;
inline void Cfg_Monster_Row::clear_scriptid() {
  scriptid_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Cfg_Monster_Row::_internal_scriptid() const {
  return scriptid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Cfg_Monster_Row::scriptid() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.scriptid)
  return _internal_scriptid();
}
inline void Cfg_Monster_Row::_internal_set_scriptid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  scriptid_ = value;
}
inline void Cfg_Monster_Row::set_scriptid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_scriptid(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.scriptid)
}

// uint32 aitype = 10;
inline void Cfg_Monster_Row::clear_aitype() {
  aitype_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::_internal_aitype() const {
  return aitype_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Monster_Row::aitype() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.aitype)
  return _internal_aitype();
}
inline void Cfg_Monster_Row::_internal_set_aitype(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  aitype_ = value;
}
inline void Cfg_Monster_Row::set_aitype(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_aitype(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.aitype)
}

// float high = 11;
inline void Cfg_Monster_Row::clear_high() {
  high_ = 0;
}
inline float Cfg_Monster_Row::_internal_high() const {
  return high_;
}
inline float Cfg_Monster_Row::high() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.high)
  return _internal_high();
}
inline void Cfg_Monster_Row::_internal_set_high(float value) {
  
  high_ = value;
}
inline void Cfg_Monster_Row::set_high(float value) {
  _internal_set_high(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.high)
}

// float volume = 12;
inline void Cfg_Monster_Row::clear_volume() {
  volume_ = 0;
}
inline float Cfg_Monster_Row::_internal_volume() const {
  return volume_;
}
inline float Cfg_Monster_Row::volume() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.volume)
  return _internal_volume();
}
inline void Cfg_Monster_Row::_internal_set_volume(float value) {
  
  volume_ = value;
}
inline void Cfg_Monster_Row::set_volume(float value) {
  _internal_set_volume(value);
  // @@protoc_insertion_point(field_set:Cfg_Monster.Row.volume)
}

// .AttribDataProto attr_data = 20;
inline bool Cfg_Monster_Row::_internal_has_attr_data() const {
  return this != internal_default_instance() && attr_data_ != nullptr;
}
inline bool Cfg_Monster_Row::has_attr_data() const {
  return _internal_has_attr_data();
}
inline const ::AttribDataProto& Cfg_Monster_Row::_internal_attr_data() const {
  const ::AttribDataProto* p = attr_data_;
  return p != nullptr ? *p : *reinterpret_cast<const ::AttribDataProto*>(
      &::_AttribDataProto_default_instance_);
}
inline const ::AttribDataProto& Cfg_Monster_Row::attr_data() const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.Row.attr_data)
  return _internal_attr_data();
}
inline ::AttribDataProto* Cfg_Monster_Row::release_attr_data() {
  // @@protoc_insertion_point(field_release:Cfg_Monster.Row.attr_data)
  
  ::AttribDataProto* temp = attr_data_;
  attr_data_ = nullptr;
  return temp;
}
inline ::AttribDataProto* Cfg_Monster_Row::_internal_mutable_attr_data() {
  
  if (attr_data_ == nullptr) {
    auto* p = CreateMaybeMessage<::AttribDataProto>(GetArenaNoVirtual());
    attr_data_ = p;
  }
  return attr_data_;
}
inline ::AttribDataProto* Cfg_Monster_Row::mutable_attr_data() {
  // @@protoc_insertion_point(field_mutable:Cfg_Monster.Row.attr_data)
  return _internal_mutable_attr_data();
}
inline void Cfg_Monster_Row::set_allocated_attr_data(::AttribDataProto* attr_data) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(attr_data_);
  }
  if (attr_data) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      attr_data = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, attr_data, submessage_arena);
    }
    
  } else {
    
  }
  attr_data_ = attr_data;
  // @@protoc_insertion_point(field_set_allocated:Cfg_Monster.Row.attr_data)
}

// -------------------------------------------------------------------

// Cfg_Monster

// repeated .Cfg_Monster.Row rows = 1;
inline int Cfg_Monster::_internal_rows_size() const {
  return rows_.size();
}
inline int Cfg_Monster::rows_size() const {
  return _internal_rows_size();
}
inline void Cfg_Monster::clear_rows() {
  rows_.Clear();
}
inline ::Cfg_Monster_Row* Cfg_Monster::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_Monster.rows)
  return rows_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_Monster_Row >*
Cfg_Monster::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_Monster.rows)
  return &rows_;
}
inline const ::Cfg_Monster_Row& Cfg_Monster::_internal_rows(int index) const {
  return rows_.Get(index);
}
inline const ::Cfg_Monster_Row& Cfg_Monster::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_Monster.rows)
  return _internal_rows(index);
}
inline ::Cfg_Monster_Row* Cfg_Monster::_internal_add_rows() {
  return rows_.Add();
}
inline ::Cfg_Monster_Row* Cfg_Monster::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_Monster.rows)
  return _internal_add_rows();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_Monster_Row >&
Cfg_Monster::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_Monster.rows)
  return rows_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fMonster_2eproto
