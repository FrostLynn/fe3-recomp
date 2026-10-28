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

// Function: sub_01D27730
// Address: 0x1d27730 - 0x1d27740
void sub_01D27730_0x1d27730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27730_0x1d27730");
#endif

    ctx->pc = 0x1d27730u;

    // 0x1d27730: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1D27730u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1D27730u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D27738u;
    // 0x1d27738: 0x0  nop
    ctx->pc = 0x1d27738u;
    // NOP
    // 0x1d2773c: 0x0  nop
    ctx->pc = 0x1d2773cu;
    // NOP
    ctx->pc = 0x1d27740u;
}
