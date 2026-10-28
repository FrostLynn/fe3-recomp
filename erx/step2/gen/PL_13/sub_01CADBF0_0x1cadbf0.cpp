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

// Function: sub_01CADBF0
// Address: 0x1cadbf0 - 0x1cadc00
void sub_01CADBF0_0x1cadbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CADBF0_0x1cadbf0");
#endif

    ctx->pc = 0x1cadbf0u;

    // 0x1cadbf0: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1CADBF0u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1CADBF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CADBF8u;
    // 0x1cadbf8: 0x0  nop
    ctx->pc = 0x1cadbf8u;
    // NOP
    // 0x1cadbfc: 0x0  nop
    ctx->pc = 0x1cadbfcu;
    // NOP
    ctx->pc = 0x1cadc00u;
}
