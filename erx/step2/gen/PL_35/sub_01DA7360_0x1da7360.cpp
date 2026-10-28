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

// Function: sub_01DA7360
// Address: 0x1da7360 - 0x1da7368
void sub_01DA7360_0x1da7360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7360_0x1da7360");
#endif

    ctx->pc = 0x1da7360u;

    // 0x1da7360: 0x80b11b0  j           func_2C46C0
    ctx->pc = 0x1DA7360u;
    ctx->pc = 0x2C46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46C0u, 0x1DA7360u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7368u;
}
