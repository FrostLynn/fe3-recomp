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

// Function: sub_01DCF468
// Address: 0x1dcf468 - 0x1dcf478
void sub_01DCF468_0x1dcf468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF468_0x1dcf468");
#endif

    ctx->pc = 0x1dcf468u;

    // 0x1dcf468: 0x80a6472  j           func_2991C8
    ctx->pc = 0x1DCF468u;
    ctx->pc = 0x2991C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2991C8u, 0x1DCF468u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DCF470u;
    // 0x1dcf470: 0x0  nop
    ctx->pc = 0x1dcf470u;
    // NOP
    // 0x1dcf474: 0x0  nop
    ctx->pc = 0x1dcf474u;
    // NOP
    ctx->pc = 0x1dcf478u;
}
