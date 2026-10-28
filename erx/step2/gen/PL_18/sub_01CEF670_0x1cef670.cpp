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

// Function: sub_01CEF670
// Address: 0x1cef670 - 0x1cef678
void sub_01CEF670_0x1cef670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF670_0x1cef670");
#endif

    ctx->pc = 0x1cef670u;

    // 0x1cef670: 0x80b0eae  j           func_2C3AB8
    ctx->pc = 0x1CEF670u;
    ctx->pc = 0x2C3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3AB8u, 0x1CEF670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF678u;
}
