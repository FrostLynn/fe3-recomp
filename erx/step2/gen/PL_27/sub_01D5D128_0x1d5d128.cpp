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

// Function: sub_01D5D128
// Address: 0x1d5d128 - 0x1d5d130
void sub_01D5D128_0x1d5d128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D128_0x1d5d128");
#endif

    ctx->pc = 0x1d5d128u;

    // 0x1d5d128: 0x80b0d70  j           func_2C35C0
    ctx->pc = 0x1D5D128u;
    ctx->pc = 0x2C35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C35C0u, 0x1D5D128u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D130u;
}
