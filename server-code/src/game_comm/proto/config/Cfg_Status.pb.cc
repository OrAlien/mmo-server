// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_Status.proto

#include "config/Cfg_Status.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_config_2fCfg_5fStatus_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Cfg_Status_Row_config_2fCfg_5fStatus_2eproto;
class Cfg_Status_RowDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Cfg_Status_Row> _instance;
} _Cfg_Status_Row_default_instance_;
class Cfg_StatusDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Cfg_Status> _instance;
} _Cfg_Status_default_instance_;
static void InitDefaultsscc_info_Cfg_Status_config_2fCfg_5fStatus_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Cfg_Status_default_instance_;
    new (ptr) ::Cfg_Status();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Cfg_Status::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Cfg_Status_config_2fCfg_5fStatus_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Cfg_Status_config_2fCfg_5fStatus_2eproto}, {
      &scc_info_Cfg_Status_Row_config_2fCfg_5fStatus_2eproto.base,}};

static void InitDefaultsscc_info_Cfg_Status_Row_config_2fCfg_5fStatus_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Cfg_Status_Row_default_instance_;
    new (ptr) ::Cfg_Status_Row();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Cfg_Status_Row::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Cfg_Status_Row_config_2fCfg_5fStatus_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Cfg_Status_Row_config_2fCfg_5fStatus_2eproto}, {
      &scc_info_AttribChangeDataProto_common_2fAttribChangeDataProto_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_config_2fCfg_5fStatus_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_config_2fCfg_5fStatus_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_config_2fCfg_5fStatus_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_config_2fCfg_5fStatus_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, id_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, level_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, status_type_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, status_expire_type_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, status_flag_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, power_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, secs_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, times_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, max_times_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, max_secs_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, scriptid_),
  PROTOBUF_FIELD_OFFSET(::Cfg_Status_Row, attrib_change_list_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Cfg_Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Cfg_Status, rows_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Cfg_Status_Row)},
  { 17, -1, sizeof(::Cfg_Status)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Cfg_Status_Row_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Cfg_Status_default_instance_),
};

const char descriptor_table_protodef_config_2fCfg_5fStatus_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027config/Cfg_Status.proto\032\"common/Attrib"
  "ChangeDataProto.proto\"\253\002\n\nCfg_Status\022\035\n\004"
  "rows\030\001 \003(\0132\017.Cfg_Status.Row\032\375\001\n\003Row\022\n\n\002i"
  "d\030\001 \001(\r\022\r\n\005level\030\002 \001(\r\022\023\n\013status_type\030\003 "
  "\001(\r\022\032\n\022status_expire_type\030\004 \001(\r\022\023\n\013statu"
  "s_flag\030\005 \001(\r\022\r\n\005power\030\006 \001(\r\022\014\n\004secs\030\007 \001("
  "\005\022\r\n\005times\030\010 \001(\005\022\021\n\tmax_times\030\t \001(\r\022\020\n\010m"
  "ax_secs\030\n \001(\r\022\020\n\010scriptid\030\013 \001(\003\0222\n\022attri"
  "b_change_list\030\014 \003(\0132\026.AttribChangeDataPr"
  "otoB\002H\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_config_2fCfg_5fStatus_2eproto_deps[1] = {
  &::descriptor_table_common_2fAttribChangeDataProto_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_config_2fCfg_5fStatus_2eproto_sccs[2] = {
  &scc_info_Cfg_Status_config_2fCfg_5fStatus_2eproto.base,
  &scc_info_Cfg_Status_Row_config_2fCfg_5fStatus_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_config_2fCfg_5fStatus_2eproto_once;
static bool descriptor_table_config_2fCfg_5fStatus_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_config_2fCfg_5fStatus_2eproto = {
  &descriptor_table_config_2fCfg_5fStatus_2eproto_initialized, descriptor_table_protodef_config_2fCfg_5fStatus_2eproto, "config/Cfg_Status.proto", 375,
  &descriptor_table_config_2fCfg_5fStatus_2eproto_once, descriptor_table_config_2fCfg_5fStatus_2eproto_sccs, descriptor_table_config_2fCfg_5fStatus_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_config_2fCfg_5fStatus_2eproto::offsets,
  file_level_metadata_config_2fCfg_5fStatus_2eproto, 2, file_level_enum_descriptors_config_2fCfg_5fStatus_2eproto, file_level_service_descriptors_config_2fCfg_5fStatus_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_config_2fCfg_5fStatus_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_config_2fCfg_5fStatus_2eproto), true);

// ===================================================================

void Cfg_Status_Row::InitAsDefaultInstance() {
}
class Cfg_Status_Row::_Internal {
 public:
};

void Cfg_Status_Row::clear_attrib_change_list() {
  attrib_change_list_.Clear();
}
Cfg_Status_Row::Cfg_Status_Row()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_Status.Row)
}
Cfg_Status_Row::Cfg_Status_Row(const Cfg_Status_Row& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      attrib_change_list_(from.attrib_change_list_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&scriptid_) -
    reinterpret_cast<char*>(&id_)) + sizeof(scriptid_));
  // @@protoc_insertion_point(copy_constructor:Cfg_Status.Row)
}

void Cfg_Status_Row::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Cfg_Status_Row_config_2fCfg_5fStatus_2eproto.base);
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&scriptid_) -
      reinterpret_cast<char*>(&id_)) + sizeof(scriptid_));
}

Cfg_Status_Row::~Cfg_Status_Row() {
  // @@protoc_insertion_point(destructor:Cfg_Status.Row)
  SharedDtor();
}

void Cfg_Status_Row::SharedDtor() {
}

void Cfg_Status_Row::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Cfg_Status_Row& Cfg_Status_Row::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Cfg_Status_Row_config_2fCfg_5fStatus_2eproto.base);
  return *internal_default_instance();
}


void Cfg_Status_Row::InternalSwap(Cfg_Status_Row* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::PROTOBUF_NAMESPACE_ID::Metadata Cfg_Status_Row::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Cfg_Status::InitAsDefaultInstance() {
}
class Cfg_Status::_Internal {
 public:
};

Cfg_Status::Cfg_Status()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_Status)
}
Cfg_Status::Cfg_Status(const Cfg_Status& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      rows_(from.rows_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Cfg_Status)
}

void Cfg_Status::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Cfg_Status_config_2fCfg_5fStatus_2eproto.base);
}

Cfg_Status::~Cfg_Status() {
  // @@protoc_insertion_point(destructor:Cfg_Status)
  SharedDtor();
}

void Cfg_Status::SharedDtor() {
}

void Cfg_Status::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Cfg_Status& Cfg_Status::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Cfg_Status_config_2fCfg_5fStatus_2eproto.base);
  return *internal_default_instance();
}


void Cfg_Status::InternalSwap(Cfg_Status* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::PROTOBUF_NAMESPACE_ID::Metadata Cfg_Status::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Cfg_Status_Row* Arena::CreateMaybeMessage< ::Cfg_Status_Row >(Arena* arena) {
  return Arena::CreateInternal< ::Cfg_Status_Row >(arena);
}
template<> PROTOBUF_NOINLINE ::Cfg_Status* Arena::CreateMaybeMessage< ::Cfg_Status >(Arena* arena) {
  return Arena::CreateInternal< ::Cfg_Status >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
