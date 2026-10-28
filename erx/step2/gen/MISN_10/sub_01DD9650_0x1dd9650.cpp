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

// Function: sub_01DD9650
// Address: 0x1dd9650 - 0x1dd9658
void sub_01DD9650_0x1dd9650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9650_0x1dd9650");
#endif

    ctx->pc = 0x1dd9650u;

    // 0x1dd9650: 0x80a639e  j           func_298E78
    ctx->pc = 0x1DD9650u;
    ctx->pc = 0x298E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E78u, 0x1DD9650u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD9658u;
}
