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

// Function: sub_01C98D10
// Address: 0x1c98d10 - 0x1c98d18
void sub_01C98D10_0x1c98d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C98D10_0x1c98d10");
#endif

    ctx->pc = 0x1c98d10u;

    // 0x1c98d10: 0x80b2b58  j           func_2CAD60
    ctx->pc = 0x1C98D10u;
    ctx->pc = 0x2CAD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD60u, 0x1C98D10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C98D18u;
}
