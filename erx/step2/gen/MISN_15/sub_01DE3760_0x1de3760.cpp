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

// Function: sub_01DE3760
// Address: 0x1de3760 - 0x1de3768
void sub_01DE3760_0x1de3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3760_0x1de3760");
#endif

    ctx->pc = 0x1de3760u;

    // 0x1de3760: 0x80a63fa  j           func_298FE8
    ctx->pc = 0x1DE3760u;
    ctx->pc = 0x298FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298FE8u, 0x1DE3760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE3768u;
}
