// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_ItemUpgrade.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "config/Cfg_ItemUpgrade.pb.h"

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

const ::google::protobuf::Descriptor* Cfg_ItemUpgrade_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_ItemUpgrade_reflection_ = NULL;
const ::google::protobuf::Descriptor* Cfg_ItemUpgrade_Row_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_ItemUpgrade_Row_reflection_ = NULL;
const ::google::protobuf::Descriptor* Cfg_ItemUpgrade_Row_ReqData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_ItemUpgrade_Row_ReqData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_config_2fCfg_5fItemUpgrade_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_config_2fCfg_5fItemUpgrade_2eproto() {
  protobuf_AddDesc_config_2fCfg_5fItemUpgrade_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "config/Cfg_ItemUpgrade.proto");
  GOOGLE_CHECK(file != NULL);
  Cfg_ItemUpgrade_descriptor_ = file->message_type(0);
  static const int Cfg_ItemUpgrade_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade, rows_),
  };
  Cfg_ItemUpgrade_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_ItemUpgrade_descriptor_,
      Cfg_ItemUpgrade::internal_default_instance(),
      Cfg_ItemUpgrade_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_ItemUpgrade),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade, _internal_metadata_));
  Cfg_ItemUpgrade_Row_descriptor_ = Cfg_ItemUpgrade_descriptor_->nested_type(0);
  static const int Cfg_ItemUpgrade_Row_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row, sort_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row, main_itemtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row, lev_req_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row, succ_rate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row, rumor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row, req_data_list_),
  };
  Cfg_ItemUpgrade_Row_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_ItemUpgrade_Row_descriptor_,
      Cfg_ItemUpgrade_Row::internal_default_instance(),
      Cfg_ItemUpgrade_Row_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_ItemUpgrade_Row),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row, _internal_metadata_));
  Cfg_ItemUpgrade_Row_ReqData_descriptor_ = Cfg_ItemUpgrade_Row_descriptor_->nested_type(0);
  static const int Cfg_ItemUpgrade_Row_ReqData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row_ReqData, req_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row_ReqData, req_num_),
  };
  Cfg_ItemUpgrade_Row_ReqData_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_ItemUpgrade_Row_ReqData_descriptor_,
      Cfg_ItemUpgrade_Row_ReqData::internal_default_instance(),
      Cfg_ItemUpgrade_Row_ReqData_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_ItemUpgrade_Row_ReqData),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_ItemUpgrade_Row_ReqData, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_config_2fCfg_5fItemUpgrade_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_ItemUpgrade_descriptor_, Cfg_ItemUpgrade::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_ItemUpgrade_Row_descriptor_, Cfg_ItemUpgrade_Row::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_ItemUpgrade_Row_ReqData_descriptor_, Cfg_ItemUpgrade_Row_ReqData::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_config_2fCfg_5fItemUpgrade_2eproto() {
  Cfg_ItemUpgrade_default_instance_.Shutdown();
  delete Cfg_ItemUpgrade_reflection_;
  Cfg_ItemUpgrade_Row_default_instance_.Shutdown();
  delete Cfg_ItemUpgrade_Row_reflection_;
  Cfg_ItemUpgrade_Row_ReqData_default_instance_.Shutdown();
  delete Cfg_ItemUpgrade_Row_ReqData_reflection_;
}

void protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Cfg_ItemUpgrade_default_instance_.DefaultConstruct();
  Cfg_ItemUpgrade_Row_default_instance_.DefaultConstruct();
  Cfg_ItemUpgrade_Row_ReqData_default_instance_.DefaultConstruct();
  Cfg_ItemUpgrade_default_instance_.get_mutable()->InitAsDefaultInstance();
  Cfg_ItemUpgrade_Row_default_instance_.get_mutable()->InitAsDefaultInstance();
  Cfg_ItemUpgrade_Row_ReqData_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto_once_);
void protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto_once_,
                 &protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto_impl);
}
void protobuf_AddDesc_config_2fCfg_5fItemUpgrade_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034config/Cfg_ItemUpgrade.proto\"\204\002\n\017Cfg_I"
    "temUpgrade\022\"\n\004rows\030\001 \003(\0132\024.Cfg_ItemUpgra"
    "de.Row\032\314\001\n\003Row\022\n\n\002id\030\001 \001(\r\022\014\n\004sort\030\002 \001(\r"
    "\022\025\n\rmain_itemtype\030\003 \001(\r\022\017\n\007lev_req\030\006 \001(\r"
    "\022\021\n\tsucc_rate\030\007 \001(\002\022\r\n\005rumor\030\010 \001(\r\0223\n\rre"
    "q_data_list\030\n \003(\0132\034.Cfg_ItemUpgrade.Row."
    "ReqData\032,\n\007ReqData\022\020\n\010req_type\030\001 \001(\r\022\017\n\007"
    "req_num\030\002 \001(\rB\002H\002b\006proto3", 305);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "config/Cfg_ItemUpgrade.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_config_2fCfg_5fItemUpgrade_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_config_2fCfg_5fItemUpgrade_2eproto_once_);
void protobuf_AddDesc_config_2fCfg_5fItemUpgrade_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_config_2fCfg_5fItemUpgrade_2eproto_once_,
                 &protobuf_AddDesc_config_2fCfg_5fItemUpgrade_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_config_2fCfg_5fItemUpgrade_2eproto {
  StaticDescriptorInitializer_config_2fCfg_5fItemUpgrade_2eproto() {
    protobuf_AddDesc_config_2fCfg_5fItemUpgrade_2eproto();
  }
} static_descriptor_initializer_config_2fCfg_5fItemUpgrade_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_ItemUpgrade_Row_ReqData::kReqTypeFieldNumber;
const int Cfg_ItemUpgrade_Row_ReqData::kReqNumFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_ItemUpgrade_Row_ReqData::Cfg_ItemUpgrade_Row_ReqData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_ItemUpgrade.Row.ReqData)
}

void Cfg_ItemUpgrade_Row_ReqData::InitAsDefaultInstance() {
}

Cfg_ItemUpgrade_Row_ReqData::Cfg_ItemUpgrade_Row_ReqData(const Cfg_ItemUpgrade_Row_ReqData& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_ItemUpgrade.Row.ReqData)
}

void Cfg_ItemUpgrade_Row_ReqData::SharedCtor() {
  ::memset(&req_type_, 0, reinterpret_cast<char*>(&req_num_) -
    reinterpret_cast<char*>(&req_type_) + sizeof(req_num_));
  _cached_size_ = 0;
}

Cfg_ItemUpgrade_Row_ReqData::~Cfg_ItemUpgrade_Row_ReqData() {
  // @@protoc_insertion_point(destructor:Cfg_ItemUpgrade.Row.ReqData)
  SharedDtor();
}

void Cfg_ItemUpgrade_Row_ReqData::SharedDtor() {
}

void Cfg_ItemUpgrade_Row_ReqData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_ItemUpgrade_Row_ReqData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_ItemUpgrade_Row_ReqData_descriptor_;
}

const Cfg_ItemUpgrade_Row_ReqData& Cfg_ItemUpgrade_Row_ReqData::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_ItemUpgrade_Row_ReqData> Cfg_ItemUpgrade_Row_ReqData_default_instance_;

Cfg_ItemUpgrade_Row_ReqData* Cfg_ItemUpgrade_Row_ReqData::New(::google::protobuf::Arena* arena) const {
  Cfg_ItemUpgrade_Row_ReqData* n = new Cfg_ItemUpgrade_Row_ReqData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_ItemUpgrade_Row_ReqData::UnsafeMergeFrom(const Cfg_ItemUpgrade_Row_ReqData& from) {
  MergeFrom(from);
}
void Cfg_ItemUpgrade_Row_ReqData::Swap(Cfg_ItemUpgrade_Row_ReqData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_ItemUpgrade_Row_ReqData::InternalSwap(Cfg_ItemUpgrade_Row_ReqData* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_ItemUpgrade_Row_ReqData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_ItemUpgrade_Row_ReqData_descriptor_;
  metadata.reflection = Cfg_ItemUpgrade_Row_ReqData_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_ItemUpgrade_Row::kIdFieldNumber;
const int Cfg_ItemUpgrade_Row::kSortFieldNumber;
const int Cfg_ItemUpgrade_Row::kMainItemtypeFieldNumber;
const int Cfg_ItemUpgrade_Row::kLevReqFieldNumber;
const int Cfg_ItemUpgrade_Row::kSuccRateFieldNumber;
const int Cfg_ItemUpgrade_Row::kRumorFieldNumber;
const int Cfg_ItemUpgrade_Row::kReqDataListFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_ItemUpgrade_Row::Cfg_ItemUpgrade_Row()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_ItemUpgrade.Row)
}

void Cfg_ItemUpgrade_Row::InitAsDefaultInstance() {
}

Cfg_ItemUpgrade_Row::Cfg_ItemUpgrade_Row(const Cfg_ItemUpgrade_Row& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_ItemUpgrade.Row)
}

