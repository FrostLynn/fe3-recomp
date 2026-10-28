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

// Function: sub_01CDAAB0
// Address: 0x1cdaab0 - 0x1cdaab8
void sub_01CDAAB0_0x1cdaab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAAB0_0x1cdaab0");
#endif

    ctx->pc = 0x1cdaab0u;

    // 0x1cdaab0: 0x80b26a8  j           func_2C9AA0
    ctx->pc = 0x1CDAAB0u;
    ctx->pc = 0x2C9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9AA0u, 0x1CDAAB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAAB8u;
}
