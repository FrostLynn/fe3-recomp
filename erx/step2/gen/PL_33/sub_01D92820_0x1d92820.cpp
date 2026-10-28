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

// Function: sub_01D92820
// Address: 0x1d92820 - 0x1d92830
void sub_01D92820_0x1d92820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92820_0x1d92820");
#endif

    ctx->pc = 0x1d92820u;

    // 0x1d92820: 0x80d9758  j           func_365D60
    ctx->pc = 0x1D92820u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1D92820u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92828u;
    // 0x1d92828: 0x0  nop
    ctx->pc = 0x1d92828u;
    // NOP
    // 0x1d9282c: 0x0  nop
    ctx->pc = 0x1d9282cu;
    // NOP
    ctx->pc = 0x1d92830u;
}