void Cfg_ItemUpgrade_Row::SharedCtor() {
  ::memset(&id_, 0, reinterpret_cast<char*>(&rumor_) -
    reinterpret_cast<char*>(&id_) + sizeof(rumor_));
  _cached_size_ = 0;
}

Cfg_ItemUpgrade_Row::~Cfg_ItemUpgrade_Row() {
  // @@protoc_insertion_point(destructor:Cfg_ItemUpgrade.Row)
  SharedDtor();
}

void Cfg_ItemUpgrade_Row::SharedDtor() {
}

void Cfg_ItemUpgrade_Row::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_ItemUpgrade_Row::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_ItemUpgrade_Row_descriptor_;
}

const Cfg_ItemUpgrade_Row& Cfg_ItemUpgrade_Row::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_ItemUpgrade_Row> Cfg_ItemUpgrade_Row_default_instance_;

Cfg_ItemUpgrade_Row* Cfg_ItemUpgrade_Row::New(::google::protobuf::Arena* arena) const {
  Cfg_ItemUpgrade_Row* n = new Cfg_ItemUpgrade_Row;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_ItemUpgrade_Row::UnsafeMergeFrom(const Cfg_ItemUpgrade_Row& from) {
  MergeFrom(from);
}
void Cfg_ItemUpgrade_Row::Swap(Cfg_ItemUpgrade_Row* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_ItemUpgrade_Row::InternalSwap(Cfg_ItemUpgrade_Row* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_ItemUpgrade_Row::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_ItemUpgrade_Row_descriptor_;
  metadata.reflection = Cfg_ItemUpgrade_Row_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_ItemUpgrade::kRowsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_ItemUpgrade::Cfg_ItemUpgrade()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_ItemUpgrade)
}

void Cfg_ItemUpgrade::InitAsDefaultInstance() {
}

Cfg_ItemUpgrade::Cfg_ItemUpgrade(const Cfg_ItemUpgrade& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_ItemUpgrade)
}

void Cfg_ItemUpgrade::SharedCtor() {
  _cached_size_ = 0;
}

Cfg_ItemUpgrade::~Cfg_ItemUpgrade() {
  // @@protoc_insertion_point(destructor:Cfg_ItemUpgrade)
  SharedDtor();
}

void Cfg_ItemUpgrade::SharedDtor() {
}

void Cfg_ItemUpgrade::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_ItemUpgrade::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_ItemUpgrade_descriptor_;
}

const Cfg_ItemUpgrade& Cfg_ItemUpgrade::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fItemUpgrade_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_ItemUpgrade> Cfg_ItemUpgrade_default_instance_;

