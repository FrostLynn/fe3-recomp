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

// Function: sub_01CFDD60
// Address: 0x1cfdd60 - 0x1cfdd70
void sub_01CFDD60_0x1cfdd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDD60_0x1cfdd60");
#endif

    ctx->pc = 0x1cfdd60u;

    // 0x1cfdd60: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1CFDD60u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1CFDD60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDD68u;
    // 0x1cfdd68: 0x0  nop
    ctx->pc = 0x1cfdd68u;
    // NOP
    // 0x1cfdd6c: 0x0  nop
    ctx->pc = 0x1cfdd6cu;
    // NOP
    ctx->pc = 0x1cfdd70u;
}
