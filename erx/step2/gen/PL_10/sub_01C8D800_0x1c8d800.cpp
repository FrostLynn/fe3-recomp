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

// Function: sub_01C8D800
// Address: 0x1c8d800 - 0x1c8d808
void sub_01C8D800_0x1c8d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8D800_0x1c8d800");
#endif

    ctx->pc = 0x1c8d800u;

    // 0x1c8d800: 0x80b2762  j           func_2C9D88
    ctx->pc = 0x1C8D800u;
    ctx->pc = 0x2C9D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D88u, 0x1C8D800u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8D808u;
}
