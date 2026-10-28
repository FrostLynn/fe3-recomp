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

// Function: sub_01C0F980
// Address: 0x1c0f980 - 0x1c0f988
void sub_01C0F980_0x1c0f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0F980_0x1c0f980");
#endif

    ctx->pc = 0x1c0f980u;

    // 0x1c0f980: 0x80b1c44  j           func_2C7110
    ctx->pc = 0x1C0F980u;
    ctx->pc = 0x2C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7110u, 0x1C0F980u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0F988u;
}
