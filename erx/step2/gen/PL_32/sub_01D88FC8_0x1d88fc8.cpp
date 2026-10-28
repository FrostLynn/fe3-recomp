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

// Function: sub_01D88FC8
// Address: 0x1d88fc8 - 0x1d88fd0
void sub_01D88FC8_0x1d88fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88FC8_0x1d88fc8");
#endif

    ctx->pc = 0x1d88fc8u;

    // 0x1d88fc8: 0x80b1f10  j           func_2C7C40
    ctx->pc = 0x1D88FC8u;
    ctx->pc = 0x2C7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7C40u, 0x1D88FC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88FD0u;
}
