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

// Function: sub_01C0F7C8
// Address: 0x1c0f7c8 - 0x1c0f7d8
void sub_01C0F7C8_0x1c0f7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0F7C8_0x1c0f7c8");
#endif

    ctx->pc = 0x1c0f7c8u;

    // 0x1c0f7c8: 0x80cbf78  j           func_32FDE0
    ctx->pc = 0x1C0F7C8u;
    ctx->pc = 0x32FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDE0u, 0x1C0F7C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0F7D0u;
    // 0x1c0f7d0: 0x80e5244  j           func_394910
    ctx->pc = 0x1C0F7D0u;
    ctx->pc = 0x394910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394910u, 0x1C0F7D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0F7D8u;
}
