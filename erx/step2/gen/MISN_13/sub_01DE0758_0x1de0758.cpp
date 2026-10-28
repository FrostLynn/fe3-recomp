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

// Function: sub_01DE0758
// Address: 0x1de0758 - 0x1de0768
void sub_01DE0758_0x1de0758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0758_0x1de0758");
#endif

    ctx->pc = 0x1de0758u;

    // 0x1de0758: 0x80a61c6  j           func_298718
    ctx->pc = 0x1DE0758u;
    ctx->pc = 0x298718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298718u, 0x1DE0758u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE0760u;
    // 0x1de0760: 0x0  nop
    ctx->pc = 0x1de0760u;
    // NOP
    // 0x1de0764: 0x0  nop
    ctx->pc = 0x1de0764u;
    // NOP
    ctx->pc = 0x1de0768u;
}
