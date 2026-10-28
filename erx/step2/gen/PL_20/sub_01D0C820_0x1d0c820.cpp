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

// Function: sub_01D0C820
// Address: 0x1d0c820 - 0x1d0c828
void sub_01D0C820_0x1d0c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C820_0x1d0c820");
#endif

    ctx->pc = 0x1d0c820u;

    // 0x1d0c820: 0x80b33ea  j           func_2CCFA8
    ctx->pc = 0x1D0C820u;
    ctx->pc = 0x2CCFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFA8u, 0x1D0C820u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C828u;
}
