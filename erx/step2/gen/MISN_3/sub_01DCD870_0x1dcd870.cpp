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

// Function: sub_01DCD870
// Address: 0x1dcd870 - 0x1dcd880
void sub_01DCD870_0x1dcd870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCD870_0x1dcd870");
#endif

    ctx->pc = 0x1dcd870u;

    // 0x1dcd870: 0x808a13e  j           func_2284F8
    ctx->pc = 0x1DCD870u;
    ctx->pc = 0x2284F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2284F8u, 0x1DCD870u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DCD878u;
    // 0x1dcd878: 0x0  nop
    ctx->pc = 0x1dcd878u;
    // NOP
    // 0x1dcd87c: 0x0  nop
    ctx->pc = 0x1dcd87cu;
    // NOP
    ctx->pc = 0x1dcd880u;
}
