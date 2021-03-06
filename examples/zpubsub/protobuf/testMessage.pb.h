// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: testMessage.proto

#ifndef PROTOBUF_testMessage_2eproto__INCLUDED
#define PROTOBUF_testMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace zpubsub {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_testMessage_2eproto();
void protobuf_AssignDesc_testMessage_2eproto();
void protobuf_ShutdownFile_testMessage_2eproto();

class TestMessage;

// ===================================================================

class TestMessage : public ::google::protobuf::Message {
 public:
  TestMessage();
  virtual ~TestMessage();

  TestMessage(const TestMessage& from);

  inline TestMessage& operator=(const TestMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessage& default_instance();

  void Swap(TestMessage* other);

  // implements Message ----------------------------------------------

  TestMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestMessage& from);
  void MergeFrom(const TestMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint64 id() const;
  inline void set_id(::google::protobuf::uint64 value);

  // optional string message = 2;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 2;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const char* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  inline void set_allocated_message(::std::string* message);

  // optional int32 testint = 3;
  inline bool has_testint() const;
  inline void clear_testint();
  static const int kTestintFieldNumber = 3;
  inline ::google::protobuf::int32 testint() const;
  inline void set_testint(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:zpubsub.TestMessage)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_message();
  inline void clear_has_message();
  inline void set_has_testint();
  inline void clear_has_testint();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 id_;
  ::std::string* message_;
  ::google::protobuf::int32 testint_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_testMessage_2eproto();
  friend void protobuf_AssignDesc_testMessage_2eproto();
  friend void protobuf_ShutdownFile_testMessage_2eproto();

  void InitAsDefaultInstance();
  static TestMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// TestMessage

// required uint64 id = 1;
inline bool TestMessage::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestMessage::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestMessage::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestMessage::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::uint64 TestMessage::id() const {
  return id_;
}
inline void TestMessage::set_id(::google::protobuf::uint64 value) {
  set_has_id();
  id_ = value;
}

// optional string message = 2;
inline bool TestMessage::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TestMessage::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TestMessage::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TestMessage::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& TestMessage::message() const {
  return *message_;
}
inline void TestMessage::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void TestMessage::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void TestMessage::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TestMessage::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* TestMessage::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void TestMessage::set_allocated_message(::std::string* message) {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (message) {
    set_has_message();
    message_ = message;
  } else {
    clear_has_message();
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 testint = 3;
inline bool TestMessage::has_testint() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TestMessage::set_has_testint() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TestMessage::clear_has_testint() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TestMessage::clear_testint() {
  testint_ = 0;
  clear_has_testint();
}
inline ::google::protobuf::int32 TestMessage::testint() const {
  return testint_;
}
inline void TestMessage::set_testint(::google::protobuf::int32 value) {
  set_has_testint();
  testint_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace zpubsub

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_testMessage_2eproto__INCLUDED
