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

// Function: sub_01CEF718
// Address: 0x1cef718 - 0x1cef720
void sub_01CEF718_0x1cef718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF718_0x1cef718");
#endif

    ctx->pc = 0x1cef718u;

    // 0x1cef718: 0x80b0caa  j           func_2C32A8
    ctx->pc = 0x1CEF718u;
    ctx->pc = 0x2C32A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C32A8u, 0x1CEF718u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF720u;
}
