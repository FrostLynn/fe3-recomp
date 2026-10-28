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

// Function: sub_01DCF430
// Address: 0x1dcf430 - 0x1dcf438
void sub_01DCF430_0x1dcf430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF430_0x1dcf430");
#endif

    ctx->pc = 0x1dcf430u;

    // 0x1dcf430: 0x80a96e2  j           func_2A5B88
    ctx->pc = 0x1DCF430u;
    ctx->pc = 0x2A5B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B88u, 0x1DCF430u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DCF438u;
}
