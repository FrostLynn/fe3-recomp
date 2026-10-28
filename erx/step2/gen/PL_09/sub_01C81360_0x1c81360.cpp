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

// Function: sub_01C81360
// Address: 0x1c81360 - 0x1c81368
void sub_01C81360_0x1c81360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81360_0x1c81360");
#endif

    ctx->pc = 0x1c81360u;

    // 0x1c81360: 0x80b0fc4  j           func_2C3F10
    ctx->pc = 0x1C81360u;
    ctx->pc = 0x2C3F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F10u, 0x1C81360u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81368u;
}
