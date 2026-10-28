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

// Function: sub_01D7DDC0
// Address: 0x1d7ddc0 - 0x1d7ddc8
void sub_01D7DDC0_0x1d7ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7DDC0_0x1d7ddc0");
#endif

    ctx->pc = 0x1d7ddc0u;

    // 0x1d7ddc0: 0x80b1f00  j           func_2C7C00
    ctx->pc = 0x1D7DDC0u;
    ctx->pc = 0x2C7C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7C00u, 0x1D7DDC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7DDC8u;
}
