// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_SkillDetachStatus.proto

#ifndef PROTOBUF_config_2fCfg_5fSkillDetachStatus_2eproto__INCLUDED
#define PROTOBUF_config_2fCfg_5fSkillDetachStatus_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_config_2fCfg_5fSkillDetachStatus_2eproto();
void protobuf_InitDefaults_config_2fCfg_5fSkillDetachStatus_2eproto();
void protobuf_AssignDesc_config_2fCfg_5fSkillDetachStatus_2eproto();
void protobuf_ShutdownFile_config_2fCfg_5fSkillDetachStatus_2eproto();

class Cfg_SkillDetachStatus;
class Cfg_SkillDetachStatus_Row;

// ===================================================================

class Cfg_SkillDetachStatus_Row : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Cfg_SkillDetachStatus.Row) */ {
 public:
  Cfg_SkillDetachStatus_Row();
  virtual ~Cfg_SkillDetachStatus_Row();

  Cfg_SkillDetachStatus_Row(const Cfg_SkillDetachStatus_Row& from);

  inline Cfg_SkillDetachStatus_Row& operator=(const Cfg_SkillDetachStatus_Row& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Cfg_SkillDetachStatus_Row& default_instance();

  static const Cfg_SkillDetachStatus_Row* internal_default_instance();

  void Swap(Cfg_SkillDetachStatus_Row* other);

  // implements Message ----------------------------------------------

  inline Cfg_SkillDetachStatus_Row* New() const { return New(NULL); }

  Cfg_SkillDetachStatus_Row* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Cfg_SkillDetachStatus_Row* other);
  void UnsafeMergeFrom(const Cfg_SkillDetachStatus_Row& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // optional uint32 idskill = 2;
  void clear_idskill();
  static const int kIdskillFieldNumber = 2;
  ::google::protobuf::uint32 idskill() const;
  void set_idskill(::google::protobuf::uint32 value);

  // optional uint32 status_id = 3;
  void clear_status_id();
  static const int kStatusIdFieldNumber = 3;
  ::google::protobuf::uint32 status_id() const;
  void set_status_id(::google::protobuf::uint32 value);

  // optional uint32 status_type = 4;
  void clear_status_type();
  static const int kStatusTypeFieldNumber = 4;
  ::google::protobuf::uint32 status_type() const;
  void set_status_type(::google::protobuf::uint32 value);

  // optional uint32 status_flag = 5;
  void clear_status_flag();
  static const int kStatusFlagFieldNumber = 5;
  ::google::protobuf::uint32 status_flag() const;
  void set_status_flag(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:Cfg_SkillDetachStatus.Row)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 idskill_;
  ::google::protobuf::uint32 status_id_;
  ::google::protobuf::uint32 status_type_;
  ::google::protobuf::uint32 status_flag_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_config_2fCfg_5fSkillDetachStatus_2eproto_impl();
  friend void  protobuf_AddDesc_config_2fCfg_5fSkillDetachStatus_2eproto_impl();
  friend void protobuf_AssignDesc_config_2fCfg_5fSkillDetachStatus_2eproto();
  friend void protobuf_ShutdownFile_config_2fCfg_5fSkillDetachStatus_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Cfg_SkillDetachStatus_Row> Cfg_SkillDetachStatus_Row_default_instance_;

// -------------------------------------------------------------------

class Cfg_SkillDetachStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Cfg_SkillDetachStatus) */ {
 public:
  Cfg_SkillDetachStatus();
  virtual ~Cfg_SkillDetachStatus();

  Cfg_SkillDetachStatus(const Cfg_SkillDetachStatus& from);

