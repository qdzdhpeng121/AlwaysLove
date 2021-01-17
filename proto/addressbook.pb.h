// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: addressbook.proto

#ifndef PROTOBUF_addressbook_2eproto__INCLUDED
#define PROTOBUF_addressbook_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tutorial {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_addressbook_2eproto();
void protobuf_AssignDesc_addressbook_2eproto();
void protobuf_ShutdownFile_addressbook_2eproto();

class Person;
class Person_PhoneNumber;
class AddressBook;

enum Person_PhoneType {
  Person_PhoneType_MOBILE = 0,
  Person_PhoneType_HOME = 1,
  Person_PhoneType_WORK = 2
};
bool Person_PhoneType_IsValid(int value);
const Person_PhoneType Person_PhoneType_PhoneType_MIN = Person_PhoneType_MOBILE;
const Person_PhoneType Person_PhoneType_PhoneType_MAX = Person_PhoneType_WORK;
const int Person_PhoneType_PhoneType_ARRAYSIZE = Person_PhoneType_PhoneType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Person_PhoneType_descriptor();
inline const ::std::string& Person_PhoneType_Name(Person_PhoneType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Person_PhoneType_descriptor(), value);
}
inline bool Person_PhoneType_Parse(
    const ::std::string& name, Person_PhoneType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Person_PhoneType>(
    Person_PhoneType_descriptor(), name, value);
}
// ===================================================================

class Person_PhoneNumber : public ::google::protobuf::Message {
 public:
  Person_PhoneNumber();
  virtual ~Person_PhoneNumber();

  Person_PhoneNumber(const Person_PhoneNumber& from);

  inline Person_PhoneNumber& operator=(const Person_PhoneNumber& from) {
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
  static const Person_PhoneNumber& default_instance();

  void Swap(Person_PhoneNumber* other);

  // implements Message ----------------------------------------------

  Person_PhoneNumber* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person_PhoneNumber& from);
  void MergeFrom(const Person_PhoneNumber& from);
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

  // optional string number = 1;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 1;
  inline const ::std::string& number() const;
  inline void set_number(const ::std::string& value);
  inline void set_number(const char* value);
  inline void set_number(const char* value, size_t size);
  inline ::std::string* mutable_number();
  inline ::std::string* release_number();
  inline void set_allocated_number(::std::string* number);

  // optional .tutorial.Person.PhoneType type = 2 [default = HOME];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::tutorial::Person_PhoneType type() const;
  inline void set_type(::tutorial::Person_PhoneType value);

  // @@protoc_insertion_point(class_scope:tutorial.Person.PhoneNumber)
 private:
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* number_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_addressbook_2eproto();
  friend void protobuf_AssignDesc_addressbook_2eproto();
  friend void protobuf_ShutdownFile_addressbook_2eproto();

  void InitAsDefaultInstance();
  static Person_PhoneNumber* default_instance_;
};
// -------------------------------------------------------------------

class Person : public ::google::protobuf::Message {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
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
  static const Person& default_instance();

  void Swap(Person* other);

  // implements Message ----------------------------------------------

  Person* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
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

  typedef Person_PhoneNumber PhoneNumber;

  typedef Person_PhoneType PhoneType;
  static const PhoneType MOBILE = Person_PhoneType_MOBILE;
  static const PhoneType HOME = Person_PhoneType_HOME;
  static const PhoneType WORK = Person_PhoneType_WORK;
  static inline bool PhoneType_IsValid(int value) {
    return Person_PhoneType_IsValid(value);
  }
  static const PhoneType PhoneType_MIN =
    Person_PhoneType_PhoneType_MIN;
  static const PhoneType PhoneType_MAX =
    Person_PhoneType_PhoneType_MAX;
  static const int PhoneType_ARRAYSIZE =
    Person_PhoneType_PhoneType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  PhoneType_descriptor() {
    return Person_PhoneType_descriptor();
  }
  static inline const ::std::string& PhoneType_Name(PhoneType value) {
    return Person_PhoneType_Name(value);
  }
  static inline bool PhoneType_Parse(const ::std::string& name,
      PhoneType* value) {
    return Person_PhoneType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string name = 1;
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

  // optional int32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string email = 3;
  inline bool has_email() const;
  inline void clear_email();
  static const int kEmailFieldNumber = 3;
  inline const ::std::string& email() const;
  inline void set_email(const ::std::string& value);
  inline void set_email(const char* value);
  inline void set_email(const char* value, size_t size);
  inline ::std::string* mutable_email();
  inline ::std::string* release_email();
  inline void set_allocated_email(::std::string* email);

  // repeated .tutorial.Person.PhoneNumber phones = 4;
  inline int phones_size() const;
  inline void clear_phones();
  static const int kPhonesFieldNumber = 4;
  inline const ::tutorial::Person_PhoneNumber& phones(int index) const;
  inline ::tutorial::Person_PhoneNumber* mutable_phones(int index);
  inline ::tutorial::Person_PhoneNumber* add_phones();
  inline const ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >&
      phones() const;
  inline ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >*
      mutable_phones();

  // @@protoc_insertion_point(class_scope:tutorial.Person)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_email();
  inline void clear_has_email();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::std::string* email_;
  ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber > phones_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_addressbook_2eproto();
  friend void protobuf_AssignDesc_addressbook_2eproto();
  friend void protobuf_ShutdownFile_addressbook_2eproto();

  void InitAsDefaultInstance();
  static Person* default_instance_;
};
// -------------------------------------------------------------------

class AddressBook : public ::google::protobuf::Message {
 public:
  AddressBook();
  virtual ~AddressBook();

