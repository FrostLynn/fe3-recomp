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

// Function: sub_01DA7108
// Address: 0x1da7108 - 0x1da7110
void sub_01DA7108_0x1da7108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7108_0x1da7108");
#endif

    ctx->pc = 0x1da7108u;

    // 0x1da7108: 0x80b1816  j           func_2C6058
    ctx->pc = 0x1DA7108u;
    ctx->pc = 0x2C6058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6058u, 0x1DA7108u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7110u;
}
