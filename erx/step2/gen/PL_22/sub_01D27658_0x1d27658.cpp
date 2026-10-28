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

// Function: sub_01D27658
// Address: 0x1d27658 - 0x1d27660
void sub_01D27658_0x1d27658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27658_0x1d27658");
#endif

    ctx->pc = 0x1d27658u;

    // 0x1d27658: 0x80b29b0  j           func_2CA6C0
    ctx->pc = 0x1D27658u;
    ctx->pc = 0x2CA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6C0u, 0x1D27658u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D27660u;
}
