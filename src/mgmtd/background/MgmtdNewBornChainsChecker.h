#pragma once

#include "common/utils/Coroutine.h"

namespace hf3fs::mgmtd {
struct MgmtdState;

//周期执行，每个10秒执行一次
class MgmtdNewBornChainsChecker {
 public:
  explicit MgmtdNewBornChainsChecker(MgmtdState &state);

  CoTask<void> check();

 private:
  MgmtdState &state_;
};
}  // namespace hf3fs::mgmtd
