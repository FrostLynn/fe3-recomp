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

// Function: sub_01CCDF08
// Address: 0x1ccdf08 - 0x1ccdf18
void sub_01CCDF08_0x1ccdf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDF08_0x1ccdf08");
#endif

    ctx->pc = 0x1ccdf08u;

    // 0x1ccdf08: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1CCDF08u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1CCDF08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDF10u;
    // 0x1ccdf10: 0x0  nop
    ctx->pc = 0x1ccdf10u;
    // NOP
    // 0x1ccdf14: 0x0  nop
    ctx->pc = 0x1ccdf14u;
    // NOP
    ctx->pc = 0x1ccdf18u;
}
