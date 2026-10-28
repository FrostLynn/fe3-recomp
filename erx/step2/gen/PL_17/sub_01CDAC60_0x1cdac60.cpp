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

// Function: sub_01CDAC60
// Address: 0x1cdac60 - 0x1cdac68
void sub_01CDAC60_0x1cdac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAC60_0x1cdac60");
#endif

    ctx->pc = 0x1cdac60u;

    // 0x1cdac60: 0x80b29da  j           func_2CA768
    ctx->pc = 0x1CDAC60u;
    ctx->pc = 0x2CA768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA768u, 0x1CDAC60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAC68u;
}
