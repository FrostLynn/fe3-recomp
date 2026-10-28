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

// Function: sub_01DBBC90
// Address: 0x1dbbc90 - 0x1dbbc98
void sub_01DBBC90_0x1dbbc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBC90_0x1dbbc90");
#endif

    ctx->pc = 0x1dbbc90u;

    // 0x1dbbc90: 0x80a9618  j           func_2A5860
    ctx->pc = 0x1DBBC90u;
    ctx->pc = 0x2A5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5860u, 0x1DBBC90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBC98u;
}
