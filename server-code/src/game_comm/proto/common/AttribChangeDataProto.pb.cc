// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/AttribChangeDataProto.proto

#include "common/AttribChangeDataProto.pb.h"

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
class AttribDataProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AttribDataProto> _instance;
} _AttribDataProto_default_instance_;
class AttribChangeDataProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AttribChangeDataProto> _instance;
} _AttribChangeDataProto_default_instance_;
class ItemExtraDataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ItemExtraData> _instance;
} _ItemExtraData_default_instance_;
static void InitDefaultsscc_info_AttribChangeDataProto_common_2fAttribChangeDataProto_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_AttribChangeDataProto_default_instance_;
    new (ptr) ::AttribChangeDataProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AttribChangeDataProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AttribChangeDataProto_common_2fAttribChangeDataProto_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_AttribChangeDataProto_common_2fAttribChangeDataProto_2eproto}, {}};

static void InitDefaultsscc_info_AttribDataProto_common_2fAttribChangeDataProto_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_AttribDataProto_default_instance_;
    new (ptr) ::AttribDataProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AttribDataProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AttribDataProto_common_2fAttribChangeDataProto_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_AttribDataProto_common_2fAttribChangeDataProto_2eproto}, {}};

static void InitDefaultsscc_info_ItemExtraData_common_2fAttribChangeDataProto_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ItemExtraData_default_instance_;
    new (ptr) ::ItemExtraData();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ItemExtraData::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ItemExtraData_common_2fAttribChangeDataProto_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ItemExtraData_common_2fAttribChangeDataProto_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_common_2fAttribChangeDataProto_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_common_2fAttribChangeDataProto_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_common_2fAttribChangeDataProto_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_common_2fAttribChangeDataProto_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, hp_max_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, mp_max_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, movespd_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, min_atk_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, max_atk_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, min_def_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, max_def_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, min_matk_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, max_matk_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, min_mdef_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, max_mdef_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, hit_),
  PROTOBUF_FIELD_OFFSET(::AttribDataProto, dodge_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AttribChangeDataProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AttribChangeDataProto, attrib_),
  PROTOBUF_FIELD_OFFSET(::AttribChangeDataProto, oplev_),
  PROTOBUF_FIELD_OFFSET(::AttribChangeDataProto, val_),
  PROTOBUF_FIELD_OFFSET(::AttribChangeDataProto, factor_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ItemExtraData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ItemExtraData, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AttribDataProto)},
  { 18, -1, sizeof(::AttribChangeDataProto)},
  { 27, -1, sizeof(::ItemExtraData)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_AttribDataProto_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_AttribChangeDataProto_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ItemExtraData_default_instance_),
};

const char descriptor_table_protodef_common_2fAttribChangeDataProto_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"common/AttribChangeDataProto.proto\032\023co"
  "mmon/Common.proto\"\352\001\n\017AttribDataProto\022\016\n"
  "\006hp_max\030\006 \001(\005\022\016\n\006mp_max\030\007 \001(\005\022\017\n\007movespd"
  "\030\010 \001(\005\022\017\n\007min_atk\030\t \001(\005\022\017\n\007max_atk\030\n \001(\005"
  "\022\017\n\007min_def\030\013 \001(\005\022\017\n\007max_def\030\014 \001(\005\022\020\n\010mi"
  "n_matk\030\r \001(\005\022\020\n\010max_matk\030\016 \001(\005\022\020\n\010min_md"
  "ef\030\017 \001(\005\022\020\n\010max_mdef\030\020 \001(\005\022\013\n\003hit\030\021 \001(\005\022"
  "\r\n\005dodge\030\022 \001(\005\"b\n\025AttribChangeDataProto\022"
  "\035\n\006attrib\030\001 \001(\0162\r.ACTOR_ATTRIB\022\r\n\005oplev\030"
  "\002 \001(\r\022\013\n\003val\030\003 \001(\005\022\016\n\006factor\030\004 \001(\005\"\035\n\rIt"
  "emExtraData\022\014\n\004data\030\001 \003(\rB\002H\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_common_2fAttribChangeDataProto_2eproto_deps[1] = {
  &::descriptor_table_common_2fCommon_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_common_2fAttribChangeDataProto_2eproto_sccs[3] = {
  &scc_info_AttribChangeDataProto_common_2fAttribChangeDataProto_2eproto.base,
  &scc_info_AttribDataProto_common_2fAttribChangeDataProto_2eproto.base,
  &scc_info_ItemExtraData_common_2fAttribChangeDataProto_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_common_2fAttribChangeDataProto_2eproto_once;
static bool descriptor_table_common_2fAttribChangeDataProto_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2fAttribChangeDataProto_2eproto = {
  &descriptor_table_common_2fAttribChangeDataProto_2eproto_initialized, descriptor_table_protodef_common_2fAttribChangeDataProto_2eproto, "common/AttribChangeDataProto.proto", 437,
  &descriptor_table_common_2fAttribChangeDataProto_2eproto_once, descriptor_table_common_2fAttribChangeDataProto_2eproto_sccs, descriptor_table_common_2fAttribChangeDataProto_2eproto_deps, 3, 1,
  schemas, file_default_instances, TableStruct_common_2fAttribChangeDataProto_2eproto::offsets,
  file_level_metadata_common_2fAttribChangeDataProto_2eproto, 3, file_level_enum_descriptors_common_2fAttribChangeDataProto_2eproto, file_level_service_descriptors_common_2fAttribChangeDataProto_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_common_2fAttribChangeDataProto_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_common_2fAttribChangeDataProto_2eproto), true);

