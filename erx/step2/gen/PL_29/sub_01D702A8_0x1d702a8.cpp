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

// Function: sub_01D702A8
// Address: 0x1d702a8 - 0x1d702b0
void sub_01D702A8_0x1d702a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D702A8_0x1d702a8");
#endif

    ctx->pc = 0x1d702a8u;

    // 0x1d702a8: 0x80b17e4  j           func_2C5F90
    ctx->pc = 0x1D702A8u;
    ctx->pc = 0x2C5F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5F90u, 0x1D702A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D702B0u;
}
