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

// Function: sub_01DA7920
// Address: 0x1da7920 - 0x1da7930
void sub_01DA7920_0x1da7920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7920_0x1da7920");
#endif

    ctx->pc = 0x1da7920u;

    // 0x1da7920: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1DA7920u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1DA7920u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7928u;
    // 0x1da7928: 0x0  nop
    ctx->pc = 0x1da7928u;
    // NOP
    // 0x1da792c: 0x0  nop
    ctx->pc = 0x1da792cu;
    // NOP
    ctx->pc = 0x1da7930u;
}
