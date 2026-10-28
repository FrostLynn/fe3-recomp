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

// Function: sub_01D51848
// Address: 0x1d51848 - 0x1d51850
void sub_01D51848_0x1d51848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D51848_0x1d51848");
#endif

    ctx->pc = 0x1d51848u;

    // 0x1d51848: 0x80b2886  j           func_2CA218
    ctx->pc = 0x1D51848u;
    ctx->pc = 0x2CA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA218u, 0x1D51848u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D51850u;
}
