// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_Scene_MonsterGenerator.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "config/Cfg_Scene_MonsterGenerator.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* Cfg_Scene_MonsterGenerator_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_Scene_MonsterGenerator_reflection_ = NULL;
const ::google::protobuf::Descriptor* Cfg_Scene_MonsterGenerator_Row_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_Scene_MonsterGenerator_Row_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_config_2fCfg_5fScene_5fMonsterGenerator_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_config_2fCfg_5fScene_5fMonsterGenerator_2eproto() {
  protobuf_AddDesc_config_2fCfg_5fScene_5fMonsterGenerator_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "config/Cfg_Scene_MonsterGenerator.proto");
  GOOGLE_CHECK(file != NULL);
  Cfg_Scene_MonsterGenerator_descriptor_ = file->message_type(0);
  static const int Cfg_Scene_MonsterGenerator_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator, rows_),
  };
  Cfg_Scene_MonsterGenerator_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_Scene_MonsterGenerator_descriptor_,
      Cfg_Scene_MonsterGenerator::internal_default_instance(),
      Cfg_Scene_MonsterGenerator_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_Scene_MonsterGenerator),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator, _internal_metadata_));
  Cfg_Scene_MonsterGenerator_Row_descriptor_ = Cfg_Scene_MonsterGenerator_descriptor_->nested_type(0);
  static const int Cfg_Scene_MonsterGenerator_Row_offsets_[13] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, idmap_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, idx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, active_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, shape_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, width_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, monsterid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, per_gen_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, wait_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, gen_max_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, camp_id_),
  };
  Cfg_Scene_MonsterGenerator_Row_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_Scene_MonsterGenerator_Row_descriptor_,
      Cfg_Scene_MonsterGenerator_Row::internal_default_instance(),
      Cfg_Scene_MonsterGenerator_Row_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_Scene_MonsterGenerator_Row),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Scene_MonsterGenerator_Row, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_config_2fCfg_5fScene_5fMonsterGenerator_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_Scene_MonsterGenerator_descriptor_, Cfg_Scene_MonsterGenerator::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_Scene_MonsterGenerator_Row_descriptor_, Cfg_Scene_MonsterGenerator_Row::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_config_2fCfg_5fScene_5fMonsterGenerator_2eproto() {
  Cfg_Scene_MonsterGenerator_default_instance_.Shutdown();
  delete Cfg_Scene_MonsterGenerator_reflection_;
  Cfg_Scene_MonsterGenerator_Row_default_instance_.Shutdown();
  delete Cfg_Scene_MonsterGenerator_Row_reflection_;
}

void protobuf_InitDefaults_config_2fCfg_5fScene_5fMonsterGenerator_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Cfg_Scene_MonsterGenerator_default_instance_.DefaultConstruct();
  Cfg_Scene_MonsterGenerator_Row_default_instance_.DefaultConstruct();
  Cfg_Scene_MonsterGenerator_default_instance_.get_mutable()->InitAsDefaultInstance();
  Cfg_Scene_MonsterGenerator_Row_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_config_2fCfg_5fScene_5fMonsterGenerator_2eproto_once_);
void protobuf_InitDefaults_config_2fCfg_5fScene_5fMonsterGenerator_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_config_2fCfg_5fScene_5fMonsterGenerator_2eproto_once_,
                 &protobuf_InitDefaults_config_2fCfg_5fScene_5fMonsterGenerator_2eproto_impl);
}
void protobuf_AddDesc_config_2fCfg_5fScene_5fMonsterGenerator_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_config_2fCfg_5fScene_5fMonsterGenerator_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\'config/Cfg_Scene_MonsterGenerator.prot"
    "o\"\233\002\n\032Cfg_Scene_MonsterGenerator\022-\n\004rows"
    "\030\001 \003(\0132\037.Cfg_Scene_MonsterGenerator.Row\032"
    "\315\001\n\003Row\022\r\n\005idmap\030\001 \001(\r\022\013\n\003idx\030\002 \001(\r\022\016\n\006a"
    "ctive\030\003 \001(\r\022\r\n\005shape\030\004 \001(\r\022\t\n\001x\030\005 \001(\002\022\t\n"
    "\001y\030\006 \001(\002\022\r\n\005range\030\007 \001(\002\022\r\n\005width\030\010 \001(\002\022\021"
    "\n\tmonsterid\030\t \001(\r\022\017\n\007per_gen\030\n \001(\r\022\021\n\twa"
    "it_time\030\013 \001(\r\022\017\n\007gen_max\030\014 \001(\r\022\017\n\007camp_i"
    "d\030\r \001(\rB\002H\002b\006proto3", 339);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "config/Cfg_Scene_MonsterGenerator.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_config_2fCfg_5fScene_5fMonsterGenerator_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_config_2fCfg_5fScene_5fMonsterGenerator_2eproto_once_);
