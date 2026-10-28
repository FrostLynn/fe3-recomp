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

// Function: sub_01C8CFB0
// Address: 0x1c8cfb0 - 0x1c8cfc0
void sub_01C8CFB0_0x1c8cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8CFB0_0x1c8cfb0");
#endif

    ctx->pc = 0x1c8cfb0u;

    // 0x1c8cfb0: 0x80b30d0  j           func_2CC340
    ctx->pc = 0x1C8CFB0u;
    ctx->pc = 0x2CC340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC340u, 0x1C8CFB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8CFB8u;
    // 0x1c8cfb8: 0x810a958  j           func_42A560
    ctx->pc = 0x1C8CFB8u;
    ctx->pc = 0x42A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A560u, 0x1C8CFB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8CFC0u;
}
