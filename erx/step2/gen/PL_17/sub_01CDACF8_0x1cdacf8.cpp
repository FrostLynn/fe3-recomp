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

// Function: sub_01CDACF8
// Address: 0x1cdacf8 - 0x1cdad00
void sub_01CDACF8_0x1cdacf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDACF8_0x1cdacf8");
#endif

    ctx->pc = 0x1cdacf8u;

    // 0x1cdacf8: 0x80b1a4c  j           func_2C6930
    ctx->pc = 0x1CDACF8u;
    ctx->pc = 0x2C6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6930u, 0x1CDACF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAD00u;
}
