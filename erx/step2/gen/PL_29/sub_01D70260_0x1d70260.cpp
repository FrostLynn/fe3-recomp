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

// Function: sub_01D70260
// Address: 0x1d70260 - 0x1d70268
void sub_01D70260_0x1d70260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70260_0x1d70260");
#endif

    ctx->pc = 0x1d70260u;

    // 0x1d70260: 0x80b19a6  j           func_2C6698
    ctx->pc = 0x1D70260u;
    ctx->pc = 0x2C6698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6698u, 0x1D70260u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70268u;
}
