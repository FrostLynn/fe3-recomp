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

// Function: sub_01CC2BF8
// Address: 0x1cc2bf8 - 0x1cc2c00
void sub_01CC2BF8_0x1cc2bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2BF8_0x1cc2bf8");
#endif

    ctx->pc = 0x1cc2bf8u;

    // 0x1cc2bf8: 0x80b246c  j           func_2C91B0
    ctx->pc = 0x1CC2BF8u;
    ctx->pc = 0x2C91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C91B0u, 0x1CC2BF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2C00u;
}
