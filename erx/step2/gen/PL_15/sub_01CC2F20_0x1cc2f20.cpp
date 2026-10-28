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

// Function: sub_01CC2F20
// Address: 0x1cc2f20 - 0x1cc2f30
void sub_01CC2F20_0x1cc2f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2F20_0x1cc2f20");
#endif

    ctx->pc = 0x1cc2f20u;

    // 0x1cc2f20: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1CC2F20u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1CC2F20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2F28u;
    // 0x1cc2f28: 0x0  nop
    ctx->pc = 0x1cc2f28u;
    // NOP
    // 0x1cc2f2c: 0x0  nop
    ctx->pc = 0x1cc2f2cu;
    // NOP
    ctx->pc = 0x1cc2f30u;
}
