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

// Function: sub_01D5D138
// Address: 0x1d5d138 - 0x1d5d140
void sub_01D5D138_0x1d5d138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D138_0x1d5d138");
#endif

    ctx->pc = 0x1d5d138u;

    // 0x1d5d138: 0x80b0fae  j           func_2C3EB8
    ctx->pc = 0x1D5D138u;
    ctx->pc = 0x2C3EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3EB8u, 0x1D5D138u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D140u;
}
