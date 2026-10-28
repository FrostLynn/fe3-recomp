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

// Function: sub_01DC4360
// Address: 0x1dc4360 - 0x1dc4368
void sub_01DC4360_0x1dc4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4360_0x1dc4360");
#endif

    ctx->pc = 0x1dc4360u;

    // 0x1dc4360: 0x80b164a  j           func_2C5928
    ctx->pc = 0x1DC4360u;
    ctx->pc = 0x2C5928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5928u, 0x1DC4360u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC4368u;
}
