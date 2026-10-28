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

// Function: sub_01C0FF20
// Address: 0x1c0ff20 - 0x1c0ff28
void sub_01C0FF20_0x1c0ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0FF20_0x1c0ff20");
#endif

    ctx->pc = 0x1c0ff20u;

    // 0x1c0ff20: 0x80b2492  j           func_2C9248
    ctx->pc = 0x1C0FF20u;
    ctx->pc = 0x2C9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9248u, 0x1C0FF20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0FF28u;
}
