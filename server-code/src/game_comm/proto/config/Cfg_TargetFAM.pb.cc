// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_TargetFAM.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "config/Cfg_TargetFAM.pb.h"

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

const ::google::protobuf::Descriptor* Cfg_TargetFAM_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_TargetFAM_reflection_ = NULL;
const ::google::protobuf::Descriptor* Cfg_TargetFAM_Row_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_TargetFAM_Row_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_config_2fCfg_5fTargetFAM_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_config_2fCfg_5fTargetFAM_2eproto() {
  protobuf_AddDesc_config_2fCfg_5fTargetFAM_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "config/Cfg_TargetFAM.proto");
  GOOGLE_CHECK(file != NULL);
  Cfg_TargetFAM_descriptor_ = file->message_type(0);
  static const int Cfg_TargetFAM_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_TargetFAM, rows_),
  };
  Cfg_TargetFAM_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_TargetFAM_descriptor_,
      Cfg_TargetFAM::internal_default_instance(),
      Cfg_TargetFAM_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_TargetFAM),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_TargetFAM, _internal_metadata_));
  Cfg_TargetFAM_Row_descriptor_ = Cfg_TargetFAM_descriptor_->nested_type(0);
  static const int Cfg_TargetFAM_Row_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_TargetFAM_Row, idmonster_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_TargetFAM_Row, dis_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_TargetFAM_Row, hp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_TargetFAM_Row, target_hp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_TargetFAM_Row, oper_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_TargetFAM_Row, like_),
  };
  Cfg_TargetFAM_Row_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_TargetFAM_Row_descriptor_,
      Cfg_TargetFAM_Row::internal_default_instance(),
      Cfg_TargetFAM_Row_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_TargetFAM_Row),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_TargetFAM_Row, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_config_2fCfg_5fTargetFAM_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_TargetFAM_descriptor_, Cfg_TargetFAM::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_TargetFAM_Row_descriptor_, Cfg_TargetFAM_Row::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_config_2fCfg_5fTargetFAM_2eproto() {
  Cfg_TargetFAM_default_instance_.Shutdown();
  delete Cfg_TargetFAM_reflection_;
  Cfg_TargetFAM_Row_default_instance_.Shutdown();
  delete Cfg_TargetFAM_Row_reflection_;
}

void protobuf_InitDefaults_config_2fCfg_5fTargetFAM_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Cfg_TargetFAM_default_instance_.DefaultConstruct();
  Cfg_TargetFAM_Row_default_instance_.DefaultConstruct();
  Cfg_TargetFAM_default_instance_.get_mutable()->InitAsDefaultInstance();
  Cfg_TargetFAM_Row_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_config_2fCfg_5fTargetFAM_2eproto_once_);
void protobuf_InitDefaults_config_2fCfg_5fTargetFAM_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_config_2fCfg_5fTargetFAM_2eproto_once_,
                 &protobuf_InitDefaults_config_2fCfg_5fTargetFAM_2eproto_impl);
}
void protobuf_AddDesc_config_2fCfg_5fTargetFAM_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_config_2fCfg_5fTargetFAM_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032config/Cfg_TargetFAM.proto\"\230\001\n\rCfg_Tar"
    "getFAM\022 \n\004rows\030\001 \003(\0132\022.Cfg_TargetFAM.Row"
    "\032e\n\003Row\022\021\n\tidmonster\030\001 \001(\r\022\013\n\003dis\030\002 \001(\r\022"
    "\n\n\002hp\030\003 \001(\r\022\021\n\ttarget_hp\030\004 \001(\r\022\021\n\toper_t"
    "ype\030\005 \001(\r\022\014\n\004like\030\006 \001(\rB\002H\002b\006proto3", 195);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "config/Cfg_TargetFAM.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_config_2fCfg_5fTargetFAM_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_config_2fCfg_5fTargetFAM_2eproto_once_);