Cfg_ItemUpgrade* Cfg_ItemUpgrade::New(::google::protobuf::Arena* arena) const {
  Cfg_ItemUpgrade* n = new Cfg_ItemUpgrade;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_ItemUpgrade::UnsafeMergeFrom(const Cfg_ItemUpgrade& from) {
  MergeFrom(from);
}
void Cfg_ItemUpgrade::Swap(Cfg_ItemUpgrade* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_ItemUpgrade::InternalSwap(Cfg_ItemUpgrade* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_ItemUpgrade::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_ItemUpgrade_descriptor_;
  metadata.reflection = Cfg_ItemUpgrade_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Cfg_ItemUpgrade_Row_ReqData

// optional uint32 req_type = 1;
void Cfg_ItemUpgrade_Row_ReqData::clear_req_type() {
  req_type_ = 0u;
}
::google::protobuf::uint32 Cfg_ItemUpgrade_Row_ReqData::req_type() const {
  // @@protoc_insertion_point(field_get:Cfg_ItemUpgrade.Row.ReqData.req_type)
  return req_type_;
}
void Cfg_ItemUpgrade_Row_ReqData::set_req_type(::google::protobuf::uint32 value) {
  
  req_type_ = value;
  // @@protoc_insertion_point(field_set:Cfg_ItemUpgrade.Row.ReqData.req_type)
}

// optional uint32 req_num = 2;
void Cfg_ItemUpgrade_Row_ReqData::clear_req_num() {
  req_num_ = 0u;
}
::google::protobuf::uint32 Cfg_ItemUpgrade_Row_ReqData::req_num() const {
  // @@protoc_insertion_point(field_get:Cfg_ItemUpgrade.Row.ReqData.req_num)
  return req_num_;
}
void Cfg_ItemUpgrade_Row_ReqData::set_req_num(::google::protobuf::uint32 value) {
  
  req_num_ = value;
  // @@protoc_insertion_point(field_set:Cfg_ItemUpgrade.Row.ReqData.req_num)
}

inline const Cfg_ItemUpgrade_Row_ReqData* Cfg_ItemUpgrade_Row_ReqData::internal_default_instance() {
  return &Cfg_ItemUpgrade_Row_ReqData_default_instance_.get();
}
// -------------------------------------------------------------------

// Cfg_ItemUpgrade_Row

// optional uint32 id = 1;
void Cfg_ItemUpgrade_Row::clear_id() {
  id_ = 0u;
}
::google::protobuf::uint32 Cfg_ItemUpgrade_Row::id() const {
  // @@protoc_insertion_point(field_get:Cfg_ItemUpgrade.Row.id)
  return id_;
}
void Cfg_ItemUpgrade_Row::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Cfg_ItemUpgrade.Row.id)
}

// optional uint32 sort = 2;
void Cfg_ItemUpgrade_Row::clear_sort() {
  sort_ = 0u;
}
::google::protobuf::uint32 Cfg_ItemUpgrade_Row::sort() const {
  // @@protoc_insertion_point(field_get:Cfg_ItemUpgrade.Row.sort)
  return sort_;
}
void Cfg_ItemUpgrade_Row::set_sort(::google::protobuf::uint32 value) {
  
  sort_ = value;
  // @@protoc_insertion_point(field_set:Cfg_ItemUpgrade.Row.sort)
}

// optional uint32 main_itemtype = 3;
void Cfg_ItemUpgrade_Row::clear_main_itemtype() {
  main_itemtype_ = 0u;
}
::google::protobuf::uint32 Cfg_ItemUpgrade_Row::main_itemtype() const {
  // @@protoc_insertion_point(field_get:Cfg_ItemUpgrade.Row.main_itemtype)
  return main_itemtype_;
}
void Cfg_ItemUpgrade_Row::set_main_itemtype(::google::protobuf::uint32 value) {
  
  main_itemtype_ = value;
  // @@protoc_insertion_point(field_set:Cfg_ItemUpgrade.Row.main_itemtype)
}

// optional uint32 lev_req = 6;
void Cfg_ItemUpgrade_Row::clear_lev_req() {
  lev_req_ = 0u;
}
::google::protobuf::uint32 Cfg_ItemUpgrade_Row::lev_req() const {
  // @@protoc_insertion_point(field_get:Cfg_ItemUpgrade.Row.lev_req)
  return lev_req_;
}
void Cfg_ItemUpgrade_Row::set_lev_req(::google::protobuf::uint32 value) {
  
  lev_req_ = value;
  // @@protoc_insertion_point(field_set:Cfg_ItemUpgrade.Row.lev_req)
}

// optional float succ_rate = 7;
void Cfg_ItemUpgrade_Row::clear_succ_rate() {
  succ_rate_ = 0;
}
float Cfg_ItemUpgrade_Row::succ_rate() const {
  // @@protoc_insertion_point(field_get:Cfg_ItemUpgrade.Row.succ_rate)
  return succ_rate_;
}
void Cfg_ItemUpgrade_Row::set_succ_rate(float value) {
  
  succ_rate_ = value;
  // @@protoc_insertion_point(field_set:Cfg_ItemUpgrade.Row.succ_rate)
}

// optional uint32 rumor = 8;
void Cfg_ItemUpgrade_Row::clear_rumor() {
  rumor_ = 0u;
}
::google::protobuf::uint32 Cfg_ItemUpgrade_Row::rumor() const {
  // @@protoc_insertion_point(field_get:Cfg_ItemUpgrade.Row.rumor)
  return rumor_;
}
void Cfg_ItemUpgrade_Row::set_rumor(::google::protobuf::uint32 value) {
  
  rumor_ = value;
  // @@protoc_insertion_point(field_set:Cfg_ItemUpgrade.Row.rumor)
}

// repeated .Cfg_ItemUpgrade.Row.ReqData req_data_list = 10;
int Cfg_ItemUpgrade_Row::req_data_list_size() const {
  return req_data_list_.size();
}
void Cfg_ItemUpgrade_Row::clear_req_data_list() {
  req_data_list_.Clear();
}
const ::Cfg_ItemUpgrade_Row_ReqData& Cfg_ItemUpgrade_Row::req_data_list(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_ItemUpgrade.Row.req_data_list)
  return req_data_list_.Get(index);
}
::Cfg_ItemUpgrade_Row_ReqData* Cfg_ItemUpgrade_Row::mutable_req_data_list(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_ItemUpgrade.Row.req_data_list)
  return req_data_list_.Mutable(index);
}
::Cfg_ItemUpgrade_Row_ReqData* Cfg_ItemUpgrade_Row::add_req_data_list() {
  // @@protoc_insertion_point(field_add:Cfg_ItemUpgrade.Row.req_data_list)
  return req_data_list_.Add();
}
::google::protobuf::RepeatedPtrField< ::Cfg_ItemUpgrade_Row_ReqData >*
Cfg_ItemUpgrade_Row::mutable_req_data_list() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_ItemUpgrade.Row.req_data_list)
  return &req_data_list_;
}
const ::google::protobuf::RepeatedPtrField< ::Cfg_ItemUpgrade_Row_ReqData >&
Cfg_ItemUpgrade_Row::req_data_list() const {
  // @@protoc_insertion_point(field_list:Cfg_ItemUpgrade.Row.req_data_list)
  return req_data_list_;
}

