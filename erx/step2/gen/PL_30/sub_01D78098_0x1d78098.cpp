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

// Function: sub_01D78098
// Address: 0x1d78098 - 0x1d780a0
void sub_01D78098_0x1d78098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78098_0x1d78098");
#endif

    ctx->pc = 0x1d78098u;

    // 0x1d78098: 0x80b2936  j           func_2CA4D8
    ctx->pc = 0x1D78098u;
    ctx->pc = 0x2CA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA4D8u, 0x1D78098u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D780A0u;
}
