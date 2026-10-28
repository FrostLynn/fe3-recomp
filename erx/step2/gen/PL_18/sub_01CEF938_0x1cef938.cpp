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

// Function: sub_01CEF938
// Address: 0x1cef938 - 0x1cef940
void sub_01CEF938_0x1cef938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF938_0x1cef938");
#endif

    ctx->pc = 0x1cef938u;

    // 0x1cef938: 0x80b0d1c  j           func_2C3470
    ctx->pc = 0x1CEF938u;
    ctx->pc = 0x2C3470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3470u, 0x1CEF938u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF940u;
}
