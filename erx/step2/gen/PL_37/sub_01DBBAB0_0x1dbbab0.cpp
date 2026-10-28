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

// Function: sub_01DBBAB0
// Address: 0x1dbbab0 - 0x1dbbab8
void sub_01DBBAB0_0x1dbbab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBAB0_0x1dbbab0");
#endif

    ctx->pc = 0x1dbbab0u;

    // 0x1dbbab0: 0x80b1624  j           func_2C5890
    ctx->pc = 0x1DBBAB0u;
    ctx->pc = 0x2C5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5890u, 0x1DBBAB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBAB8u;
}