  inline Cfg_SkillDetachStatus& operator=(const Cfg_SkillDetachStatus& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Cfg_SkillDetachStatus& default_instance();

  static const Cfg_SkillDetachStatus* internal_default_instance();

  void Swap(Cfg_SkillDetachStatus* other);

  // implements Message ----------------------------------------------

  inline Cfg_SkillDetachStatus* New() const { return New(NULL); }

  Cfg_SkillDetachStatus* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Cfg_SkillDetachStatus* other);
  void UnsafeMergeFrom(const Cfg_SkillDetachStatus& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Cfg_SkillDetachStatus_Row Row;

  // accessors -------------------------------------------------------

  // repeated .Cfg_SkillDetachStatus.Row rows = 1;
  int rows_size() const;
  void clear_rows();
  static const int kRowsFieldNumber = 1;
  const ::Cfg_SkillDetachStatus_Row& rows(int index) const;
  ::Cfg_SkillDetachStatus_Row* mutable_rows(int index);
  ::Cfg_SkillDetachStatus_Row* add_rows();
  ::google::protobuf::RepeatedPtrField< ::Cfg_SkillDetachStatus_Row >*
      mutable_rows();
  const ::google::protobuf::RepeatedPtrField< ::Cfg_SkillDetachStatus_Row >&
      rows() const;

  // @@protoc_insertion_point(class_scope:Cfg_SkillDetachStatus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::Cfg_SkillDetachStatus_Row > rows_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_config_2fCfg_5fSkillDetachStatus_2eproto_impl();
  friend void  protobuf_AddDesc_config_2fCfg_5fSkillDetachStatus_2eproto_impl();
  friend void protobuf_AssignDesc_config_2fCfg_5fSkillDetachStatus_2eproto();
  friend void protobuf_ShutdownFile_config_2fCfg_5fSkillDetachStatus_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Cfg_SkillDetachStatus> Cfg_SkillDetachStatus_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Cfg_SkillDetachStatus_Row

// optional uint32 id = 1;
inline void Cfg_SkillDetachStatus_Row::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_SkillDetachStatus_Row::id() const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.Row.id)
  return id_;
}
inline void Cfg_SkillDetachStatus_Row::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Cfg_SkillDetachStatus.Row.id)
}

// optional uint32 idskill = 2;
inline void Cfg_SkillDetachStatus_Row::clear_idskill() {
  idskill_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_SkillDetachStatus_Row::idskill() const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.Row.idskill)
  return idskill_;
}
inline void Cfg_SkillDetachStatus_Row::set_idskill(::google::protobuf::uint32 value) {
  
  idskill_ = value;
  // @@protoc_insertion_point(field_set:Cfg_SkillDetachStatus.Row.idskill)
}

// optional uint32 status_id = 3;
inline void Cfg_SkillDetachStatus_Row::clear_status_id() {
  status_id_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_SkillDetachStatus_Row::status_id() const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.Row.status_id)
  return status_id_;
}
inline void Cfg_SkillDetachStatus_Row::set_status_id(::google::protobuf::uint32 value) {
  
  status_id_ = value;
  // @@protoc_insertion_point(field_set:Cfg_SkillDetachStatus.Row.status_id)
}

// optional uint32 status_type = 4;
inline void Cfg_SkillDetachStatus_Row::clear_status_type() {
  status_type_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_SkillDetachStatus_Row::status_type() const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.Row.status_type)
  return status_type_;
}
inline void Cfg_SkillDetachStatus_Row::set_status_type(::google::protobuf::uint32 value) {
  
  status_type_ = value;
  // @@protoc_insertion_point(field_set:Cfg_SkillDetachStatus.Row.status_type)
}

// optional uint32 status_flag = 5;
inline void Cfg_SkillDetachStatus_Row::clear_status_flag() {
  status_flag_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_SkillDetachStatus_Row::status_flag() const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.Row.status_flag)
  return status_flag_;
}
inline void Cfg_SkillDetachStatus_Row::set_status_flag(::google::protobuf::uint32 value) {
  
  status_flag_ = value;
  // @@protoc_insertion_point(field_set:Cfg_SkillDetachStatus.Row.status_flag)
}

inline const Cfg_SkillDetachStatus_Row* Cfg_SkillDetachStatus_Row::internal_default_instance() {
  return &Cfg_SkillDetachStatus_Row_default_instance_.get();
}
// -------------------------------------------------------------------

// Cfg_SkillDetachStatus

// repeated .Cfg_SkillDetachStatus.Row rows = 1;
inline int Cfg_SkillDetachStatus::rows_size() const {
  return rows_.size();
}
inline void Cfg_SkillDetachStatus::clear_rows() {
  rows_.Clear();
}
inline const ::Cfg_SkillDetachStatus_Row& Cfg_SkillDetachStatus::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_SkillDetachStatus.rows)
  return rows_.Get(index);
}
inline ::Cfg_SkillDetachStatus_Row* Cfg_SkillDetachStatus::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_SkillDetachStatus.rows)
  return rows_.Mutable(index);
}
inline ::Cfg_SkillDetachStatus_Row* Cfg_SkillDetachStatus::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_SkillDetachStatus.rows)
  return rows_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Cfg_SkillDetachStatus_Row >*
Cfg_SkillDetachStatus::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_SkillDetachStatus.rows)
  return &rows_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Cfg_SkillDetachStatus_Row >&
Cfg_SkillDetachStatus::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_SkillDetachStatus.rows)
  return rows_;
}

inline const Cfg_SkillDetachStatus* Cfg_SkillDetachStatus::internal_default_instance() {
  return &Cfg_SkillDetachStatus_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_config_2fCfg_5fSkillDetachStatus_2eproto__INCLUDED