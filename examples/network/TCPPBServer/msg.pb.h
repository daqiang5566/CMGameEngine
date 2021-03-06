// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#ifndef PROTOBUF_msg_2eproto__INCLUDED
#define PROTOBUF_msg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msg_2eproto();
void protobuf_AssignDesc_msg_2eproto();
void protobuf_ShutdownFile_msg_2eproto();

class c2s_login;

enum c2s_login_MsgID {
  c2s_login_MsgID_id = 0
};
bool c2s_login_MsgID_IsValid(int value);
const c2s_login_MsgID c2s_login_MsgID_MsgID_MIN = c2s_login_MsgID_id;
const c2s_login_MsgID c2s_login_MsgID_MsgID_MAX = c2s_login_MsgID_id;
const int c2s_login_MsgID_MsgID_ARRAYSIZE = c2s_login_MsgID_MsgID_MAX + 1;

// ===================================================================

class c2s_login : public ::google::protobuf::MessageLite {
 public:
  c2s_login();
  virtual ~c2s_login();

  c2s_login(const c2s_login& from);

  inline c2s_login& operator=(const c2s_login& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const c2s_login& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const c2s_login* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(c2s_login* other);

  // implements Message ----------------------------------------------

  c2s_login* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const c2s_login& from);
  void MergeFrom(const c2s_login& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef c2s_login_MsgID MsgID;
  static const MsgID id = c2s_login_MsgID_id;
  static inline bool MsgID_IsValid(int value) {
    return c2s_login_MsgID_IsValid(value);
  }
  static const MsgID MsgID_MIN =
    c2s_login_MsgID_MsgID_MIN;
  static const MsgID MsgID_MAX =
    c2s_login_MsgID_MsgID_MAX;
  static const int MsgID_ARRAYSIZE =
    c2s_login_MsgID_MsgID_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:c2s_login)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_msg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_msg_2eproto();
  #endif
  friend void protobuf_AssignDesc_msg_2eproto();
  friend void protobuf_ShutdownFile_msg_2eproto();

  void InitAsDefaultInstance();
  static c2s_login* default_instance_;
};
// ===================================================================


// ===================================================================

// c2s_login

// required string name = 1;
inline bool c2s_login::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void c2s_login::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void c2s_login::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void c2s_login::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& c2s_login::name() const {
  // @@protoc_insertion_point(field_get:c2s_login.name)
  return *name_;
}
inline void c2s_login::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:c2s_login.name)
}
inline void c2s_login::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:c2s_login.name)
}
inline void c2s_login::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:c2s_login.name)
}
inline ::std::string* c2s_login::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:c2s_login.name)
  return name_;
}
inline ::std::string* c2s_login::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void c2s_login::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:c2s_login.name)
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_2eproto__INCLUDED