// ===================================================================

void AttribDataProto::InitAsDefaultInstance() {
}
class AttribDataProto::_Internal {
 public:
};

AttribDataProto::AttribDataProto()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:AttribDataProto)
}
AttribDataProto::AttribDataProto(const AttribDataProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&hp_max_, &from.hp_max_,
    static_cast<size_t>(reinterpret_cast<char*>(&hit_) -
    reinterpret_cast<char*>(&hp_max_)) + sizeof(hit_));
  // @@protoc_insertion_point(copy_constructor:AttribDataProto)
}

void AttribDataProto::SharedCtor() {
  ::memset(&hp_max_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&hit_) -
      reinterpret_cast<char*>(&hp_max_)) + sizeof(hit_));
}

AttribDataProto::~AttribDataProto() {
  // @@protoc_insertion_point(destructor:AttribDataProto)
  SharedDtor();
}

void AttribDataProto::SharedDtor() {
}

void AttribDataProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AttribDataProto& AttribDataProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AttribDataProto_common_2fAttribChangeDataProto_2eproto.base);
  return *internal_default_instance();
}


void AttribDataProto::InternalSwap(AttribDataProto* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::PROTOBUF_NAMESPACE_ID::Metadata AttribDataProto::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void AttribChangeDataProto::InitAsDefaultInstance() {
}
class AttribChangeDataProto::_Internal {
 public:
};

AttribChangeDataProto::AttribChangeDataProto()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:AttribChangeDataProto)
}
AttribChangeDataProto::AttribChangeDataProto(const AttribChangeDataProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&attrib_, &from.attrib_,
    static_cast<size_t>(reinterpret_cast<char*>(&factor_) -
    reinterpret_cast<char*>(&attrib_)) + sizeof(factor_));
  // @@protoc_insertion_point(copy_constructor:AttribChangeDataProto)
}

void AttribChangeDataProto::SharedCtor() {
  ::memset(&attrib_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&factor_) -
      reinterpret_cast<char*>(&attrib_)) + sizeof(factor_));
}

AttribChangeDataProto::~AttribChangeDataProto() {
  // @@protoc_insertion_point(destructor:AttribChangeDataProto)
  SharedDtor();
}

void AttribChangeDataProto::SharedDtor() {
}

void AttribChangeDataProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AttribChangeDataProto& AttribChangeDataProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AttribChangeDataProto_common_2fAttribChangeDataProto_2eproto.base);
  return *internal_default_instance();
}


void AttribChangeDataProto::InternalSwap(AttribChangeDataProto* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::PROTOBUF_NAMESPACE_ID::Metadata AttribChangeDataProto::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ItemExtraData::InitAsDefaultInstance() {
}
class ItemExtraData::_Internal {
 public:
};

ItemExtraData::ItemExtraData()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ItemExtraData)
}
ItemExtraData::ItemExtraData(const ItemExtraData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ItemExtraData)
}

void ItemExtraData::SharedCtor() {
}

ItemExtraData::~ItemExtraData() {
  // @@protoc_insertion_point(destructor:ItemExtraData)
  SharedDtor();
}

void ItemExtraData::SharedDtor() {
}

void ItemExtraData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ItemExtraData& ItemExtraData::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ItemExtraData_common_2fAttribChangeDataProto_2eproto.base);
  return *internal_default_instance();
}


void ItemExtraData::InternalSwap(ItemExtraData* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::PROTOBUF_NAMESPACE_ID::Metadata ItemExtraData::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AttribDataProto* Arena::CreateMaybeMessage< ::AttribDataProto >(Arena* arena) {
  return Arena::CreateInternal< ::AttribDataProto >(arena);
}
template<> PROTOBUF_NOINLINE ::AttribChangeDataProto* Arena::CreateMaybeMessage< ::AttribChangeDataProto >(Arena* arena) {
  return Arena::CreateInternal< ::AttribChangeDataProto >(arena);
}
template<> PROTOBUF_NOINLINE ::ItemExtraData* Arena::CreateMaybeMessage< ::ItemExtraData >(Arena* arena) {
  return Arena::CreateInternal< ::ItemExtraData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
