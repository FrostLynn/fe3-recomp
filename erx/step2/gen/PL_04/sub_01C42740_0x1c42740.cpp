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

// Function: sub_01C42740
// Address: 0x1c42740 - 0x1c42748
void sub_01C42740_0x1c42740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42740_0x1c42740");
#endif

    ctx->pc = 0x1c42740u;

    // 0x1c42740: 0x80b1cfa  j           func_2C73E8
    ctx->pc = 0x1C42740u;
    ctx->pc = 0x2C73E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C73E8u, 0x1C42740u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42748u;
}
