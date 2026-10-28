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

// Function: sub_01D3C638
// Address: 0x1d3c638 - 0x1d3c640
void sub_01D3C638_0x1d3c638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C638_0x1d3c638");
#endif

    ctx->pc = 0x1d3c638u;

    // 0x1d3c638: 0x80b2960  j           func_2CA580
    ctx->pc = 0x1D3C638u;
    ctx->pc = 0x2CA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA580u, 0x1D3C638u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C640u;
}
