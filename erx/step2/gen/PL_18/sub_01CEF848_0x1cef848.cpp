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

// Function: sub_01CEF848
// Address: 0x1cef848 - 0x1cef850
void sub_01CEF848_0x1cef848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF848_0x1cef848");
#endif

    ctx->pc = 0x1cef848u;

    // 0x1cef848: 0x80b1cfa  j           func_2C73E8
    ctx->pc = 0x1CEF848u;
    ctx->pc = 0x2C73E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C73E8u, 0x1CEF848u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF850u;
}
