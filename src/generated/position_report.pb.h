// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: position_report.proto

#ifndef PROTOBUF_position_5freport_2eproto__INCLUDED
#define PROTOBUF_position_5freport_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_position_5freport_2eproto();
void protobuf_AssignDesc_position_5freport_2eproto();
void protobuf_ShutdownFile_position_5freport_2eproto();

class PositionReportMsg;
class PositionReportMsg_Song;

// ===================================================================

class PositionReportMsg_Song : public ::google::protobuf::Message {
 public:
  PositionReportMsg_Song();
  virtual ~PositionReportMsg_Song();

  PositionReportMsg_Song(const PositionReportMsg_Song& from);

  inline PositionReportMsg_Song& operator=(const PositionReportMsg_Song& from) {
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
  static const PositionReportMsg_Song& default_instance();

  void Swap(PositionReportMsg_Song* other);

  // implements Message ----------------------------------------------

  PositionReportMsg_Song* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PositionReportMsg_Song& from);
  void MergeFrom(const PositionReportMsg_Song& from);
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

  // required string song_name = 1;
  inline bool has_song_name() const;
  inline void clear_song_name();
  static const int kSongNameFieldNumber = 1;
  inline const ::std::string& song_name() const;
  inline void set_song_name(const ::std::string& value);
  inline void set_song_name(const char* value);
  inline void set_song_name(const char* value, size_t size);
  inline ::std::string* mutable_song_name();
  inline ::std::string* release_song_name();
  inline void set_allocated_song_name(::std::string* song_name);

  // required uint32 position_in_ms = 2;
  inline bool has_position_in_ms() const;
  inline void clear_position_in_ms();
  static const int kPositionInMsFieldNumber = 2;
  inline ::google::protobuf::uint32 position_in_ms() const;
  inline void set_position_in_ms(::google::protobuf::uint32 value);

  // required double volume = 3;
  inline bool has_volume() const;
  inline void clear_volume();
  static const int kVolumeFieldNumber = 3;
  inline double volume() const;
  inline void set_volume(double value);

  // @@protoc_insertion_point(class_scope:PositionReportMsg.Song)
 private:
  inline void set_has_song_name();
  inline void clear_has_song_name();
  inline void set_has_position_in_ms();
  inline void clear_has_position_in_ms();
  inline void set_has_volume();
  inline void clear_has_volume();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* song_name_;
  double volume_;
  ::google::protobuf::uint32 position_in_ms_;
  friend void  protobuf_AddDesc_position_5freport_2eproto();
  friend void protobuf_AssignDesc_position_5freport_2eproto();
  friend void protobuf_ShutdownFile_position_5freport_2eproto();

  void InitAsDefaultInstance();
  static PositionReportMsg_Song* default_instance_;
};
// -------------------------------------------------------------------

class PositionReportMsg : public ::google::protobuf::Message {
 public:
  PositionReportMsg();
  virtual ~PositionReportMsg();

  PositionReportMsg(const PositionReportMsg& from);

  inline PositionReportMsg& operator=(const PositionReportMsg& from) {
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
  static const PositionReportMsg& default_instance();

  void Swap(PositionReportMsg* other);

  // implements Message ----------------------------------------------

  PositionReportMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PositionReportMsg& from);
  void MergeFrom(const PositionReportMsg& from);
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

  typedef PositionReportMsg_Song Song;

  // accessors -------------------------------------------------------

  // repeated .PositionReportMsg.Song songs = 1;
  inline int songs_size() const;
  inline void clear_songs();
  static const int kSongsFieldNumber = 1;
  inline const ::PositionReportMsg_Song& songs(int index) const;
  inline ::PositionReportMsg_Song* mutable_songs(int index);
  inline ::PositionReportMsg_Song* add_songs();
  inline const ::google::protobuf::RepeatedPtrField< ::PositionReportMsg_Song >&
      songs() const;
  inline ::google::protobuf::RepeatedPtrField< ::PositionReportMsg_Song >*
      mutable_songs();

  // @@protoc_insertion_point(class_scope:PositionReportMsg)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::PositionReportMsg_Song > songs_;
  friend void  protobuf_AddDesc_position_5freport_2eproto();
  friend void protobuf_AssignDesc_position_5freport_2eproto();
  friend void protobuf_ShutdownFile_position_5freport_2eproto();

