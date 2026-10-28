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

// Function: sub_01D67078
// Address: 0x1d67078 - 0x1d67080
void sub_01D67078_0x1d67078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67078_0x1d67078");
#endif

    ctx->pc = 0x1d67078u;

    // 0x1d67078: 0x80b0f9c  j           func_2C3E70
    ctx->pc = 0x1D67078u;
    ctx->pc = 0x2C3E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E70u, 0x1D67078u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D67080u;
}
