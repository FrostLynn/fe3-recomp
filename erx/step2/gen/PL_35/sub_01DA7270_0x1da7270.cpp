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

// Function: sub_01DA7270
// Address: 0x1da7270 - 0x1da7278
void sub_01DA7270_0x1da7270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7270_0x1da7270");
#endif

    ctx->pc = 0x1da7270u;

    // 0x1da7270: 0x80b0fc2  j           func_2C3F08
    ctx->pc = 0x1DA7270u;
    ctx->pc = 0x2C3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F08u, 0x1DA7270u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7278u;
}
