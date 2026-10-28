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

// Function: sub_01DD6C68
// Address: 0x1dd6c68 - 0x1dd6c70
void sub_01DD6C68_0x1dd6c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD6C68_0x1dd6c68");
#endif

    ctx->pc = 0x1dd6c68u;

    // 0x1dd6c68: 0x80a6250  j           func_298940
    ctx->pc = 0x1DD6C68u;
    ctx->pc = 0x298940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298940u, 0x1DD6C68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD6C70u;
}
