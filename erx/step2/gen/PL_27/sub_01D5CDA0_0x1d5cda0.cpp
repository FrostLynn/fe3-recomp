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

// Function: sub_01D5CDA0
// Address: 0x1d5cda0 - 0x1d5cda8
void sub_01D5CDA0_0x1d5cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CDA0_0x1d5cda0");
#endif

    ctx->pc = 0x1d5cda0u;

    // 0x1d5cda0: 0x8088afc  j           func_222BF0
    ctx->pc = 0x1D5CDA0u;
    ctx->pc = 0x222BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222BF0u, 0x1D5CDA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CDA8u;
}
