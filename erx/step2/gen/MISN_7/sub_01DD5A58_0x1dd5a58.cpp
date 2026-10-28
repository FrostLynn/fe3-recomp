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

// Function: sub_01DD5A58
// Address: 0x1dd5a58 - 0x1dd5a68
void sub_01DD5A58_0x1dd5a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD5A58_0x1dd5a58");
#endif

    ctx->pc = 0x1dd5a58u;

    // 0x1dd5a58: 0x80a6472  j           func_2991C8
    ctx->pc = 0x1DD5A58u;
    ctx->pc = 0x2991C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2991C8u, 0x1DD5A58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD5A60u;
    // 0x1dd5a60: 0x0  nop
    ctx->pc = 0x1dd5a60u;
    // NOP
    // 0x1dd5a64: 0x0  nop
    ctx->pc = 0x1dd5a64u;
    // NOP
    ctx->pc = 0x1dd5a68u;
}
