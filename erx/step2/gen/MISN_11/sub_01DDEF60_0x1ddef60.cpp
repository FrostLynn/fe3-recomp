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

// Function: sub_01DDEF60
// Address: 0x1ddef60 - 0x1ddef70
void sub_01DDEF60_0x1ddef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDEF60_0x1ddef60");
#endif

    ctx->pc = 0x1ddef60u;

    // 0x1ddef60: 0x808a13e  j           func_2284F8
    ctx->pc = 0x1DDEF60u;
    ctx->pc = 0x2284F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2284F8u, 0x1DDEF60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DDEF68u;
    // 0x1ddef68: 0x0  nop
    ctx->pc = 0x1ddef68u;
    // NOP
    // 0x1ddef6c: 0x0  nop
    ctx->pc = 0x1ddef6cu;
    // NOP
    ctx->pc = 0x1ddef70u;
}
