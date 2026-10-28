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

// Function: sub_01DB1110
// Address: 0x1db1110 - 0x1db1118
void sub_01DB1110_0x1db1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1110_0x1db1110");
#endif

    ctx->pc = 0x1db1110u;

    // 0x1db1110: 0x80b2b58  j           func_2CAD60
    ctx->pc = 0x1DB1110u;
    ctx->pc = 0x2CAD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD60u, 0x1DB1110u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1118u;
}
