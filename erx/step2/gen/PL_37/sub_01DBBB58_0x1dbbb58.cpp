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

// Function: sub_01DBBB58
// Address: 0x1dbbb58 - 0x1dbbb60
void sub_01DBBB58_0x1dbbb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBB58_0x1dbbb58");
#endif

    ctx->pc = 0x1dbbb58u;

    // 0x1dbbb58: 0x80b1412  j           func_2C5048
    ctx->pc = 0x1DBBB58u;
    ctx->pc = 0x2C5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5048u, 0x1DBBB58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBB60u;
}
