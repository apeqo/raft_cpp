// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpcheader.proto
// Protobuf C++ Version: 5.26.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_rpcheader_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_rpcheader_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION != 5026001
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_rpcheader_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_rpcheader_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_rpcheader_2eproto;
namespace RPC {
class RpcHeader;
struct RpcHeaderDefaultTypeInternal;
extern RpcHeaderDefaultTypeInternal _RpcHeader_default_instance_;
}  // namespace RPC
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace RPC {

// ===================================================================


// -------------------------------------------------------------------

class RpcHeader final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:RPC.RpcHeader) */ {
 public:
  inline RpcHeader() : RpcHeader(nullptr) {}
  ~RpcHeader() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR RpcHeader(
      ::google::protobuf::internal::ConstantInitialized);

  inline RpcHeader(const RpcHeader& from) : RpcHeader(nullptr, from) {}
  inline RpcHeader(RpcHeader&& from) noexcept
      : RpcHeader(nullptr, std::move(from)) {}
  inline RpcHeader& operator=(const RpcHeader& from) {
    CopyFrom(from);
    return *this;
  }
  inline RpcHeader& operator=(RpcHeader&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RpcHeader& default_instance() {
    return *internal_default_instance();
  }
  static inline const RpcHeader* internal_default_instance() {
    return reinterpret_cast<const RpcHeader*>(
        &_RpcHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(RpcHeader& a, RpcHeader& b) { a.Swap(&b); }
  inline void Swap(RpcHeader* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RpcHeader* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RpcHeader* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<RpcHeader>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const RpcHeader& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const RpcHeader& from) { RpcHeader::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(RpcHeader* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "RPC.RpcHeader"; }

 protected:
  explicit RpcHeader(::google::protobuf::Arena* arena);
  RpcHeader(::google::protobuf::Arena* arena, const RpcHeader& from);
  RpcHeader(::google::protobuf::Arena* arena, RpcHeader&& from) noexcept
      : RpcHeader(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::MessageLite::ClassData* GetClassData()
      const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const final;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kServiceNameFieldNumber = 1,
    kMethodNameFieldNumber = 2,
    kArgsSizeFieldNumber = 3,
  };
  // bytes service_name = 1;
  void clear_service_name() ;
  const std::string& service_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_service_name(Arg_&& arg, Args_... args);
  std::string* mutable_service_name();
  PROTOBUF_NODISCARD std::string* release_service_name();
  void set_allocated_service_name(std::string* value);

  private:
  const std::string& _internal_service_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_service_name(
      const std::string& value);
  std::string* _internal_mutable_service_name();

  public:
  // bytes method_name = 2;
  void clear_method_name() ;
  const std::string& method_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_method_name(Arg_&& arg, Args_... args);
  std::string* mutable_method_name();
  PROTOBUF_NODISCARD std::string* release_method_name();
  void set_allocated_method_name(std::string* value);

  private:
  const std::string& _internal_method_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_method_name(
      const std::string& value);
  std::string* _internal_mutable_method_name();

  public:
  // uint32 args_size = 3;
  void clear_args_size() ;
  ::uint32_t args_size() const;
  void set_args_size(::uint32_t value);

  private:
  ::uint32_t _internal_args_size() const;
  void _internal_set_args_size(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:RPC.RpcHeader)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr service_name_;
    ::google::protobuf::internal::ArenaStringPtr method_name_;
    ::uint32_t args_size_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_rpcheader_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// RpcHeader

// bytes service_name = 1;
inline void RpcHeader::clear_service_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.service_name_.ClearToEmpty();
}
inline const std::string& RpcHeader::service_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:RPC.RpcHeader.service_name)
  return _internal_service_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void RpcHeader::set_service_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.service_name_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:RPC.RpcHeader.service_name)
}
inline std::string* RpcHeader::mutable_service_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_service_name();
  // @@protoc_insertion_point(field_mutable:RPC.RpcHeader.service_name)
  return _s;
}
inline const std::string& RpcHeader::_internal_service_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.service_name_.Get();
}
inline void RpcHeader::_internal_set_service_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.service_name_.Set(value, GetArena());
}
inline std::string* RpcHeader::_internal_mutable_service_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _impl_.service_name_.Mutable( GetArena());
}
inline std::string* RpcHeader::release_service_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:RPC.RpcHeader.service_name)
  return _impl_.service_name_.Release();
}
inline void RpcHeader::set_allocated_service_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.service_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.service_name_.IsDefault()) {
          _impl_.service_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:RPC.RpcHeader.service_name)
}

// bytes method_name = 2;
inline void RpcHeader::clear_method_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.method_name_.ClearToEmpty();
}
inline const std::string& RpcHeader::method_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:RPC.RpcHeader.method_name)
  return _internal_method_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void RpcHeader::set_method_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.method_name_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:RPC.RpcHeader.method_name)
}
inline std::string* RpcHeader::mutable_method_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_method_name();
  // @@protoc_insertion_point(field_mutable:RPC.RpcHeader.method_name)
  return _s;
}
inline const std::string& RpcHeader::_internal_method_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.method_name_.Get();
}
inline void RpcHeader::_internal_set_method_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.method_name_.Set(value, GetArena());
}
inline std::string* RpcHeader::_internal_mutable_method_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _impl_.method_name_.Mutable( GetArena());
}
inline std::string* RpcHeader::release_method_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:RPC.RpcHeader.method_name)
  return _impl_.method_name_.Release();
}
inline void RpcHeader::set_allocated_method_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.method_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.method_name_.IsDefault()) {
          _impl_.method_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:RPC.RpcHeader.method_name)
}

// uint32 args_size = 3;
inline void RpcHeader::clear_args_size() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.args_size_ = 0u;
}
inline ::uint32_t RpcHeader::args_size() const {
  // @@protoc_insertion_point(field_get:RPC.RpcHeader.args_size)
  return _internal_args_size();
}
inline void RpcHeader::set_args_size(::uint32_t value) {
  _internal_set_args_size(value);
  // @@protoc_insertion_point(field_set:RPC.RpcHeader.args_size)
}
inline ::uint32_t RpcHeader::_internal_args_size() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.args_size_;
}
inline void RpcHeader::_internal_set_args_size(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.args_size_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace RPC


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_rpcheader_2eproto_2epb_2eh
