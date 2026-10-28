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

// Function: sub_01CB6E50
// Address: 0x1cb6e50 - 0x1cb6e58
void sub_01CB6E50_0x1cb6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6E50_0x1cb6e50");
#endif

    ctx->pc = 0x1cb6e50u;

    // 0x1cb6e50: 0x80b2066  j           func_2C8198
    ctx->pc = 0x1CB6E50u;
    ctx->pc = 0x2C8198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8198u, 0x1CB6E50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6E58u;
}
