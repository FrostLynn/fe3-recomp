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

// Function: sub_01CADBC8
// Address: 0x1cadbc8 - 0x1cadbd0
void sub_01CADBC8_0x1cadbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CADBC8_0x1cadbc8");
#endif

    ctx->pc = 0x1cadbc8u;

    // 0x1cadbc8: 0x80b33e6  j           func_2CCF98
    ctx->pc = 0x1CADBC8u;
    ctx->pc = 0x2CCF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCF98u, 0x1CADBC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CADBD0u;
}
