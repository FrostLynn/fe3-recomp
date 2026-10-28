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

// Function: sub_01C60008
// Address: 0x1c60008 - 0x1c60018
void sub_01C60008_0x1c60008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60008_0x1c60008");
#endif

    ctx->pc = 0x1c60008u;

    // 0x1c60008: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1C60008u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1C60008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C60010u;
    // 0x1c60010: 0x0  nop
    ctx->pc = 0x1c60010u;
    // NOP
    // 0x1c60014: 0x0  nop
    ctx->pc = 0x1c60014u;
    // NOP
    ctx->pc = 0x1c60018u;
}
