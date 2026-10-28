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

// Function: sub_01D66940
// Address: 0x1d66940 - 0x1d66948
void sub_01D66940_0x1d66940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66940_0x1d66940");
#endif

    ctx->pc = 0x1d66940u;

    // 0x1d66940: 0x80b1c5a  j           func_2C7168
    ctx->pc = 0x1D66940u;
    ctx->pc = 0x2C7168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7168u, 0x1D66940u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66948u;
}
