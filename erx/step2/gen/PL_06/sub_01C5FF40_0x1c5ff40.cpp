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

// Function: sub_01C5FF40
// Address: 0x1c5ff40 - 0x1c5ff48
void sub_01C5FF40_0x1c5ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5FF40_0x1c5ff40");
#endif

    ctx->pc = 0x1c5ff40u;

    // 0x1c5ff40: 0x80b29b0  j           func_2CA6C0
    ctx->pc = 0x1C5FF40u;
    ctx->pc = 0x2CA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6C0u, 0x1C5FF40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5FF48u;
}
