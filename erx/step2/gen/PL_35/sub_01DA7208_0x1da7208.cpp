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

// Function: sub_01DA7208
// Address: 0x1da7208 - 0x1da7210
void sub_01DA7208_0x1da7208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7208_0x1da7208");
#endif

    ctx->pc = 0x1da7208u;

    // 0x1da7208: 0x80b176e  j           func_2C5DB8
    ctx->pc = 0x1DA7208u;
    ctx->pc = 0x2C5DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5DB8u, 0x1DA7208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7210u;
}
