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

// Function: sub_01CCDC80
// Address: 0x1ccdc80 - 0x1ccdc88
void sub_01CCDC80_0x1ccdc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDC80_0x1ccdc80");
#endif

    ctx->pc = 0x1ccdc80u;

    // 0x1ccdc80: 0x80b25c6  j           func_2C9718
    ctx->pc = 0x1CCDC80u;
    ctx->pc = 0x2C9718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9718u, 0x1CCDC80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDC88u;
}
