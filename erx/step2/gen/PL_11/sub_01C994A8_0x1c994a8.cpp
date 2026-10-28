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

// Function: sub_01C994A8
// Address: 0x1c994a8 - 0x1c994b0
void sub_01C994A8_0x1c994a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C994A8_0x1c994a8");
#endif

    ctx->pc = 0x1c994a8u;

    // 0x1c994a8: 0x80b0f9e  j           func_2C3E78
    ctx->pc = 0x1C994A8u;
    ctx->pc = 0x2C3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E78u, 0x1C994A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C994B0u;
}