inline const Cfg_ItemUpgrade_Row* Cfg_ItemUpgrade_Row::internal_default_instance() {
  return &Cfg_ItemUpgrade_Row_default_instance_.get();
}
// -------------------------------------------------------------------

// Cfg_ItemUpgrade

// repeated .Cfg_ItemUpgrade.Row rows = 1;
int Cfg_ItemUpgrade::rows_size() const {
  return rows_.size();
}
void Cfg_ItemUpgrade::clear_rows() {
  rows_.Clear();
}
const ::Cfg_ItemUpgrade_Row& Cfg_ItemUpgrade::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_ItemUpgrade.rows)
  return rows_.Get(index);
}
::Cfg_ItemUpgrade_Row* Cfg_ItemUpgrade::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_ItemUpgrade.rows)
  return rows_.Mutable(index);
}
::Cfg_ItemUpgrade_Row* Cfg_ItemUpgrade::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_ItemUpgrade.rows)
  return rows_.Add();
}
::google::protobuf::RepeatedPtrField< ::Cfg_ItemUpgrade_Row >*
Cfg_ItemUpgrade::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_ItemUpgrade.rows)
  return &rows_;
}
const ::google::protobuf::RepeatedPtrField< ::Cfg_ItemUpgrade_Row >&
Cfg_ItemUpgrade::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_ItemUpgrade.rows)
  return rows_;
}

inline const Cfg_ItemUpgrade* Cfg_ItemUpgrade::internal_default_instance() {
  return &Cfg_ItemUpgrade_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)