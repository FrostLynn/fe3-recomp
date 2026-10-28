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

// Function: sub_01DE1980
// Address: 0x1de1980 - 0x1de1990
void sub_01DE1980_0x1de1980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1980_0x1de1980");
#endif

    ctx->pc = 0x1de1980u;

    // 0x1de1980: 0x80a620e  j           func_298838
    ctx->pc = 0x1DE1980u;
    ctx->pc = 0x298838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298838u, 0x1DE1980u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE1988u;
    // 0x1de1988: 0x0  nop
    ctx->pc = 0x1de1988u;
    // NOP
    // 0x1de198c: 0x0  nop
    ctx->pc = 0x1de198cu;
    // NOP
    ctx->pc = 0x1de1990u;
}
