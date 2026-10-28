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

// Function: sub_01CB6C98
// Address: 0x1cb6c98 - 0x1cb6ca0
void sub_01CB6C98_0x1cb6c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6C98_0x1cb6c98");
#endif

    ctx->pc = 0x1cb6c98u;

    // 0x1cb6c98: 0x80b12ba  j           func_2C4AE8
    ctx->pc = 0x1CB6C98u;
    ctx->pc = 0x2C4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AE8u, 0x1CB6C98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6CA0u;
}
