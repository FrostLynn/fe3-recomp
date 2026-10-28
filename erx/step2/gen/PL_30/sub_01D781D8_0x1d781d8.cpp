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

// Function: sub_01D781D8
// Address: 0x1d781d8 - 0x1d781e0
void sub_01D781D8_0x1d781d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D781D8_0x1d781d8");
#endif

    ctx->pc = 0x1d781d8u;

    // 0x1d781d8: 0x80b2bd0  j           func_2CAF40
    ctx->pc = 0x1D781D8u;
    ctx->pc = 0x2CAF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF40u, 0x1D781D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D781E0u;
}
