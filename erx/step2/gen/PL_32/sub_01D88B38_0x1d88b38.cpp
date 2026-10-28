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

// Function: sub_01D88B38
// Address: 0x1d88b38 - 0x1d88b40
void sub_01D88B38_0x1d88b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88B38_0x1d88b38");
#endif

    ctx->pc = 0x1d88b38u;

    // 0x1d88b38: 0x80b18d8  j           func_2C6360
    ctx->pc = 0x1D88B38u;
    ctx->pc = 0x2C6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6360u, 0x1D88B38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88B40u;
}
