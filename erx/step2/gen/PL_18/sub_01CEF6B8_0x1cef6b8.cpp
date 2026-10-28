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

// Function: sub_01CEF6B8
// Address: 0x1cef6b8 - 0x1cef6c0
void sub_01CEF6B8_0x1cef6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF6B8_0x1cef6b8");
#endif

    ctx->pc = 0x1cef6b8u;

    // 0x1cef6b8: 0x80b0f36  j           func_2C3CD8
    ctx->pc = 0x1CEF6B8u;
    ctx->pc = 0x2C3CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3CD8u, 0x1CEF6B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF6C0u;
}
