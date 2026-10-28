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

// Function: sub_01DB1318
// Address: 0x1db1318 - 0x1db1320
void sub_01DB1318_0x1db1318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1318_0x1db1318");
#endif

    ctx->pc = 0x1db1318u;

    // 0x1db1318: 0x80b0cd8  j           func_2C3360
    ctx->pc = 0x1DB1318u;
    ctx->pc = 0x2C3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3360u, 0x1DB1318u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1320u;
}
