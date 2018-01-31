// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: position_report.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "position_report.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* PositionReportMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PositionReportMsg_reflection_ = NULL;
const ::google::protobuf::Descriptor* PositionReportMsg_Song_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PositionReportMsg_Song_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_position_5freport_2eproto() {
  protobuf_AddDesc_position_5freport_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "position_report.proto");
  GOOGLE_CHECK(file != NULL);
  PositionReportMsg_descriptor_ = file->message_type(0);
  static const int PositionReportMsg_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PositionReportMsg, songs_),
  };
  PositionReportMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PositionReportMsg_descriptor_,
      PositionReportMsg::default_instance_,
      PositionReportMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PositionReportMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PositionReportMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PositionReportMsg));
  PositionReportMsg_Song_descriptor_ = PositionReportMsg_descriptor_->nested_type(0);
  static const int PositionReportMsg_Song_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PositionReportMsg_Song, song_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PositionReportMsg_Song, position_in_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PositionReportMsg_Song, volume_),
  };
  PositionReportMsg_Song_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PositionReportMsg_Song_descriptor_,
      PositionReportMsg_Song::default_instance_,
      PositionReportMsg_Song_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PositionReportMsg_Song, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PositionReportMsg_Song, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PositionReportMsg_Song));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_position_5freport_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PositionReportMsg_descriptor_, &PositionReportMsg::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PositionReportMsg_Song_descriptor_, &PositionReportMsg_Song::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_position_5freport_2eproto() {
  delete PositionReportMsg::default_instance_;
  delete PositionReportMsg_reflection_;
  delete PositionReportMsg_Song::default_instance_;
  delete PositionReportMsg_Song_reflection_;
}

void protobuf_AddDesc_position_5freport_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025position_report.proto\"~\n\021PositionRepor"
    "tMsg\022&\n\005songs\030\001 \003(\0132\027.PositionReportMsg."
    "Song\032A\n\004Song\022\021\n\tsong_name\030\001 \002(\t\022\026\n\016posit"
    "ion_in_ms\030\002 \002(\r\022\016\n\006volume\030\003 \002(\001", 151);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "position_report.proto", &protobuf_RegisterTypes);
  PositionReportMsg::default_instance_ = new PositionReportMsg();
  PositionReportMsg_Song::default_instance_ = new PositionReportMsg_Song();
  PositionReportMsg::default_instance_->InitAsDefaultInstance();
  PositionReportMsg_Song::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_position_5freport_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_position_5freport_2eproto {
  StaticDescriptorInitializer_position_5freport_2eproto() {
    protobuf_AddDesc_position_5freport_2eproto();
  }
} static_descriptor_initializer_position_5freport_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PositionReportMsg_Song::kSongNameFieldNumber;
const int PositionReportMsg_Song::kPositionInMsFieldNumber;
const int PositionReportMsg_Song::kVolumeFieldNumber;
#endif  // !_MSC_VER

PositionReportMsg_Song::PositionReportMsg_Song()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PositionReportMsg.Song)
}

void PositionReportMsg_Song::InitAsDefaultInstance() {
}

PositionReportMsg_Song::PositionReportMsg_Song(const PositionReportMsg_Song& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:PositionReportMsg.Song)
}

void PositionReportMsg_Song::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  song_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  position_in_ms_ = 0u;
  volume_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PositionReportMsg_Song::~PositionReportMsg_Song() {
  // @@protoc_insertion_point(destructor:PositionReportMsg.Song)
  SharedDtor();
}

void PositionReportMsg_Song::SharedDtor() {
  if (song_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete song_name_;
  }
  if (this != default_instance_) {
  }
}

void PositionReportMsg_Song::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PositionReportMsg_Song::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PositionReportMsg_Song_descriptor_;
}

const PositionReportMsg_Song& PositionReportMsg_Song::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_position_5freport_2eproto();
  return *default_instance_;
}

PositionReportMsg_Song* PositionReportMsg_Song::default_instance_ = NULL;

PositionReportMsg_Song* PositionReportMsg_Song::New() const {
  return new PositionReportMsg_Song;
}

void PositionReportMsg_Song::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<PositionReportMsg_Song*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(volume_, position_in_ms_);
    if (has_song_name()) {
      if (song_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        song_name_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PositionReportMsg_Song::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PositionReportMsg.Song)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string song_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_song_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->song_name().data(), this->song_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "song_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_position_in_ms;
        break;
      }

      // required uint32 position_in_ms = 2;
      case 2: {
        if (tag == 16) {
         parse_position_in_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &position_in_ms_)));
          set_has_position_in_ms();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_volume;
        break;
      }

      // required double volume = 3;
      case 3: {
        if (tag == 25) {
         parse_volume:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &volume_)));
          set_has_volume();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PositionReportMsg.Song)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PositionReportMsg.Song)
  return false;
