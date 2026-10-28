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

// Function: sub_01DC4500
// Address: 0x1dc4500 - 0x1dc4508
void sub_01DC4500_0x1dc4500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4500_0x1dc4500");
#endif

    ctx->pc = 0x1dc4500u;

    // 0x1dc4500: 0x80b29b0  j           func_2CA6C0
    ctx->pc = 0x1DC4500u;
    ctx->pc = 0x2CA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6C0u, 0x1DC4500u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC4508u;
}