void protobuf_AddDesc_config_2fCfg_5fTargetFAM_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_config_2fCfg_5fTargetFAM_2eproto_once_,
                 &protobuf_AddDesc_config_2fCfg_5fTargetFAM_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_config_2fCfg_5fTargetFAM_2eproto {
  StaticDescriptorInitializer_config_2fCfg_5fTargetFAM_2eproto() {
    protobuf_AddDesc_config_2fCfg_5fTargetFAM_2eproto();
  }
} static_descriptor_initializer_config_2fCfg_5fTargetFAM_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_TargetFAM_Row::kIdmonsterFieldNumber;
const int Cfg_TargetFAM_Row::kDisFieldNumber;
const int Cfg_TargetFAM_Row::kHpFieldNumber;
const int Cfg_TargetFAM_Row::kTargetHpFieldNumber;
const int Cfg_TargetFAM_Row::kOperTypeFieldNumber;
const int Cfg_TargetFAM_Row::kLikeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_TargetFAM_Row::Cfg_TargetFAM_Row()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fTargetFAM_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_TargetFAM.Row)
}

void Cfg_TargetFAM_Row::InitAsDefaultInstance() {
}

Cfg_TargetFAM_Row::Cfg_TargetFAM_Row(const Cfg_TargetFAM_Row& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_TargetFAM.Row)
}

void Cfg_TargetFAM_Row::SharedCtor() {
  ::memset(&idmonster_, 0, reinterpret_cast<char*>(&like_) -
    reinterpret_cast<char*>(&idmonster_) + sizeof(like_));
  _cached_size_ = 0;
}

Cfg_TargetFAM_Row::~Cfg_TargetFAM_Row() {
  // @@protoc_insertion_point(destructor:Cfg_TargetFAM.Row)
  SharedDtor();
}

void Cfg_TargetFAM_Row::SharedDtor() {
}

void Cfg_TargetFAM_Row::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_TargetFAM_Row::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_TargetFAM_Row_descriptor_;
}

const Cfg_TargetFAM_Row& Cfg_TargetFAM_Row::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fTargetFAM_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_TargetFAM_Row> Cfg_TargetFAM_Row_default_instance_;

Cfg_TargetFAM_Row* Cfg_TargetFAM_Row::New(::google::protobuf::Arena* arena) const {
  Cfg_TargetFAM_Row* n = new Cfg_TargetFAM_Row;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_TargetFAM_Row::UnsafeMergeFrom(const Cfg_TargetFAM_Row& from) {
  MergeFrom(from);
}
void Cfg_TargetFAM_Row::Swap(Cfg_TargetFAM_Row* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_TargetFAM_Row::InternalSwap(Cfg_TargetFAM_Row* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_TargetFAM_Row::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_TargetFAM_Row_descriptor_;
  metadata.reflection = Cfg_TargetFAM_Row_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_TargetFAM::kRowsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_TargetFAM::Cfg_TargetFAM()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fTargetFAM_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_TargetFAM)
}

void Cfg_TargetFAM::InitAsDefaultInstance() {
}

Cfg_TargetFAM::Cfg_TargetFAM(const Cfg_TargetFAM& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_TargetFAM)
}

void Cfg_TargetFAM::SharedCtor() {
  _cached_size_ = 0;
}

Cfg_TargetFAM::~Cfg_TargetFAM() {
  // @@protoc_insertion_point(destructor:Cfg_TargetFAM)
  SharedDtor();
}

void Cfg_TargetFAM::SharedDtor() {
}

void Cfg_TargetFAM::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_TargetFAM::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_TargetFAM_descriptor_;
}

const Cfg_TargetFAM& Cfg_TargetFAM::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fTargetFAM_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_TargetFAM> Cfg_TargetFAM_default_instance_;

