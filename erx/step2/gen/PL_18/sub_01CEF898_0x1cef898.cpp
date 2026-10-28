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

// Function: sub_01CEF898
// Address: 0x1cef898 - 0x1cef8a0
void sub_01CEF898_0x1cef898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF898_0x1cef898");
#endif

    ctx->pc = 0x1cef898u;

    // 0x1cef898: 0x80b1622  j           func_2C5888
    ctx->pc = 0x1CEF898u;
    ctx->pc = 0x2C5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5888u, 0x1CEF898u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF8A0u;
}
