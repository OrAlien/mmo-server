// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_Skill.proto

#include "config/Cfg_Skill.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_common_2fAttribChangeDataProto_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AttribChangeDataProto_common_2fAttribChangeDataProto_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_config_2fCfg_5fSkill_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Cfg_Skill_Row_config_2fCfg_5fSkill_2eproto;
class Cfg_Skill_RowDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Cfg_Skill_Row> _instance;
} _Cfg_Skill_Row_default_instance_;
class Cfg_SkillDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Cfg_Skill> _instance;
} _Cfg_Skill_default_instance_;
static void InitDefaultsscc_info_Cfg_Skill_config_2fCfg_5fSkill_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Cfg_Skill_default_instance_;
    new (ptr) ::Cfg_Skill();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Cfg_Skill::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Cfg_Skill_config_2fCfg_5fSkill_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Cfg_Skill_config_2fCfg_5fSkill_2eproto}, {
      &scc_info_Cfg_Skill_Row_config_2fCfg_5fSkill_2eproto.base,}};

static void InitDefaultsscc_info_Cfg_Skill_Row_config_2fCfg_5fSkill_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Cfg_Skill_Row_default_instance_;
    new (ptr) ::Cfg_Skill_Row();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Cfg_Skill_Row::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Cfg_Skill_Row_config_2fCfg_5fSkill_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Cfg_Skill_Row_config_2fCfg_5fSkill_2eproto}, {
      &scc_info_AttribChangeDataProto_common_2fAttribChangeDataProto_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_config_2fCfg_5fSkill_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_config_2fCfg_5fSkill_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_config_2fCfg_5fSkill_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_config_2fCfg_5fSkill_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, id_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, sort_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, level_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, type_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, name_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, learn_level_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, prof_req_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, skillid_req_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, use_itemtype_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, use_mp_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, use_hp_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, use_needstatus_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, power_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, max_power_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, power_addition_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, data_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, intone_ms_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, apply_times_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, apply_ms_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, apply_adj_ms_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, stun_ms_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, cd_sec_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, cd_type_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, hit_type_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, distance_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, max_distance_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, range_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, width_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, cast_type_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, flag_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, damage_flag_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, damage_shape_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, bulletid_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, scriptid_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, isdebug_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill_Row, attrib_change_list_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Cfg_Skill, rows_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Cfg_Skill_Row)},
  { 41, -1, sizeof(::Cfg_Skill)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Cfg_Skill_Row_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Cfg_Skill_default_instance_),
};

const char descriptor_table_protodef_config_2fCfg_5fSkill_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026config/Cfg_Skill.proto\032\"common/AttribC"
  "hangeDataProto.proto\"\327\005\n\tCfg_Skill\022\034\n\004ro"
  "ws\030\001 \003(\0132\016.Cfg_Skill.Row\032\253\005\n\003Row\022\n\n\002id\030\001"
  " \001(\r\022\014\n\004sort\030\002 \001(\r\022\r\n\005level\030\003 \001(\r\022\014\n\004typ"
  "e\030\004 \001(\r\022\014\n\004name\030\005 \001(\t\022\023\n\013learn_level\030\006 \001"
  "(\r\022\020\n\010prof_req\030\007 \001(\r\022\023\n\013skillid_req\030\010 \001("
  "\r\022\024\n\014use_itemtype\030\t \001(\r\022\016\n\006use_mp\030\n \001(\005\022"
  "\016\n\006use_hp\030\013 \001(\005\022\026\n\016use_needstatus\030\014 \001(\r\022"
  "\r\n\005power\030\r \001(\r\022\021\n\tmax_power\030\016 \001(\r\022\026\n\016pow"
  "er_addition\030\017 \001(\r\022\014\n\004data\030\020 \001(\r\022\021\n\tinton"
  "e_ms\030\021 \001(\r\022\023\n\013apply_times\030\022 \001(\r\022\020\n\010apply"
  "_ms\030\023 \001(\r\022\024\n\014apply_adj_ms\030\024 \001(\r\022\017\n\007stun_"
  "ms\030\025 \001(\r\022\016\n\006cd_sec\030\026 \001(\r\022\017\n\007cd_type\030\027 \001("
  "\r\022\020\n\010hit_type\030\030 \001(\r\022\020\n\010distance\030\031 \001(\002\022\024\n"
  "\014max_distance\030\032 \001(\002\022\r\n\005range\030\033 \001(\002\022\r\n\005wi"
  "dth\030\034 \001(\002\022\021\n\tcast_type\030\035 \001(\r\022\014\n\004flag\030\036 \001"
  "(\r\022\023\n\013damage_flag\030\037 \001(\r\022\024\n\014damage_shape\030"
  "  \001(\r\022\020\n\010bulletid\030! \001(\r\022\020\n\010scriptid\030\" \001("
  "\004\022\017\n\007isdebug\030# \001(\010\0222\n\022attrib_change_list"
  "\030$ \003(\0132\026.AttribChangeDataProtoB\002H\002b\006prot"
  "o3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_config_2fCfg_5fSkill_2eproto_deps[1] = {
  &::descriptor_table_common_2fAttribChangeDataProto_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_config_2fCfg_5fSkill_2eproto_sccs[2] = {
  &scc_info_Cfg_Skill_config_2fCfg_5fSkill_2eproto.base,
  &scc_info_Cfg_Skill_Row_config_2fCfg_5fSkill_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_config_2fCfg_5fSkill_2eproto_once;
static bool descriptor_table_config_2fCfg_5fSkill_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_config_2fCfg_5fSkill_2eproto = {
  &descriptor_table_config_2fCfg_5fSkill_2eproto_initialized, descriptor_table_protodef_config_2fCfg_5fSkill_2eproto, "config/Cfg_Skill.proto", 802,
  &descriptor_table_config_2fCfg_5fSkill_2eproto_once, descriptor_table_config_2fCfg_5fSkill_2eproto_sccs, descriptor_table_config_2fCfg_5fSkill_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_config_2fCfg_5fSkill_2eproto::offsets,
  file_level_metadata_config_2fCfg_5fSkill_2eproto, 2, file_level_enum_descriptors_config_2fCfg_5fSkill_2eproto, file_level_service_descriptors_config_2fCfg_5fSkill_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_config_2fCfg_5fSkill_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_config_2fCfg_5fSkill_2eproto), true);

