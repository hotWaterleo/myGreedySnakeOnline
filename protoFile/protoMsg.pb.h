// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protoFile/protoMsg.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protoFile_2fprotoMsg_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protoFile_2fprotoMsg_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015006 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protoFile_2fprotoMsg_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protoFile_2fprotoMsg_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protoFile_2fprotoMsg_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_protoFile_2fprotoMsg_2eproto_metadata_getter(int index);
namespace myProto {
class FrameMsg;
struct FrameMsgDefaultTypeInternal;
extern FrameMsgDefaultTypeInternal _FrameMsg_default_instance_;
class Pixel;
struct PixelDefaultTypeInternal;
extern PixelDefaultTypeInternal _Pixel_default_instance_;
class StrMsg;
struct StrMsgDefaultTypeInternal;
extern StrMsgDefaultTypeInternal _StrMsg_default_instance_;
}  // namespace myProto
PROTOBUF_NAMESPACE_OPEN
template<> ::myProto::FrameMsg* Arena::CreateMaybeMessage<::myProto::FrameMsg>(Arena*);
template<> ::myProto::Pixel* Arena::CreateMaybeMessage<::myProto::Pixel>(Arena*);
template<> ::myProto::StrMsg* Arena::CreateMaybeMessage<::myProto::StrMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace myProto {

// ===================================================================

class Pixel PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:myProto.Pixel) */ {
 public:
  inline Pixel() : Pixel(nullptr) {}
  virtual ~Pixel();
  explicit constexpr Pixel(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Pixel(const Pixel& from);
  Pixel(Pixel&& from) noexcept
    : Pixel() {
    *this = ::std::move(from);
  }

  inline Pixel& operator=(const Pixel& from) {
    CopyFrom(from);
    return *this;
  }
  inline Pixel& operator=(Pixel&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Pixel& default_instance() {
    return *internal_default_instance();
  }
  static inline const Pixel* internal_default_instance() {
    return reinterpret_cast<const Pixel*>(
               &_Pixel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Pixel& a, Pixel& b) {
    a.Swap(&b);
  }
  inline void Swap(Pixel* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Pixel* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Pixel* New() const final {
    return CreateMaybeMessage<Pixel>(nullptr);
  }

  Pixel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Pixel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Pixel& from);
  void MergeFrom(const Pixel& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Pixel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "myProto.Pixel";
  }
  protected:
  explicit Pixel(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protoFile_2fprotoMsg_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSymbolFieldNumber = 1,
    kXLocFieldNumber = 2,
    kYLocFieldNumber = 3,
  };
  // required int32 symbol = 1;
  bool has_symbol() const;
  private:
  bool _internal_has_symbol() const;
  public:
  void clear_symbol();
  ::PROTOBUF_NAMESPACE_ID::int32 symbol() const;
  void set_symbol(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_symbol() const;
  void _internal_set_symbol(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 x_loc = 2;
  bool has_x_loc() const;
  private:
  bool _internal_has_x_loc() const;
  public:
  void clear_x_loc();
  ::PROTOBUF_NAMESPACE_ID::int32 x_loc() const;
  void set_x_loc(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_x_loc() const;
  void _internal_set_x_loc(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 y_loc = 3;
  bool has_y_loc() const;
  private:
  bool _internal_has_y_loc() const;
  public:
  void clear_y_loc();
  ::PROTOBUF_NAMESPACE_ID::int32 y_loc() const;
  void set_y_loc(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_y_loc() const;
  void _internal_set_y_loc(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:myProto.Pixel)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 symbol_;
  ::PROTOBUF_NAMESPACE_ID::int32 x_loc_;
  ::PROTOBUF_NAMESPACE_ID::int32 y_loc_;
  friend struct ::TableStruct_protoFile_2fprotoMsg_2eproto;
};
// -------------------------------------------------------------------

class StrMsg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:myProto.StrMsg) */ {
 public:
  inline StrMsg() : StrMsg(nullptr) {}
  virtual ~StrMsg();
  explicit constexpr StrMsg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StrMsg(const StrMsg& from);
  StrMsg(StrMsg&& from) noexcept
    : StrMsg() {
    *this = ::std::move(from);
  }

  inline StrMsg& operator=(const StrMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline StrMsg& operator=(StrMsg&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const StrMsg& default_instance() {
    return *internal_default_instance();
  }
  static inline const StrMsg* internal_default_instance() {
    return reinterpret_cast<const StrMsg*>(
               &_StrMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StrMsg& a, StrMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(StrMsg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StrMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StrMsg* New() const final {
    return CreateMaybeMessage<StrMsg>(nullptr);
  }

  StrMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StrMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StrMsg& from);
  void MergeFrom(const StrMsg& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StrMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "myProto.StrMsg";
  }
  protected:
  explicit StrMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protoFile_2fprotoMsg_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMainMsgFieldNumber = 1,
    kHintMsgFieldNumber = 2,
  };
  // required string main_msg = 1;
  bool has_main_msg() const;
  private:
  bool _internal_has_main_msg() const;
  public:
  void clear_main_msg();
  const std::string& main_msg() const;
  void set_main_msg(const std::string& value);
  void set_main_msg(std::string&& value);
  void set_main_msg(const char* value);
  void set_main_msg(const char* value, size_t size);
  std::string* mutable_main_msg();
  std::string* release_main_msg();
  void set_allocated_main_msg(std::string* main_msg);
  private:
  const std::string& _internal_main_msg() const;
  void _internal_set_main_msg(const std::string& value);
  std::string* _internal_mutable_main_msg();
  public:

  // optional string hint_msg = 2;
  bool has_hint_msg() const;
  private:
  bool _internal_has_hint_msg() const;
  public:
  void clear_hint_msg();
  const std::string& hint_msg() const;
  void set_hint_msg(const std::string& value);
  void set_hint_msg(std::string&& value);
  void set_hint_msg(const char* value);
  void set_hint_msg(const char* value, size_t size);
  std::string* mutable_hint_msg();
  std::string* release_hint_msg();
  void set_allocated_hint_msg(std::string* hint_msg);
  private:
  const std::string& _internal_hint_msg() const;
  void _internal_set_hint_msg(const std::string& value);
  std::string* _internal_mutable_hint_msg();
  public:

  // @@protoc_insertion_point(class_scope:myProto.StrMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr main_msg_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr hint_msg_;
  friend struct ::TableStruct_protoFile_2fprotoMsg_2eproto;
};
// -------------------------------------------------------------------

class FrameMsg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:myProto.FrameMsg) */ {
 public:
  inline FrameMsg() : FrameMsg(nullptr) {}
  virtual ~FrameMsg();
  explicit constexpr FrameMsg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FrameMsg(const FrameMsg& from);
  FrameMsg(FrameMsg&& from) noexcept
    : FrameMsg() {
    *this = ::std::move(from);
  }

  inline FrameMsg& operator=(const FrameMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline FrameMsg& operator=(FrameMsg&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const FrameMsg& default_instance() {
    return *internal_default_instance();
  }
  static inline const FrameMsg* internal_default_instance() {
    return reinterpret_cast<const FrameMsg*>(
               &_FrameMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(FrameMsg& a, FrameMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(FrameMsg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FrameMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FrameMsg* New() const final {
    return CreateMaybeMessage<FrameMsg>(nullptr);
  }

  FrameMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FrameMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FrameMsg& from);
  void MergeFrom(const FrameMsg& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FrameMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "myProto.FrameMsg";
  }
  protected:
  explicit FrameMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protoFile_2fprotoMsg_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPixelsFieldNumber = 1,
    kHintMsgFieldNumber = 2,
  };
  // repeated .myProto.Pixel pixels = 1;
  int pixels_size() const;
  private:
  int _internal_pixels_size() const;
  public:
  void clear_pixels();
  ::myProto::Pixel* mutable_pixels(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::myProto::Pixel >*
      mutable_pixels();
  private:
  const ::myProto::Pixel& _internal_pixels(int index) const;
  ::myProto::Pixel* _internal_add_pixels();
  public:
  const ::myProto::Pixel& pixels(int index) const;
  ::myProto::Pixel* add_pixels();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::myProto::Pixel >&
      pixels() const;

  // optional string hint_msg = 2;
  bool has_hint_msg() const;
  private:
  bool _internal_has_hint_msg() const;
  public:
  void clear_hint_msg();
  const std::string& hint_msg() const;
  void set_hint_msg(const std::string& value);
  void set_hint_msg(std::string&& value);
  void set_hint_msg(const char* value);
  void set_hint_msg(const char* value, size_t size);
  std::string* mutable_hint_msg();
  std::string* release_hint_msg();
  void set_allocated_hint_msg(std::string* hint_msg);
  private:
  const std::string& _internal_hint_msg() const;
  void _internal_set_hint_msg(const std::string& value);
  std::string* _internal_mutable_hint_msg();
  public:

  // @@protoc_insertion_point(class_scope:myProto.FrameMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::myProto::Pixel > pixels_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr hint_msg_;
  friend struct ::TableStruct_protoFile_2fprotoMsg_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Pixel

// required int32 symbol = 1;
inline bool Pixel::_internal_has_symbol() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Pixel::has_symbol() const {
  return _internal_has_symbol();
}
inline void Pixel::clear_symbol() {
  symbol_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Pixel::_internal_symbol() const {
  return symbol_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Pixel::symbol() const {
  // @@protoc_insertion_point(field_get:myProto.Pixel.symbol)
  return _internal_symbol();
}
inline void Pixel::_internal_set_symbol(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  symbol_ = value;
}
inline void Pixel::set_symbol(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_symbol(value);
  // @@protoc_insertion_point(field_set:myProto.Pixel.symbol)
}

// required int32 x_loc = 2;
inline bool Pixel::_internal_has_x_loc() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Pixel::has_x_loc() const {
  return _internal_has_x_loc();
}
inline void Pixel::clear_x_loc() {
  x_loc_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Pixel::_internal_x_loc() const {
  return x_loc_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Pixel::x_loc() const {
  // @@protoc_insertion_point(field_get:myProto.Pixel.x_loc)
  return _internal_x_loc();
}
inline void Pixel::_internal_set_x_loc(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  x_loc_ = value;
}
inline void Pixel::set_x_loc(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_x_loc(value);
  // @@protoc_insertion_point(field_set:myProto.Pixel.x_loc)
}

// required int32 y_loc = 3;
inline bool Pixel::_internal_has_y_loc() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Pixel::has_y_loc() const {
  return _internal_has_y_loc();
}
inline void Pixel::clear_y_loc() {
  y_loc_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Pixel::_internal_y_loc() const {
  return y_loc_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Pixel::y_loc() const {
  // @@protoc_insertion_point(field_get:myProto.Pixel.y_loc)
  return _internal_y_loc();
}
inline void Pixel::_internal_set_y_loc(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  y_loc_ = value;
}
inline void Pixel::set_y_loc(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_y_loc(value);
  // @@protoc_insertion_point(field_set:myProto.Pixel.y_loc)
}

// -------------------------------------------------------------------

// StrMsg

// required string main_msg = 1;
inline bool StrMsg::_internal_has_main_msg() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool StrMsg::has_main_msg() const {
  return _internal_has_main_msg();
}
inline void StrMsg::clear_main_msg() {
  main_msg_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& StrMsg::main_msg() const {
  // @@protoc_insertion_point(field_get:myProto.StrMsg.main_msg)
  return _internal_main_msg();
}
inline void StrMsg::set_main_msg(const std::string& value) {
  _internal_set_main_msg(value);
  // @@protoc_insertion_point(field_set:myProto.StrMsg.main_msg)
}
inline std::string* StrMsg::mutable_main_msg() {
  // @@protoc_insertion_point(field_mutable:myProto.StrMsg.main_msg)
  return _internal_mutable_main_msg();
}
inline const std::string& StrMsg::_internal_main_msg() const {
  return main_msg_.Get();
}
inline void StrMsg::_internal_set_main_msg(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  main_msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void StrMsg::set_main_msg(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  main_msg_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:myProto.StrMsg.main_msg)
}
inline void StrMsg::set_main_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  main_msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:myProto.StrMsg.main_msg)
}
inline void StrMsg::set_main_msg(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  main_msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:myProto.StrMsg.main_msg)
}
inline std::string* StrMsg::_internal_mutable_main_msg() {
  _has_bits_[0] |= 0x00000001u;
  return main_msg_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* StrMsg::release_main_msg() {
  // @@protoc_insertion_point(field_release:myProto.StrMsg.main_msg)
  if (!_internal_has_main_msg()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return main_msg_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void StrMsg::set_allocated_main_msg(std::string* main_msg) {
  if (main_msg != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  main_msg_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), main_msg,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:myProto.StrMsg.main_msg)
}

// optional string hint_msg = 2;
inline bool StrMsg::_internal_has_hint_msg() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool StrMsg::has_hint_msg() const {
  return _internal_has_hint_msg();
}
inline void StrMsg::clear_hint_msg() {
  hint_msg_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& StrMsg::hint_msg() const {
  // @@protoc_insertion_point(field_get:myProto.StrMsg.hint_msg)
  return _internal_hint_msg();
}
inline void StrMsg::set_hint_msg(const std::string& value) {
  _internal_set_hint_msg(value);
  // @@protoc_insertion_point(field_set:myProto.StrMsg.hint_msg)
}
inline std::string* StrMsg::mutable_hint_msg() {
  // @@protoc_insertion_point(field_mutable:myProto.StrMsg.hint_msg)
  return _internal_mutable_hint_msg();
}
inline const std::string& StrMsg::_internal_hint_msg() const {
  return hint_msg_.Get();
}
inline void StrMsg::_internal_set_hint_msg(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  hint_msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void StrMsg::set_hint_msg(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  hint_msg_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:myProto.StrMsg.hint_msg)
}
inline void StrMsg::set_hint_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  hint_msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:myProto.StrMsg.hint_msg)
}
inline void StrMsg::set_hint_msg(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000002u;
  hint_msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:myProto.StrMsg.hint_msg)
}
inline std::string* StrMsg::_internal_mutable_hint_msg() {
  _has_bits_[0] |= 0x00000002u;
  return hint_msg_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* StrMsg::release_hint_msg() {
  // @@protoc_insertion_point(field_release:myProto.StrMsg.hint_msg)
  if (!_internal_has_hint_msg()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return hint_msg_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void StrMsg::set_allocated_hint_msg(std::string* hint_msg) {
  if (hint_msg != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  hint_msg_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), hint_msg,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:myProto.StrMsg.hint_msg)
}

// -------------------------------------------------------------------

// FrameMsg

// repeated .myProto.Pixel pixels = 1;
inline int FrameMsg::_internal_pixels_size() const {
  return pixels_.size();
}
inline int FrameMsg::pixels_size() const {
  return _internal_pixels_size();
}
inline void FrameMsg::clear_pixels() {
  pixels_.Clear();
}
inline ::myProto::Pixel* FrameMsg::mutable_pixels(int index) {
  // @@protoc_insertion_point(field_mutable:myProto.FrameMsg.pixels)
  return pixels_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::myProto::Pixel >*
FrameMsg::mutable_pixels() {
  // @@protoc_insertion_point(field_mutable_list:myProto.FrameMsg.pixels)
  return &pixels_;
}
inline const ::myProto::Pixel& FrameMsg::_internal_pixels(int index) const {
  return pixels_.Get(index);
}
inline const ::myProto::Pixel& FrameMsg::pixels(int index) const {
  // @@protoc_insertion_point(field_get:myProto.FrameMsg.pixels)
  return _internal_pixels(index);
}
inline ::myProto::Pixel* FrameMsg::_internal_add_pixels() {
  return pixels_.Add();
}
inline ::myProto::Pixel* FrameMsg::add_pixels() {
  // @@protoc_insertion_point(field_add:myProto.FrameMsg.pixels)
  return _internal_add_pixels();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::myProto::Pixel >&
FrameMsg::pixels() const {
  // @@protoc_insertion_point(field_list:myProto.FrameMsg.pixels)
  return pixels_;
}

// optional string hint_msg = 2;
inline bool FrameMsg::_internal_has_hint_msg() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FrameMsg::has_hint_msg() const {
  return _internal_has_hint_msg();
}
inline void FrameMsg::clear_hint_msg() {
  hint_msg_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& FrameMsg::hint_msg() const {
  // @@protoc_insertion_point(field_get:myProto.FrameMsg.hint_msg)
  return _internal_hint_msg();
}
inline void FrameMsg::set_hint_msg(const std::string& value) {
  _internal_set_hint_msg(value);
  // @@protoc_insertion_point(field_set:myProto.FrameMsg.hint_msg)
}
inline std::string* FrameMsg::mutable_hint_msg() {
  // @@protoc_insertion_point(field_mutable:myProto.FrameMsg.hint_msg)
  return _internal_mutable_hint_msg();
}
inline const std::string& FrameMsg::_internal_hint_msg() const {
  return hint_msg_.Get();
}
inline void FrameMsg::_internal_set_hint_msg(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  hint_msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void FrameMsg::set_hint_msg(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  hint_msg_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:myProto.FrameMsg.hint_msg)
}
inline void FrameMsg::set_hint_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  hint_msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:myProto.FrameMsg.hint_msg)
}
inline void FrameMsg::set_hint_msg(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  hint_msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:myProto.FrameMsg.hint_msg)
}
inline std::string* FrameMsg::_internal_mutable_hint_msg() {
  _has_bits_[0] |= 0x00000001u;
  return hint_msg_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* FrameMsg::release_hint_msg() {
  // @@protoc_insertion_point(field_release:myProto.FrameMsg.hint_msg)
  if (!_internal_has_hint_msg()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return hint_msg_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void FrameMsg::set_allocated_hint_msg(std::string* hint_msg) {
  if (hint_msg != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  hint_msg_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), hint_msg,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:myProto.FrameMsg.hint_msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace myProto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protoFile_2fprotoMsg_2eproto