  AddressBook(const AddressBook& from);

  inline AddressBook& operator=(const AddressBook& from) {
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
  static const AddressBook& default_instance();

  void Swap(AddressBook* other);

  // implements Message ----------------------------------------------

  AddressBook* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AddressBook& from);
  void MergeFrom(const AddressBook& from);
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

  // repeated .tutorial.Person people = 1;
  inline int people_size() const;
  inline void clear_people();
  static const int kPeopleFieldNumber = 1;
  inline const ::tutorial::Person& people(int index) const;
  inline ::tutorial::Person* mutable_people(int index);
  inline ::tutorial::Person* add_people();
  inline const ::google::protobuf::RepeatedPtrField< ::tutorial::Person >&
      people() const;
  inline ::google::protobuf::RepeatedPtrField< ::tutorial::Person >*
      mutable_people();

  // @@protoc_insertion_point(class_scope:tutorial.AddressBook)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::tutorial::Person > people_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_addressbook_2eproto();
  friend void protobuf_AssignDesc_addressbook_2eproto();
  friend void protobuf_ShutdownFile_addressbook_2eproto();

  void InitAsDefaultInstance();
  static AddressBook* default_instance_;
};
// ===================================================================


// ===================================================================

// Person_PhoneNumber

// optional string number = 1;
inline bool Person_PhoneNumber::has_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person_PhoneNumber::set_has_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person_PhoneNumber::clear_has_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person_PhoneNumber::clear_number() {
  if (number_ != &::google::protobuf::internal::kEmptyString) {
    number_->clear();
  }
  clear_has_number();
}
inline const ::std::string& Person_PhoneNumber::number() const {
  return *number_;
}
inline void Person_PhoneNumber::set_number(const ::std::string& value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(value);
}
inline void Person_PhoneNumber::set_number(const char* value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(value);
}
inline void Person_PhoneNumber::set_number(const char* value, size_t size) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person_PhoneNumber::mutable_number() {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  return number_;
}
inline ::std::string* Person_PhoneNumber::release_number() {
  clear_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = number_;
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Person_PhoneNumber::set_allocated_number(::std::string* number) {
  if (number_ != &::google::protobuf::internal::kEmptyString) {
    delete number_;
  }
  if (number) {
    set_has_number();
    number_ = number;
  } else {
    clear_has_number();
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .tutorial.Person.PhoneType type = 2 [default = HOME];
inline bool Person_PhoneNumber::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person_PhoneNumber::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person_PhoneNumber::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person_PhoneNumber::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::tutorial::Person_PhoneType Person_PhoneNumber::type() const {
  return static_cast< ::tutorial::Person_PhoneType >(type_);
}
inline void Person_PhoneNumber::set_type(::tutorial::Person_PhoneType value) {
  assert(::tutorial::Person_PhoneType_IsValid(value));
  set_has_type();
  type_ = value;
}

// -------------------------------------------------------------------

// Person

// optional string name = 1;
inline bool Person::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Person::name() const {
  return *name_;
}
inline void Person::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Person::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Person::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Person::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Person::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 id = 2;
inline bool Person::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Person::id() const {
  return id_;
}
inline void Person::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string email = 3;
inline bool Person::has_email() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Person::set_has_email() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Person::clear_has_email() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Person::clear_email() {
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    email_->clear();
  }
  clear_has_email();
}
inline const ::std::string& Person::email() const {
  return *email_;
}
inline void Person::set_email(const ::std::string& value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void Person::set_email(const char* value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void Person::set_email(const char* value, size_t size) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_email() {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  return email_;
}
inline ::std::string* Person::release_email() {
  clear_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = email_;
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Person::set_allocated_email(::std::string* email) {
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    delete email_;
  }
  if (email) {
    set_has_email();
    email_ = email;
  } else {
    clear_has_email();
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .tutorial.Person.PhoneNumber phones = 4;
inline int Person::phones_size() const {
  return phones_.size();
}
inline void Person::clear_phones() {
  phones_.Clear();
}
inline const ::tutorial::Person_PhoneNumber& Person::phones(int index) const {
  return phones_.Get(index);
}
inline ::tutorial::Person_PhoneNumber* Person::mutable_phones(int index) {
  return phones_.Mutable(index);
}
inline ::tutorial::Person_PhoneNumber* Person::add_phones() {
  return phones_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >&
Person::phones() const {
  return phones_;
}
inline ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >*
Person::mutable_phones() {
  return &phones_;
}

// -------------------------------------------------------------------

// AddressBook

// repeated .tutorial.Person people = 1;
inline int AddressBook::people_size() const {
  return people_.size();
}
inline void AddressBook::clear_people() {
  people_.Clear();
}
inline const ::tutorial::Person& AddressBook::people(int index) const {
  return people_.Get(index);
}
inline ::tutorial::Person* AddressBook::mutable_people(int index) {
  return people_.Mutable(index);
}
inline ::tutorial::Person* AddressBook::add_people() {
  return people_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tutorial::Person >&
AddressBook::people() const {
  return people_;
}
inline ::google::protobuf::RepeatedPtrField< ::tutorial::Person >*
AddressBook::mutable_people() {
  return &people_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tutorial::Person_PhoneType>() {
  return ::tutorial::Person_PhoneType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_addressbook_2eproto__INCLUDED
