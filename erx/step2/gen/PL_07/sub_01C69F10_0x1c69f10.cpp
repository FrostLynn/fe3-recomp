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

// Function: sub_01C69F10
// Address: 0x1c69f10 - 0x1c69f18
void sub_01C69F10_0x1c69f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C69F10_0x1c69f10");
#endif

    ctx->pc = 0x1c69f10u;

    // 0x1c69f10: 0x80b0b42  j           func_2C2D08
    ctx->pc = 0x1C69F10u;
    ctx->pc = 0x2C2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D08u, 0x1C69F10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C69F18u;
}
