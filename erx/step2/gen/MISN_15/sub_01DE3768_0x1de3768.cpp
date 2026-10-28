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

// Function: sub_01DE3768
// Address: 0x1de3768 - 0x1de3778
void sub_01DE3768_0x1de3768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3768_0x1de3768");
#endif

    ctx->pc = 0x1de3768u;

    // 0x1de3768: 0x80a63c2  j           func_298F08
    ctx->pc = 0x1DE3768u;
    ctx->pc = 0x298F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298F08u, 0x1DE3768u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE3770u;
    // 0x1de3770: 0x0  nop
    ctx->pc = 0x1de3770u;
    // NOP
    // 0x1de3774: 0x0  nop
    ctx->pc = 0x1de3774u;
    // NOP
    ctx->pc = 0x1de3778u;
}