#undef DO_
}

void PositionReportMsg_Song::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PositionReportMsg.Song)
  // required string song_name = 1;
  if (has_song_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->song_name().data(), this->song_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "song_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->song_name(), output);
  }

  // required uint32 position_in_ms = 2;
  if (has_position_in_ms()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->position_in_ms(), output);
  }

  // required double volume = 3;
  if (has_volume()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->volume(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:PositionReportMsg.Song)
}

::google::protobuf::uint8* PositionReportMsg_Song::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PositionReportMsg.Song)
  // required string song_name = 1;
  if (has_song_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->song_name().data(), this->song_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "song_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->song_name(), target);
  }

  // required uint32 position_in_ms = 2;
  if (has_position_in_ms()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->position_in_ms(), target);
  }

  // required double volume = 3;
  if (has_volume()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->volume(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PositionReportMsg.Song)
  return target;
}

int PositionReportMsg_Song::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string song_name = 1;
    if (has_song_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->song_name());
    }

    // required uint32 position_in_ms = 2;
    if (has_position_in_ms()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->position_in_ms());
    }

    // required double volume = 3;
    if (has_volume()) {
      total_size += 1 + 8;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PositionReportMsg_Song::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PositionReportMsg_Song* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PositionReportMsg_Song*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PositionReportMsg_Song::MergeFrom(const PositionReportMsg_Song& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_song_name()) {
      set_song_name(from.song_name());
    }
    if (from.has_position_in_ms()) {
      set_position_in_ms(from.position_in_ms());
    }
    if (from.has_volume()) {
      set_volume(from.volume());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PositionReportMsg_Song::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PositionReportMsg_Song::CopyFrom(const PositionReportMsg_Song& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PositionReportMsg_Song::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void PositionReportMsg_Song::Swap(PositionReportMsg_Song* other) {
  if (other != this) {
    std::swap(song_name_, other->song_name_);
    std::swap(position_in_ms_, other->position_in_ms_);
    std::swap(volume_, other->volume_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PositionReportMsg_Song::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PositionReportMsg_Song_descriptor_;
  metadata.reflection = PositionReportMsg_Song_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int PositionReportMsg::kSongsFieldNumber;
#endif  // !_MSC_VER

PositionReportMsg::PositionReportMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PositionReportMsg)
}

void PositionReportMsg::InitAsDefaultInstance() {
}

PositionReportMsg::PositionReportMsg(const PositionReportMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:PositionReportMsg)
}

void PositionReportMsg::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PositionReportMsg::~PositionReportMsg() {
  // @@protoc_insertion_point(destructor:PositionReportMsg)
  SharedDtor();
}

void PositionReportMsg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PositionReportMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PositionReportMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PositionReportMsg_descriptor_;
}

const PositionReportMsg& PositionReportMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_position_5freport_2eproto();
  return *default_instance_;
}

PositionReportMsg* PositionReportMsg::default_instance_ = NULL;

PositionReportMsg* PositionReportMsg::New() const {
  return new PositionReportMsg;
}

void PositionReportMsg::Clear() {
  songs_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PositionReportMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PositionReportMsg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .PositionReportMsg.Song songs = 1;
      case 1: {
        if (tag == 10) {
         parse_songs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_songs()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_songs;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PositionReportMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PositionReportMsg)
  return false;
#undef DO_
}

void PositionReportMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PositionReportMsg)
  // repeated .PositionReportMsg.Song songs = 1;
  for (int i = 0; i < this->songs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->songs(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:PositionReportMsg)
}

::google::protobuf::uint8* PositionReportMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PositionReportMsg)
  // repeated .PositionReportMsg.Song songs = 1;
  for (int i = 0; i < this->songs_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->songs(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PositionReportMsg)
  return target;
}

int PositionReportMsg::ByteSize() const {
  int total_size = 0;

  // repeated .PositionReportMsg.Song songs = 1;
  total_size += 1 * this->songs_size();
  for (int i = 0; i < this->songs_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->songs(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PositionReportMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PositionReportMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PositionReportMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PositionReportMsg::MergeFrom(const PositionReportMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  songs_.MergeFrom(from.songs_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PositionReportMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PositionReportMsg::CopyFrom(const PositionReportMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PositionReportMsg::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->songs())) return false;
  return true;
}

void PositionReportMsg::Swap(PositionReportMsg* other) {
  if (other != this) {
    songs_.Swap(&other->songs_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PositionReportMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PositionReportMsg_descriptor_;
  metadata.reflection = PositionReportMsg_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
