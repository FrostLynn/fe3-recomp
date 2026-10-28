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

// Function: sub_01D70648
// Address: 0x1d70648 - 0x1d70650
void sub_01D70648_0x1d70648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70648_0x1d70648");
#endif

    ctx->pc = 0x1d70648u;

    // 0x1d70648: 0x80b1e12  j           func_2C7848
    ctx->pc = 0x1D70648u;
    ctx->pc = 0x2C7848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7848u, 0x1D70648u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70650u;
}
