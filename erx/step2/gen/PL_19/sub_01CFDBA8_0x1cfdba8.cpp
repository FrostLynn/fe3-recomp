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

// Function: sub_01CFDBA8
// Address: 0x1cfdba8 - 0x1cfdbb0
void sub_01CFDBA8_0x1cfdba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDBA8_0x1cfdba8");
#endif

    ctx->pc = 0x1cfdba8u;

    // 0x1cfdba8: 0x80b2936  j           func_2CA4D8
    ctx->pc = 0x1CFDBA8u;
    ctx->pc = 0x2CA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA4D8u, 0x1CFDBA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDBB0u;
}
