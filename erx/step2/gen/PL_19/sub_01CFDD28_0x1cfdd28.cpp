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

// Function: sub_01CFDD28
// Address: 0x1cfdd28 - 0x1cfdd30
void sub_01CFDD28_0x1cfdd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDD28_0x1cfdd28");
#endif

    ctx->pc = 0x1cfdd28u;

    // 0x1cfdd28: 0x808d80c  j           func_236030
    ctx->pc = 0x1CFDD28u;
    ctx->pc = 0x236030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236030u, 0x1CFDD28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDD30u;
}
