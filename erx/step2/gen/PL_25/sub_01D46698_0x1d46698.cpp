#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D46698
// Address: 0x1d46698 - 0x1d466a0
void sub_01D46698_0x1d46698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46698_0x1d46698");
#endif

    ctx->pc = 0x1d46698u;

    // 0x1d46698: 0x80b0f84  j           func_2C3E10
    ctx->pc = 0x1D46698u;
    ctx->pc = 0x2C3E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E10u, 0x1D46698u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D466A0u;
}
