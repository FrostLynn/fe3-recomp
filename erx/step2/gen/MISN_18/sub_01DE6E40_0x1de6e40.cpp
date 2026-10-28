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

// Function: sub_01DE6E40
// Address: 0x1de6e40 - 0x1de6e48
void sub_01DE6E40_0x1de6e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE6E40_0x1de6e40");
#endif

    ctx->pc = 0x1de6e40u;

    // 0x1de6e40: 0x808715e  j           func_21C578
    ctx->pc = 0x1DE6E40u;
    ctx->pc = 0x21C578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C578u, 0x1DE6E40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE6E48u;
}
