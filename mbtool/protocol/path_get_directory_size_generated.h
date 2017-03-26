// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PATHGETDIRECTORYSIZE_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_PATHGETDIRECTORYSIZE_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct PathGetDirectorySizeError;

struct PathGetDirectorySizeRequest;

struct PathGetDirectorySizeResponse;

struct PathGetDirectorySizeError FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ERRNO_VALUE = 4,
    VT_MSG = 6
  };
  int32_t errno_value() const {
    return GetField<int32_t>(VT_ERRNO_VALUE, 0);
  }
  const flatbuffers::String *msg() const {
    return GetPointer<const flatbuffers::String *>(VT_MSG);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ERRNO_VALUE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_MSG) &&
           verifier.Verify(msg()) &&
           verifier.EndTable();
  }
};

struct PathGetDirectorySizeErrorBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_errno_value(int32_t errno_value) {
    fbb_.AddElement<int32_t>(PathGetDirectorySizeError::VT_ERRNO_VALUE, errno_value, 0);
  }
  void add_msg(flatbuffers::Offset<flatbuffers::String> msg) {
    fbb_.AddOffset(PathGetDirectorySizeError::VT_MSG, msg);
  }
  PathGetDirectorySizeErrorBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PathGetDirectorySizeErrorBuilder &operator=(const PathGetDirectorySizeErrorBuilder &);
  flatbuffers::Offset<PathGetDirectorySizeError> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<PathGetDirectorySizeError>(end);
    return o;
  }
};

inline flatbuffers::Offset<PathGetDirectorySizeError> CreatePathGetDirectorySizeError(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    flatbuffers::Offset<flatbuffers::String> msg = 0) {
  PathGetDirectorySizeErrorBuilder builder_(_fbb);
  builder_.add_msg(msg);
  builder_.add_errno_value(errno_value);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathGetDirectorySizeError> CreatePathGetDirectorySizeErrorDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    const char *msg = nullptr) {
  return mbtool::daemon::v3::CreatePathGetDirectorySizeError(
      _fbb,
      errno_value,
      msg ? _fbb.CreateString(msg) : 0);
}

struct PathGetDirectorySizeRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_PATH = 4,
    VT_EXCLUSIONS = 6
  };
  const flatbuffers::String *path() const {
    return GetPointer<const flatbuffers::String *>(VT_PATH);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *exclusions() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_EXCLUSIONS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_PATH) &&
           verifier.Verify(path()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_EXCLUSIONS) &&
           verifier.Verify(exclusions()) &&
           verifier.VerifyVectorOfStrings(exclusions()) &&
           verifier.EndTable();
  }
};

struct PathGetDirectorySizeRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_path(flatbuffers::Offset<flatbuffers::String> path) {
    fbb_.AddOffset(PathGetDirectorySizeRequest::VT_PATH, path);
  }
  void add_exclusions(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> exclusions) {
    fbb_.AddOffset(PathGetDirectorySizeRequest::VT_EXCLUSIONS, exclusions);
  }
  PathGetDirectorySizeRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PathGetDirectorySizeRequestBuilder &operator=(const PathGetDirectorySizeRequestBuilder &);
  flatbuffers::Offset<PathGetDirectorySizeRequest> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<PathGetDirectorySizeRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<PathGetDirectorySizeRequest> CreatePathGetDirectorySizeRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> path = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> exclusions = 0) {
  PathGetDirectorySizeRequestBuilder builder_(_fbb);
  builder_.add_exclusions(exclusions);
  builder_.add_path(path);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathGetDirectorySizeRequest> CreatePathGetDirectorySizeRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *path = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *exclusions = nullptr) {
  return mbtool::daemon::v3::CreatePathGetDirectorySizeRequest(
      _fbb,
      path ? _fbb.CreateString(path) : 0,
      exclusions ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*exclusions) : 0);
}

struct PathGetDirectorySizeResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4,
    VT_ERROR_MSG = 6,
    VT_SIZE = 8,
    VT_ERROR = 10
  };
  bool success() const {
    return GetField<uint8_t>(VT_SUCCESS, 0) != 0;
  }
  const flatbuffers::String *error_msg() const {
    return GetPointer<const flatbuffers::String *>(VT_ERROR_MSG);
  }
  uint64_t size() const {
    return GetField<uint64_t>(VT_SIZE, 0);
  }
  const PathGetDirectorySizeError *error() const {
    return GetPointer<const PathGetDirectorySizeError *>(VT_ERROR);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR_MSG) &&
           verifier.Verify(error_msg()) &&
           VerifyField<uint64_t>(verifier, VT_SIZE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR) &&
           verifier.VerifyTable(error()) &&
           verifier.EndTable();
  }
};

struct PathGetDirectorySizeResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) {
    fbb_.AddElement<uint8_t>(PathGetDirectorySizeResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0);
  }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) {
    fbb_.AddOffset(PathGetDirectorySizeResponse::VT_ERROR_MSG, error_msg);
  }
  void add_size(uint64_t size) {
    fbb_.AddElement<uint64_t>(PathGetDirectorySizeResponse::VT_SIZE, size, 0);
  }
  void add_error(flatbuffers::Offset<PathGetDirectorySizeError> error) {
    fbb_.AddOffset(PathGetDirectorySizeResponse::VT_ERROR, error);
  }
  PathGetDirectorySizeResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PathGetDirectorySizeResponseBuilder &operator=(const PathGetDirectorySizeResponseBuilder &);
  flatbuffers::Offset<PathGetDirectorySizeResponse> Finish() {
    const auto end = fbb_.EndTable(start_, 4);
    auto o = flatbuffers::Offset<PathGetDirectorySizeResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<PathGetDirectorySizeResponse> CreatePathGetDirectorySizeResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    flatbuffers::Offset<flatbuffers::String> error_msg = 0,
    uint64_t size = 0,
    flatbuffers::Offset<PathGetDirectorySizeError> error = 0) {
  PathGetDirectorySizeResponseBuilder builder_(_fbb);
  builder_.add_size(size);
  builder_.add_error(error);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathGetDirectorySizeResponse> CreatePathGetDirectorySizeResponseDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    const char *error_msg = nullptr,
    uint64_t size = 0,
    flatbuffers::Offset<PathGetDirectorySizeError> error = 0) {
  return mbtool::daemon::v3::CreatePathGetDirectorySizeResponse(
      _fbb,
      success,
      error_msg ? _fbb.CreateString(error_msg) : 0,
      size,
      error);
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_PATHGETDIRECTORYSIZE_MBTOOL_DAEMON_V3_H_