Cfg_TargetFAM* Cfg_TargetFAM::New(::google::protobuf::Arena* arena) const {
  Cfg_TargetFAM* n = new Cfg_TargetFAM;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_TargetFAM::UnsafeMergeFrom(const Cfg_TargetFAM& from) {
  MergeFrom(from);
}
void Cfg_TargetFAM::Swap(Cfg_TargetFAM* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_TargetFAM::InternalSwap(Cfg_TargetFAM* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_TargetFAM::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_TargetFAM_descriptor_;
  metadata.reflection = Cfg_TargetFAM_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Cfg_TargetFAM_Row

// optional uint32 idmonster = 1;
void Cfg_TargetFAM_Row::clear_idmonster() {
  idmonster_ = 0u;
}
::google::protobuf::uint32 Cfg_TargetFAM_Row::idmonster() const {
  // @@protoc_insertion_point(field_get:Cfg_TargetFAM.Row.idmonster)
  return idmonster_;
}
void Cfg_TargetFAM_Row::set_idmonster(::google::protobuf::uint32 value) {
  
  idmonster_ = value;
  // @@protoc_insertion_point(field_set:Cfg_TargetFAM.Row.idmonster)
}

// optional uint32 dis = 2;
void Cfg_TargetFAM_Row::clear_dis() {
  dis_ = 0u;
}
::google::protobuf::uint32 Cfg_TargetFAM_Row::dis() const {
  // @@protoc_insertion_point(field_get:Cfg_TargetFAM.Row.dis)
  return dis_;
}
void Cfg_TargetFAM_Row::set_dis(::google::protobuf::uint32 value) {
  
  dis_ = value;
  // @@protoc_insertion_point(field_set:Cfg_TargetFAM.Row.dis)
}

// optional uint32 hp = 3;
void Cfg_TargetFAM_Row::clear_hp() {
  hp_ = 0u;
}
::google::protobuf::uint32 Cfg_TargetFAM_Row::hp() const {
  // @@protoc_insertion_point(field_get:Cfg_TargetFAM.Row.hp)
  return hp_;
}
void Cfg_TargetFAM_Row::set_hp(::google::protobuf::uint32 value) {
  
  hp_ = value;
  // @@protoc_insertion_point(field_set:Cfg_TargetFAM.Row.hp)
}

// optional uint32 target_hp = 4;
void Cfg_TargetFAM_Row::clear_target_hp() {
  target_hp_ = 0u;
}
::google::protobuf::uint32 Cfg_TargetFAM_Row::target_hp() const {
  // @@protoc_insertion_point(field_get:Cfg_TargetFAM.Row.target_hp)
  return target_hp_;
}
void Cfg_TargetFAM_Row::set_target_hp(::google::protobuf::uint32 value) {
  
  target_hp_ = value;
  // @@protoc_insertion_point(field_set:Cfg_TargetFAM.Row.target_hp)
}

// optional uint32 oper_type = 5;
void Cfg_TargetFAM_Row::clear_oper_type() {
  oper_type_ = 0u;
}
::google::protobuf::uint32 Cfg_TargetFAM_Row::oper_type() const {
  // @@protoc_insertion_point(field_get:Cfg_TargetFAM.Row.oper_type)
  return oper_type_;
}
void Cfg_TargetFAM_Row::set_oper_type(::google::protobuf::uint32 value) {
  
  oper_type_ = value;
  // @@protoc_insertion_point(field_set:Cfg_TargetFAM.Row.oper_type)
}

// optional uint32 like = 6;
void Cfg_TargetFAM_Row::clear_like() {
  like_ = 0u;
}
::google::protobuf::uint32 Cfg_TargetFAM_Row::like() const {
  // @@protoc_insertion_point(field_get:Cfg_TargetFAM.Row.like)
  return like_;
}
void Cfg_TargetFAM_Row::set_like(::google::protobuf::uint32 value) {
  
  like_ = value;
  // @@protoc_insertion_point(field_set:Cfg_TargetFAM.Row.like)
}

inline const Cfg_TargetFAM_Row* Cfg_TargetFAM_Row::internal_default_instance() {
  return &Cfg_TargetFAM_Row_default_instance_.get();
}
// -------------------------------------------------------------------

// Cfg_TargetFAM

// repeated .Cfg_TargetFAM.Row rows = 1;
int Cfg_TargetFAM::rows_size() const {
  return rows_.size();
}
void Cfg_TargetFAM::clear_rows() {
  rows_.Clear();
}
const ::Cfg_TargetFAM_Row& Cfg_TargetFAM::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_TargetFAM.rows)
  return rows_.Get(index);
}
::Cfg_TargetFAM_Row* Cfg_TargetFAM::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_TargetFAM.rows)
  return rows_.Mutable(index);
}
::Cfg_TargetFAM_Row* Cfg_TargetFAM::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_TargetFAM.rows)
  return rows_.Add();
}
::google::protobuf::RepeatedPtrField< ::Cfg_TargetFAM_Row >*
Cfg_TargetFAM::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_TargetFAM.rows)
  return &rows_;
}
const ::google::protobuf::RepeatedPtrField< ::Cfg_TargetFAM_Row >&
Cfg_TargetFAM::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_TargetFAM.rows)
  return rows_;
}

inline const Cfg_TargetFAM* Cfg_TargetFAM::internal_default_instance() {
  return &Cfg_TargetFAM_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)