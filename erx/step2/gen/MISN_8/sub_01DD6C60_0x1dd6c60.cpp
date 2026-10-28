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

// Function: sub_01DD6C60
// Address: 0x1dd6c60 - 0x1dd6c68
void sub_01DD6C60_0x1dd6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD6C60_0x1dd6c60");
#endif

    ctx->pc = 0x1dd6c60u;

    // 0x1dd6c60: 0x8088b02  j           func_222C08
    ctx->pc = 0x1DD6C60u;
    ctx->pc = 0x222C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222C08u, 0x1DD6C60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD6C68u;
}
