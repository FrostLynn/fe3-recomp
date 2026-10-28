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

// Function: sub_01DB11E8
// Address: 0x1db11e8 - 0x1db11f0
void sub_01DB11E8_0x1db11e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB11E8_0x1db11e8");
#endif

    ctx->pc = 0x1db11e8u;

    // 0x1db11e8: 0x80b17e4  j           func_2C5F90
    ctx->pc = 0x1DB11E8u;
    ctx->pc = 0x2C5F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5F90u, 0x1DB11E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB11F0u;
}
