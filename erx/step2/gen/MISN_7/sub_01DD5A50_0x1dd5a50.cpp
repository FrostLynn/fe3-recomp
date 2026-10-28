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

// Function: sub_01DD5A50
// Address: 0x1dd5a50 - 0x1dd5a58
void sub_01DD5A50_0x1dd5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD5A50_0x1dd5a50");
#endif

    ctx->pc = 0x1dd5a50u;

    // 0x1dd5a50: 0x80a6304  j           func_298C10
    ctx->pc = 0x1DD5A50u;
    ctx->pc = 0x298C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298C10u, 0x1DD5A50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD5A58u;
}