// ===================================================================

void Cfg_Skill_Row::InitAsDefaultInstance() {
}
class Cfg_Skill_Row::_Internal {
 public:
};

void Cfg_Skill_Row::clear_attrib_change_list() {
  attrib_change_list_.Clear();
}
Cfg_Skill_Row::Cfg_Skill_Row()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_Skill.Row)
}
Cfg_Skill_Row::Cfg_Skill_Row(const Cfg_Skill_Row& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      attrib_change_list_(from.attrib_change_list_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&isdebug_) -
    reinterpret_cast<char*>(&id_)) + sizeof(isdebug_));
  // @@protoc_insertion_point(copy_constructor:Cfg_Skill.Row)
}

void Cfg_Skill_Row::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Cfg_Skill_Row_config_2fCfg_5fSkill_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&isdebug_) -
      reinterpret_cast<char*>(&id_)) + sizeof(isdebug_));
}

Cfg_Skill_Row::~Cfg_Skill_Row() {
  // @@protoc_insertion_point(destructor:Cfg_Skill.Row)
  SharedDtor();
}

void Cfg_Skill_Row::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Cfg_Skill_Row::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Cfg_Skill_Row& Cfg_Skill_Row::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Cfg_Skill_Row_config_2fCfg_5fSkill_2eproto.base);
  return *internal_default_instance();
}


void Cfg_Skill_Row::InternalSwap(Cfg_Skill_Row* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::PROTOBUF_NAMESPACE_ID::Metadata Cfg_Skill_Row::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Cfg_Skill::InitAsDefaultInstance() {
}
class Cfg_Skill::_Internal {
 public:
};

Cfg_Skill::Cfg_Skill()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_Skill)
}
Cfg_Skill::Cfg_Skill(const Cfg_Skill& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      rows_(from.rows_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Cfg_Skill)
}

void Cfg_Skill::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Cfg_Skill_config_2fCfg_5fSkill_2eproto.base);
}

Cfg_Skill::~Cfg_Skill() {
  // @@protoc_insertion_point(destructor:Cfg_Skill)
  SharedDtor();
}

void Cfg_Skill::SharedDtor() {
}

void Cfg_Skill::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Cfg_Skill& Cfg_Skill::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Cfg_Skill_config_2fCfg_5fSkill_2eproto.base);
  return *internal_default_instance();
}


void Cfg_Skill::InternalSwap(Cfg_Skill* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::PROTOBUF_NAMESPACE_ID::Metadata Cfg_Skill::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Cfg_Skill_Row* Arena::CreateMaybeMessage< ::Cfg_Skill_Row >(Arena* arena) {
  return Arena::CreateInternal< ::Cfg_Skill_Row >(arena);
}
template<> PROTOBUF_NOINLINE ::Cfg_Skill* Arena::CreateMaybeMessage< ::Cfg_Skill >(Arena* arena) {
  return Arena::CreateInternal< ::Cfg_Skill >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
