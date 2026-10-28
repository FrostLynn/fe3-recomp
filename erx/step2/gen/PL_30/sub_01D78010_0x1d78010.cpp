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

// Function: sub_01D78010
// Address: 0x1d78010 - 0x1d78018
void sub_01D78010_0x1d78010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78010_0x1d78010");
#endif

    ctx->pc = 0x1d78010u;

    // 0x1d78010: 0x80b2060  j           func_2C8180
    ctx->pc = 0x1D78010u;
    ctx->pc = 0x2C8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8180u, 0x1D78010u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D78018u;
}
