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

// Function: sub_01DEAF58
// Address: 0x1deaf58 - 0x1deaf68
void sub_01DEAF58_0x1deaf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEAF58_0x1deaf58");
#endif

    ctx->pc = 0x1deaf58u;

    // 0x1deaf58: 0x80a6472  j           func_2991C8
    ctx->pc = 0x1DEAF58u;
    ctx->pc = 0x2991C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2991C8u, 0x1DEAF58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DEAF60u;
    // 0x1deaf60: 0x0  nop
    ctx->pc = 0x1deaf60u;
    // NOP
    // 0x1deaf64: 0x0  nop
    ctx->pc = 0x1deaf64u;
    // NOP
    ctx->pc = 0x1deaf68u;
}
