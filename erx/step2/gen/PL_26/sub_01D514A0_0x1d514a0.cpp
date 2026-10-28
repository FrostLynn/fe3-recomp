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

// Function: sub_01D514A0
// Address: 0x1d514a0 - 0x1d514a8
void sub_01D514A0_0x1d514a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D514A0_0x1d514a0");
#endif

    ctx->pc = 0x1d514a0u;

    // 0x1d514a0: 0x80b1392  j           func_2C4E48
    ctx->pc = 0x1D514A0u;
    ctx->pc = 0x2C4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4E48u, 0x1D514A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D514A8u;
}
