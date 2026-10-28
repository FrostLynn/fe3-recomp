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

// Function: sub_01D88CA0
// Address: 0x1d88ca0 - 0x1d88ca8
void sub_01D88CA0_0x1d88ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88CA0_0x1d88ca0");
#endif

    ctx->pc = 0x1d88ca0u;

    // 0x1d88ca0: 0x80b1672  j           func_2C59C8
    ctx->pc = 0x1D88CA0u;
    ctx->pc = 0x2C59C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C59C8u, 0x1D88CA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88CA8u;
}
