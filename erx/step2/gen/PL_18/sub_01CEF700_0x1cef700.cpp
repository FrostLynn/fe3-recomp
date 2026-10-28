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

// Function: sub_01CEF700
// Address: 0x1cef700 - 0x1cef708
void sub_01CEF700_0x1cef700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF700_0x1cef700");
#endif

    ctx->pc = 0x1cef700u;

    // 0x1cef700: 0x80b0c74  j           func_2C31D0
    ctx->pc = 0x1CEF700u;
    ctx->pc = 0x2C31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C31D0u, 0x1CEF700u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF708u;
}
