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

// Function: sub_01CB6E48
// Address: 0x1cb6e48 - 0x1cb6e50
void sub_01CB6E48_0x1cb6e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6E48_0x1cb6e48");
#endif

    ctx->pc = 0x1cb6e48u;

    // 0x1cb6e48: 0x80b2060  j           func_2C8180
    ctx->pc = 0x1CB6E48u;
    ctx->pc = 0x2C8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8180u, 0x1CB6E48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6E50u;
}
