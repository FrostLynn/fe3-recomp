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

// Function: sub_01DCBB88
// Address: 0x1dcbb88 - 0x1dcbb98
void sub_01DCBB88_0x1dcbb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBB88_0x1dcbb88");
#endif

    ctx->pc = 0x1dcbb88u;

    // 0x1dcbb88: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1DCBB88u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1DCBB88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DCBB90u;
    // 0x1dcbb90: 0x0  nop
    ctx->pc = 0x1dcbb90u;
    // NOP
    // 0x1dcbb94: 0x0  nop
    ctx->pc = 0x1dcbb94u;
    // NOP
    ctx->pc = 0x1dcbb98u;
}