void protobuf_AddDesc_config_2fCfg_5fScene_5fMonsterGenerator_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_config_2fCfg_5fScene_5fMonsterGenerator_2eproto_once_,
                 &protobuf_AddDesc_config_2fCfg_5fScene_5fMonsterGenerator_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_config_2fCfg_5fScene_5fMonsterGenerator_2eproto {
  StaticDescriptorInitializer_config_2fCfg_5fScene_5fMonsterGenerator_2eproto() {
    protobuf_AddDesc_config_2fCfg_5fScene_5fMonsterGenerator_2eproto();
  }
} static_descriptor_initializer_config_2fCfg_5fScene_5fMonsterGenerator_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_Scene_MonsterGenerator_Row::kIdmapFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kIdxFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kActiveFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kShapeFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kXFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kYFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kRangeFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kWidthFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kMonsteridFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kPerGenFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kWaitTimeFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kGenMaxFieldNumber;
const int Cfg_Scene_MonsterGenerator_Row::kCampIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_Scene_MonsterGenerator_Row::Cfg_Scene_MonsterGenerator_Row()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fScene_5fMonsterGenerator_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_Scene_MonsterGenerator.Row)
}

void Cfg_Scene_MonsterGenerator_Row::InitAsDefaultInstance() {
}

Cfg_Scene_MonsterGenerator_Row::Cfg_Scene_MonsterGenerator_Row(const Cfg_Scene_MonsterGenerator_Row& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_Scene_MonsterGenerator.Row)
}

void Cfg_Scene_MonsterGenerator_Row::SharedCtor() {
  ::memset(&idmap_, 0, reinterpret_cast<char*>(&camp_id_) -
    reinterpret_cast<char*>(&idmap_) + sizeof(camp_id_));
  _cached_size_ = 0;
}

Cfg_Scene_MonsterGenerator_Row::~Cfg_Scene_MonsterGenerator_Row() {
  // @@protoc_insertion_point(destructor:Cfg_Scene_MonsterGenerator.Row)
  SharedDtor();
}

void Cfg_Scene_MonsterGenerator_Row::SharedDtor() {
}

void Cfg_Scene_MonsterGenerator_Row::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_Scene_MonsterGenerator_Row::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_Scene_MonsterGenerator_Row_descriptor_;
}

const Cfg_Scene_MonsterGenerator_Row& Cfg_Scene_MonsterGenerator_Row::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fScene_5fMonsterGenerator_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_Scene_MonsterGenerator_Row> Cfg_Scene_MonsterGenerator_Row_default_instance_;

Cfg_Scene_MonsterGenerator_Row* Cfg_Scene_MonsterGenerator_Row::New(::google::protobuf::Arena* arena) const {
  Cfg_Scene_MonsterGenerator_Row* n = new Cfg_Scene_MonsterGenerator_Row;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_Scene_MonsterGenerator_Row::UnsafeMergeFrom(const Cfg_Scene_MonsterGenerator_Row& from) {
  MergeFrom(from);
}
void Cfg_Scene_MonsterGenerator_Row::Swap(Cfg_Scene_MonsterGenerator_Row* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_Scene_MonsterGenerator_Row::InternalSwap(Cfg_Scene_MonsterGenerator_Row* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_Scene_MonsterGenerator_Row::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_Scene_MonsterGenerator_Row_descriptor_;
  metadata.reflection = Cfg_Scene_MonsterGenerator_Row_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_Scene_MonsterGenerator::kRowsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_Scene_MonsterGenerator::Cfg_Scene_MonsterGenerator()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fScene_5fMonsterGenerator_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_Scene_MonsterGenerator)
}

void Cfg_Scene_MonsterGenerator::InitAsDefaultInstance() {
}

Cfg_Scene_MonsterGenerator::Cfg_Scene_MonsterGenerator(const Cfg_Scene_MonsterGenerator& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_Scene_MonsterGenerator)
}

