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

// Function: sub_01DA7508
// Address: 0x1da7508 - 0x1da7510
void sub_01DA7508_0x1da7508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7508_0x1da7508");
#endif

    ctx->pc = 0x1da7508u;

    // 0x1da7508: 0x80b1f5e  j           func_2C7D78
    ctx->pc = 0x1DA7508u;
    ctx->pc = 0x2C7D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7D78u, 0x1DA7508u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7510u;
}
