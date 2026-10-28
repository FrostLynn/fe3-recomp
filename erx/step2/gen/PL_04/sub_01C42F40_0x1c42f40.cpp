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

// Function: sub_01C42F40
// Address: 0x1c42f40 - 0x1c42f50
void sub_01C42F40_0x1c42f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42F40_0x1c42f40");
#endif

    ctx->pc = 0x1c42f40u;

    // 0x1c42f40: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1C42F40u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1C42F40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42F48u;
    // 0x1c42f48: 0x0  nop
    ctx->pc = 0x1c42f48u;
    // NOP
    // 0x1c42f4c: 0x0  nop
    ctx->pc = 0x1c42f4cu;
    // NOP
    ctx->pc = 0x1c42f50u;
}
