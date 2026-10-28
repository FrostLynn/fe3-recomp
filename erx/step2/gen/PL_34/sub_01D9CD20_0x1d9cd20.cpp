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

// Function: sub_01D9CD20
// Address: 0x1d9cd20 - 0x1d9cd28
void sub_01D9CD20_0x1d9cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9CD20_0x1d9cd20");
#endif

    ctx->pc = 0x1d9cd20u;

    // 0x1d9cd20: 0x80b0cd8  j           func_2C3360
    ctx->pc = 0x1D9CD20u;
    ctx->pc = 0x2C3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3360u, 0x1D9CD20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9CD28u;
}
