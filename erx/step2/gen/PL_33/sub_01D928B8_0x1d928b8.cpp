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

// Function: sub_01D928B8
// Address: 0x1d928b8 - 0x1d928c8
void sub_01D928B8_0x1d928b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D928B8_0x1d928b8");
#endif

    ctx->pc = 0x1d928b8u;

    // 0x1d928b8: 0x80b32b8  j           func_2CCAE0
    ctx->pc = 0x1D928B8u;
    ctx->pc = 0x2CCAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCAE0u, 0x1D928B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D928C0u;
    // 0x1d928c0: 0x810a958  j           func_42A560
    ctx->pc = 0x1D928C0u;
    ctx->pc = 0x42A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A560u, 0x1D928C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D928C8u;
}
