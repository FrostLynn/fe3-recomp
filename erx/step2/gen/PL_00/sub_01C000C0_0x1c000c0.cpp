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

// Function: sub_01C000C0
// Address: 0x1c000c0 - 0x1c000d0
void sub_01C000C0_0x1c000c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C000C0_0x1c000c0");
#endif

    ctx->pc = 0x1c000c0u;

    // 0x1c000c0: 0x808136a  j           func_204DA8
    ctx->pc = 0x1C000C0u;
    ctx->pc = 0x204DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204DA8u, 0x1C000C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C000C8u;
    // 0x1c000c8: 0x810a958  j           func_42A560
    ctx->pc = 0x1C000C8u;
    ctx->pc = 0x42A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A560u, 0x1C000C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C000D0u;
}
