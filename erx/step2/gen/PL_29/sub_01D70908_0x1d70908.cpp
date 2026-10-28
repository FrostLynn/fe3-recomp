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

// Function: sub_01D70908
// Address: 0x1d70908 - 0x1d70910
void sub_01D70908_0x1d70908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70908_0x1d70908");
#endif

    ctx->pc = 0x1d70908u;

    // 0x1d70908: 0x80b2886  j           func_2CA218
    ctx->pc = 0x1D70908u;
    ctx->pc = 0x2CA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA218u, 0x1D70908u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70910u;
}
