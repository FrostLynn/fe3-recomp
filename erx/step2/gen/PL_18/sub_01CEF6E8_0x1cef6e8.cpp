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

// Function: sub_01CEF6E8
// Address: 0x1cef6e8 - 0x1cef6f0
void sub_01CEF6E8_0x1cef6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF6E8_0x1cef6e8");
#endif

    ctx->pc = 0x1cef6e8u;

    // 0x1cef6e8: 0x80b0c54  j           func_2C3150
    ctx->pc = 0x1CEF6E8u;
    ctx->pc = 0x2C3150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3150u, 0x1CEF6E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF6F0u;
}