  void InitAsDefaultInstance();
  static PositionReportMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// PositionReportMsg_Song

// required string song_name = 1;
inline bool PositionReportMsg_Song::has_song_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PositionReportMsg_Song::set_has_song_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PositionReportMsg_Song::clear_has_song_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PositionReportMsg_Song::clear_song_name() {
  if (song_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    song_name_->clear();
  }
  clear_has_song_name();
}
inline const ::std::string& PositionReportMsg_Song::song_name() const {
  // @@protoc_insertion_point(field_get:PositionReportMsg.Song.song_name)
  return *song_name_;
}
inline void PositionReportMsg_Song::set_song_name(const ::std::string& value) {
  set_has_song_name();
  if (song_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    song_name_ = new ::std::string;
  }
  song_name_->assign(value);
  // @@protoc_insertion_point(field_set:PositionReportMsg.Song.song_name)
}
inline void PositionReportMsg_Song::set_song_name(const char* value) {
  set_has_song_name();
  if (song_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    song_name_ = new ::std::string;
  }
  song_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:PositionReportMsg.Song.song_name)
}
inline void PositionReportMsg_Song::set_song_name(const char* value, size_t size) {
  set_has_song_name();
  if (song_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    song_name_ = new ::std::string;
  }
  song_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PositionReportMsg.Song.song_name)
}
inline ::std::string* PositionReportMsg_Song::mutable_song_name() {
  set_has_song_name();
  if (song_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    song_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:PositionReportMsg.Song.song_name)
  return song_name_;
}
inline ::std::string* PositionReportMsg_Song::release_song_name() {
  clear_has_song_name();
  if (song_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = song_name_;
    song_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void PositionReportMsg_Song::set_allocated_song_name(::std::string* song_name) {
  if (song_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete song_name_;
  }
  if (song_name) {
    set_has_song_name();
    song_name_ = song_name;
  } else {
    clear_has_song_name();
    song_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:PositionReportMsg.Song.song_name)
}

// required uint32 position_in_ms = 2;
inline bool PositionReportMsg_Song::has_position_in_ms() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PositionReportMsg_Song::set_has_position_in_ms() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PositionReportMsg_Song::clear_has_position_in_ms() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PositionReportMsg_Song::clear_position_in_ms() {
  position_in_ms_ = 0u;
  clear_has_position_in_ms();
}
inline ::google::protobuf::uint32 PositionReportMsg_Song::position_in_ms() const {
  // @@protoc_insertion_point(field_get:PositionReportMsg.Song.position_in_ms)
  return position_in_ms_;
}
inline void PositionReportMsg_Song::set_position_in_ms(::google::protobuf::uint32 value) {
  set_has_position_in_ms();
  position_in_ms_ = value;
  // @@protoc_insertion_point(field_set:PositionReportMsg.Song.position_in_ms)
}

// required double volume = 3;
inline bool PositionReportMsg_Song::has_volume() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PositionReportMsg_Song::set_has_volume() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PositionReportMsg_Song::clear_has_volume() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PositionReportMsg_Song::clear_volume() {
  volume_ = 0;
  clear_has_volume();
}
inline double PositionReportMsg_Song::volume() const {
  // @@protoc_insertion_point(field_get:PositionReportMsg.Song.volume)
  return volume_;
}
inline void PositionReportMsg_Song::set_volume(double value) {
  set_has_volume();
  volume_ = value;
  // @@protoc_insertion_point(field_set:PositionReportMsg.Song.volume)
}

// -------------------------------------------------------------------

// PositionReportMsg

// repeated .PositionReportMsg.Song songs = 1;
inline int PositionReportMsg::songs_size() const {
  return songs_.size();
}
inline void PositionReportMsg::clear_songs() {
  songs_.Clear();
}
inline const ::PositionReportMsg_Song& PositionReportMsg::songs(int index) const {
  // @@protoc_insertion_point(field_get:PositionReportMsg.songs)
  return songs_.Get(index);
}
inline ::PositionReportMsg_Song* PositionReportMsg::mutable_songs(int index) {
  // @@protoc_insertion_point(field_mutable:PositionReportMsg.songs)
  return songs_.Mutable(index);
}
inline ::PositionReportMsg_Song* PositionReportMsg::add_songs() {
  // @@protoc_insertion_point(field_add:PositionReportMsg.songs)
  return songs_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PositionReportMsg_Song >&
PositionReportMsg::songs() const {
  // @@protoc_insertion_point(field_list:PositionReportMsg.songs)
  return songs_;
}
inline ::google::protobuf::RepeatedPtrField< ::PositionReportMsg_Song >*
PositionReportMsg::mutable_songs() {
  // @@protoc_insertion_point(field_mutable_list:PositionReportMsg.songs)
  return &songs_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_position_5freport_2eproto__INCLUDED
