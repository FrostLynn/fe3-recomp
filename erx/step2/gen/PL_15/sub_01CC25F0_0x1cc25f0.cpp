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

// Function: sub_01CC25F0
// Address: 0x1cc25f0 - 0x1cc25f8
void sub_01CC25F0_0x1cc25f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC25F0_0x1cc25f0");
#endif

    ctx->pc = 0x1cc25f0u;

    // 0x1cc25f0: 0x80b0c8e  j           func_2C3238
    ctx->pc = 0x1CC25F0u;
    ctx->pc = 0x2C3238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3238u, 0x1CC25F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC25F8u;
}
