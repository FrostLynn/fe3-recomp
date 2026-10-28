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

// Function: sub_01CEF830
// Address: 0x1cef830 - 0x1cef838
void sub_01CEF830_0x1cef830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF830_0x1cef830");
#endif

    ctx->pc = 0x1cef830u;

    // 0x1cef830: 0x80b1cd4  j           func_2C7350
    ctx->pc = 0x1CEF830u;
    ctx->pc = 0x2C7350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7350u, 0x1CEF830u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF838u;
}
