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

// Function: sub_01D3C598
// Address: 0x1d3c598 - 0x1d3c5a0
void sub_01D3C598_0x1d3c598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C598_0x1d3c598");
#endif

    ctx->pc = 0x1d3c598u;

    // 0x1d3c598: 0x80b294c  j           func_2CA530
    ctx->pc = 0x1D3C598u;
    ctx->pc = 0x2CA530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA530u, 0x1D3C598u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C5A0u;
}
