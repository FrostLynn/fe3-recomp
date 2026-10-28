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

// Function: sub_01CEF918
// Address: 0x1cef918 - 0x1cef920
void sub_01CEF918_0x1cef918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF918_0x1cef918");
#endif

    ctx->pc = 0x1cef918u;

    // 0x1cef918: 0x80b0cac  j           func_2C32B0
    ctx->pc = 0x1CEF918u;
    ctx->pc = 0x2C32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C32B0u, 0x1CEF918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF920u;
}