void Cfg_Scene_MonsterGenerator::SharedCtor() {
  _cached_size_ = 0;
}

Cfg_Scene_MonsterGenerator::~Cfg_Scene_MonsterGenerator() {
  // @@protoc_insertion_point(destructor:Cfg_Scene_MonsterGenerator)
  SharedDtor();
}

void Cfg_Scene_MonsterGenerator::SharedDtor() {
}

void Cfg_Scene_MonsterGenerator::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_Scene_MonsterGenerator::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_Scene_MonsterGenerator_descriptor_;
}

const Cfg_Scene_MonsterGenerator& Cfg_Scene_MonsterGenerator::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fScene_5fMonsterGenerator_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_Scene_MonsterGenerator> Cfg_Scene_MonsterGenerator_default_instance_;

Cfg_Scene_MonsterGenerator* Cfg_Scene_MonsterGenerator::New(::google::protobuf::Arena* arena) const {
  Cfg_Scene_MonsterGenerator* n = new Cfg_Scene_MonsterGenerator;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_Scene_MonsterGenerator::UnsafeMergeFrom(const Cfg_Scene_MonsterGenerator& from) {
  MergeFrom(from);
}
void Cfg_Scene_MonsterGenerator::Swap(Cfg_Scene_MonsterGenerator* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_Scene_MonsterGenerator::InternalSwap(Cfg_Scene_MonsterGenerator* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_Scene_MonsterGenerator::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_Scene_MonsterGenerator_descriptor_;
  metadata.reflection = Cfg_Scene_MonsterGenerator_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Cfg_Scene_MonsterGenerator_Row

// optional uint32 idmap = 1;
void Cfg_Scene_MonsterGenerator_Row::clear_idmap() {
  idmap_ = 0u;
}
::google::protobuf::uint32 Cfg_Scene_MonsterGenerator_Row::idmap() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.idmap)
  return idmap_;
}
void Cfg_Scene_MonsterGenerator_Row::set_idmap(::google::protobuf::uint32 value) {
  
  idmap_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.idmap)
}

// optional uint32 idx = 2;
void Cfg_Scene_MonsterGenerator_Row::clear_idx() {
  idx_ = 0u;
}
::google::protobuf::uint32 Cfg_Scene_MonsterGenerator_Row::idx() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.idx)
  return idx_;
}
void Cfg_Scene_MonsterGenerator_Row::set_idx(::google::protobuf::uint32 value) {
  
  idx_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.idx)
}

// optional uint32 active = 3;
void Cfg_Scene_MonsterGenerator_Row::clear_active() {
  active_ = 0u;
}
::google::protobuf::uint32 Cfg_Scene_MonsterGenerator_Row::active() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.active)
  return active_;
}
void Cfg_Scene_MonsterGenerator_Row::set_active(::google::protobuf::uint32 value) {
  
  active_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.active)
}

// optional uint32 shape = 4;
void Cfg_Scene_MonsterGenerator_Row::clear_shape() {
  shape_ = 0u;
}
::google::protobuf::uint32 Cfg_Scene_MonsterGenerator_Row::shape() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.shape)
  return shape_;
}
void Cfg_Scene_MonsterGenerator_Row::set_shape(::google::protobuf::uint32 value) {
  
  shape_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.shape)
}

// optional float x = 5;
void Cfg_Scene_MonsterGenerator_Row::clear_x() {
  x_ = 0;
}
float Cfg_Scene_MonsterGenerator_Row::x() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.x)
  return x_;
}
void Cfg_Scene_MonsterGenerator_Row::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.x)
}

// optional float y = 6;
void Cfg_Scene_MonsterGenerator_Row::clear_y() {
  y_ = 0;
}
float Cfg_Scene_MonsterGenerator_Row::y() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.y)
  return y_;
}
void Cfg_Scene_MonsterGenerator_Row::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.y)
}

// optional float range = 7;
void Cfg_Scene_MonsterGenerator_Row::clear_range() {
  range_ = 0;
}
float Cfg_Scene_MonsterGenerator_Row::range() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.range)
  return range_;
}
void Cfg_Scene_MonsterGenerator_Row::set_range(float value) {
  
  range_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.range)
}

