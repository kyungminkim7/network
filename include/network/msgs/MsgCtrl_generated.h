// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MSGCTRL_MSGS_H_
#define FLATBUFFERS_GENERATED_MSGCTRL_MSGS_H_

#include "flatbuffers/flatbuffers.h"

namespace msgs {

enum class MsgCtrl : uint8_t {
  ACK = 1,
  MIN = ACK,
  MAX = ACK
};

inline const MsgCtrl (&EnumValuesMsgCtrl())[1] {
  static const MsgCtrl values[] = {
    MsgCtrl::ACK
  };
  return values;
}

inline const char * const *EnumNamesMsgCtrl() {
  static const char * const names[2] = {
    "ACK",
    nullptr
  };
  return names;
}

inline const char *EnumNameMsgCtrl(MsgCtrl e) {
  if (flatbuffers::IsOutRange(e, MsgCtrl::ACK, MsgCtrl::ACK)) return "";
  const size_t index = static_cast<size_t>(e) - static_cast<size_t>(MsgCtrl::ACK);
  return EnumNamesMsgCtrl()[index];
}

}  // namespace msgs

#endif  // FLATBUFFERS_GENERATED_MSGCTRL_MSGS_H_
