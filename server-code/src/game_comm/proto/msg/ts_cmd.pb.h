// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg/ts_cmd.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_msg_2fts_5fcmd_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_msg_2fts_5fcmd_2eproto

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_msg_2fts_5fcmd_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_msg_2fts_5fcmd_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_msg_2fts_5fcmd_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

enum TS_CMD : int {
  CMD_BEGIN = 0,
  CMD_SC_KEY = 1,
  CMD_PING = 2,
  CMD_PONG = 3,
  CMD_CS_LOGIN = 10,
  CMD_SC_LOGIN = 11,
  CMD_SC_ACTORINFOLIST = 12,
  CMD_SC_WAITINFO = 13,
  CMD_CS_CREATEACTOR = 14,
  CMD_SC_CREATEACTOR = 15,
  CMD_CS_SELECTACTOR = 16,
  CMD_SC_SELECTACTOR = 17,
  CMD_SC_LOADMAP = 100,
  CMD_CS_LOADMAP_SUCC = 101,
  CMD_SC_ENTERMAP = 102,
  CMD_SC_PLAYERINFO = 103,
  CMD_SC_ACTORATTRIB = 104,
  CMD_SC_COMMONDATA = 105,
  CMD_SC_DATACOUNT = 106,
  CMD_SC_SYSVAR = 107,
  CMD_SC_COOLDOWN = 108,
  CMD_SC_AOI_NEW = 120,
  CMD_SC_AOI_REMOVE = 121,
  CMD_SC_AOI_UPDATE = 122,
  CMD_CS_MOVE = 123,
  CMD_CS_CHANGEMAP = 124,
  CMD_CS_CASTSKILL = 130,
  CMD_SC_CASTSKILL = 131,
  CMD_CS_SKILL_BREAK = 132,
  CMD_SC_SKILL_BREAK = 133,
  CMD_CS_SKILL_CHGTARGETPOS = 134,
  CMD_SC_SKILL_DAMAGE = 135,
  CMD_SC_SKILL_STUN = 136,
  CMD_SC_SKILL_EFFACT = 137,
  CMD_SC_DAMAGE = 138,
  CMD_SC_DEAD = 139,
  CMD_SC_ATTRIB_CHANGE = 140,
  CMD_CS_CHANGE_PKMODE = 141,
  CMD_SC_CHANGE_PKMODE = 142,
  CMD_CS_REBORN = 143,
  CMD_SC_STATUS_LIST = 150,
  CMD_SC_STATUS_INFO = 151,
  CMD_SC_STATUS_ACTION = 152,
  CMD_SC_ITEM_DELETE = 160,
  CMD_SC_ITEM_INFO = 161,
  CMD_SC_ITEM_CHANGE = 162,
  CMD_CS_ITEM_SWAP = 163,
  CMD_CS_ITEM_SPLIT = 164,
  CMD_CS_ITEM_COMBINE = 165,
  CMD_CS_ITEM_TIDY = 166,
  CMD_CS_ITEM_USE = 167,
  CMD_CS_ITEM_STORAGE_OPEN = 170,
  CMD_CS_ITEM_STORAGE_CHECKIN = 171,
  CMD_CS_ITEM_STORAGE_CHECKOUT = 172,
  CMD_CS_EQUIP = 180,
  CMD_CS_UNEQUIP = 181,
  CMD_CS_TALK = 190,
  CMD_SC_TALK = 191,
  CMD_SC_TASK_INFO = 200,
  CMD_SC_TASK_DATA = 201,
  CMD_CS_TASK_SUBMIT = 202,
  CMD_CS_ACTIVE_NPC = 205,
  CMD_SC_DIALOG = 206,
  CMD_CS_DIALOG_CLICK = 207,
  CMD_SC_ACHI_INFO = 210,
  CMD_CS_ACHI_TAKE = 211,
  CMD_SC_TEAMMEMBER_INFO = 213,
  CMD_SC_TEAMMEMBER_ACTION = 214,
  CMD_CS_TEAMCREATE = 215,
  CMD_CS_TEAMQUIT = 216,
  CMD_CS_TEAMKICKMEMBER = 217,
  CMD_CS_TEAMINVITEMEMBER = 218,
  CMD_SC_TEAMINVITEMEMBER = 219,
  CMD_CS_TEAMACCEPTINVITE = 220,
  CMD_CS_TEAMNEWLEADER = 221,
  CMD_CS_TEAMAPPLYMEMBER = 222,
  CMD_SC_TEAMAPPLYMEMBER = 223,
  CMD_CS_TEAMACCEPTAPPLY = 224,
  CMD_CLOSE = 10000,
  TS_CMD_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  TS_CMD_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool TS_CMD_IsValid(int value);
constexpr TS_CMD TS_CMD_MIN = CMD_BEGIN;
constexpr TS_CMD TS_CMD_MAX = CMD_CLOSE;
constexpr int TS_CMD_ARRAYSIZE = TS_CMD_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TS_CMD_descriptor();
template<typename T>
inline const std::string& TS_CMD_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TS_CMD>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TS_CMD_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TS_CMD_descriptor(), enum_t_value);
}
inline bool TS_CMD_Parse(
    const std::string& name, TS_CMD* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TS_CMD>(
    TS_CMD_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::TS_CMD> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TS_CMD>() {
  return ::TS_CMD_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_msg_2fts_5fcmd_2eproto