// optional float width = 8;
void Cfg_Scene_MonsterGenerator_Row::clear_width() {
  width_ = 0;
}
float Cfg_Scene_MonsterGenerator_Row::width() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.width)
  return width_;
}
void Cfg_Scene_MonsterGenerator_Row::set_width(float value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.width)
}

// optional uint32 monsterid = 9;
void Cfg_Scene_MonsterGenerator_Row::clear_monsterid() {
  monsterid_ = 0u;
}
::google::protobuf::uint32 Cfg_Scene_MonsterGenerator_Row::monsterid() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.monsterid)
  return monsterid_;
}
void Cfg_Scene_MonsterGenerator_Row::set_monsterid(::google::protobuf::uint32 value) {
  
  monsterid_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.monsterid)
}

// optional uint32 per_gen = 10;
void Cfg_Scene_MonsterGenerator_Row::clear_per_gen() {
  per_gen_ = 0u;
}
::google::protobuf::uint32 Cfg_Scene_MonsterGenerator_Row::per_gen() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.per_gen)
  return per_gen_;
}
void Cfg_Scene_MonsterGenerator_Row::set_per_gen(::google::protobuf::uint32 value) {
  
  per_gen_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.per_gen)
}

// optional uint32 wait_time = 11;
void Cfg_Scene_MonsterGenerator_Row::clear_wait_time() {
  wait_time_ = 0u;
}
::google::protobuf::uint32 Cfg_Scene_MonsterGenerator_Row::wait_time() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.wait_time)
  return wait_time_;
}
void Cfg_Scene_MonsterGenerator_Row::set_wait_time(::google::protobuf::uint32 value) {
  
  wait_time_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.wait_time)
}

// optional uint32 gen_max = 12;
void Cfg_Scene_MonsterGenerator_Row::clear_gen_max() {
  gen_max_ = 0u;
}
::google::protobuf::uint32 Cfg_Scene_MonsterGenerator_Row::gen_max() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.gen_max)
  return gen_max_;
}
void Cfg_Scene_MonsterGenerator_Row::set_gen_max(::google::protobuf::uint32 value) {
  
  gen_max_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.gen_max)
}

// optional uint32 camp_id = 13;
void Cfg_Scene_MonsterGenerator_Row::clear_camp_id() {
  camp_id_ = 0u;
}
::google::protobuf::uint32 Cfg_Scene_MonsterGenerator_Row::camp_id() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.Row.camp_id)
  return camp_id_;
}
void Cfg_Scene_MonsterGenerator_Row::set_camp_id(::google::protobuf::uint32 value) {
  
  camp_id_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_MonsterGenerator.Row.camp_id)
}

inline const Cfg_Scene_MonsterGenerator_Row* Cfg_Scene_MonsterGenerator_Row::internal_default_instance() {
  return &Cfg_Scene_MonsterGenerator_Row_default_instance_.get();
}
// -------------------------------------------------------------------

// Cfg_Scene_MonsterGenerator

// repeated .Cfg_Scene_MonsterGenerator.Row rows = 1;
int Cfg_Scene_MonsterGenerator::rows_size() const {
  return rows_.size();
}
void Cfg_Scene_MonsterGenerator::clear_rows() {
  rows_.Clear();
}
const ::Cfg_Scene_MonsterGenerator_Row& Cfg_Scene_MonsterGenerator::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_MonsterGenerator.rows)
  return rows_.Get(index);
}
::Cfg_Scene_MonsterGenerator_Row* Cfg_Scene_MonsterGenerator::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_Scene_MonsterGenerator.rows)
  return rows_.Mutable(index);
}
::Cfg_Scene_MonsterGenerator_Row* Cfg_Scene_MonsterGenerator::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_Scene_MonsterGenerator.rows)
  return rows_.Add();
}
::google::protobuf::RepeatedPtrField< ::Cfg_Scene_MonsterGenerator_Row >*
Cfg_Scene_MonsterGenerator::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_Scene_MonsterGenerator.rows)
  return &rows_;
}
const ::google::protobuf::RepeatedPtrField< ::Cfg_Scene_MonsterGenerator_Row >&
Cfg_Scene_MonsterGenerator::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_Scene_MonsterGenerator.rows)
  return rows_;
}

inline const Cfg_Scene_MonsterGenerator* Cfg_Scene_MonsterGenerator::internal_default_instance() {
  return &Cfg_Scene_MonsterGenerator_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)