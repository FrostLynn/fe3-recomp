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

// Function: sub_01D7E228
// Address: 0x1d7e228 - 0x1d7e238
void sub_01D7E228_0x1d7e228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E228_0x1d7e228");
#endif

    ctx->pc = 0x1d7e228u;

    // 0x1d7e228: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1D7E228u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1D7E228u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7E230u;
    // 0x1d7e230: 0x0  nop
    ctx->pc = 0x1d7e230u;
    // NOP
    // 0x1d7e234: 0x0  nop
    ctx->pc = 0x1d7e234u;
    // NOP
    ctx->pc = 0x1d7e238u;
}
