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

// Function: sub_01DBBD08
// Address: 0x1dbbd08 - 0x1dbbd18
void sub_01DBBD08_0x1dbbd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBD08_0x1dbbd08");
#endif

    ctx->pc = 0x1dbbd08u;

    // 0x1dbbd08: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1DBBD08u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1DBBD08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBD10u;
    // 0x1dbbd10: 0x0  nop
    ctx->pc = 0x1dbbd10u;
    // NOP
    // 0x1dbbd14: 0x0  nop
    ctx->pc = 0x1dbbd14u;
    // NOP
    ctx->pc = 0x1dbbd18u;
}
