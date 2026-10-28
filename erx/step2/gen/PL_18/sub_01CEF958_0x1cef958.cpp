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

// Function: sub_01CEF958
// Address: 0x1cef958 - 0x1cef960
void sub_01CEF958_0x1cef958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF958_0x1cef958");
#endif

    ctx->pc = 0x1cef958u;

    // 0x1cef958: 0x80b0dac  j           func_2C36B0
    ctx->pc = 0x1CEF958u;
    ctx->pc = 0x2C36B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C36B0u, 0x1CEF958u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF960u;
}
