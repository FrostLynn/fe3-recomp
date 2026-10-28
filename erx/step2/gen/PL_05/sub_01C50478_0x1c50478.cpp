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

// Function: sub_01C50478
// Address: 0x1c50478 - 0x1c50488
void sub_01C50478_0x1c50478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50478_0x1c50478");
#endif

    ctx->pc = 0x1c50478u;

    // 0x1c50478: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1C50478u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1C50478u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C50480u;
    // 0x1c50480: 0x0  nop
    ctx->pc = 0x1c50480u;
    // NOP
    // 0x1c50484: 0x0  nop
    ctx->pc = 0x1c50484u;
    // NOP
    ctx->pc = 0x1c50488u;
}
