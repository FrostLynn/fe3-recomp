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

// Function: sub_01D70690
// Address: 0x1d70690 - 0x1d70698
void sub_01D70690_0x1d70690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70690_0x1d70690");
#endif

    ctx->pc = 0x1d70690u;

    // 0x1d70690: 0x80b1f12  j           func_2C7C48
    ctx->pc = 0x1D70690u;
    ctx->pc = 0x2C7C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7C48u, 0x1D70690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70698u;
}
