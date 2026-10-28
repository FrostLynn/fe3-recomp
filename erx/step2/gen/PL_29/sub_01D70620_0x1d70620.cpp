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

// Function: sub_01D70620
// Address: 0x1d70620 - 0x1d70628
void sub_01D70620_0x1d70620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70620_0x1d70620");
#endif

    ctx->pc = 0x1d70620u;

    // 0x1d70620: 0x80b1dd8  j           func_2C7760
    ctx->pc = 0x1D70620u;
    ctx->pc = 0x2C7760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7760u, 0x1D70620u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70628u;
}
