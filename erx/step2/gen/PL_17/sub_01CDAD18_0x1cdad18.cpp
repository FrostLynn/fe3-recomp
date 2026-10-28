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

// Function: sub_01CDAD18
// Address: 0x1cdad18 - 0x1cdad20
void sub_01CDAD18_0x1cdad18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAD18_0x1cdad18");
#endif

    ctx->pc = 0x1cdad18u;

    // 0x1cdad18: 0x80b1aa6  j           func_2C6A98
    ctx->pc = 0x1CDAD18u;
    ctx->pc = 0x2C6A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6A98u, 0x1CDAD18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAD20u;
}
