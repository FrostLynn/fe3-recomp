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

// Function: sub_01D88E78
// Address: 0x1d88e78 - 0x1d88e80
void sub_01D88E78_0x1d88e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88E78_0x1d88e78");
#endif

    ctx->pc = 0x1d88e78u;

    // 0x1d88e78: 0x80b1220  j           func_2C4880
    ctx->pc = 0x1D88E78u;
    ctx->pc = 0x2C4880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4880u, 0x1D88E78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88E80u;
}
