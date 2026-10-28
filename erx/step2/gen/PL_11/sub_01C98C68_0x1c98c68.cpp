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

// Function: sub_01C98C68
// Address: 0x1c98c68 - 0x1c98c70
void sub_01C98C68_0x1c98c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C98C68_0x1c98c68");
#endif

    ctx->pc = 0x1c98c68u;

    // 0x1c98c68: 0x80b0ec8  j           func_2C3B20
    ctx->pc = 0x1C98C68u;
    ctx->pc = 0x2C3B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B20u, 0x1C98C68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C98C70u;
}
