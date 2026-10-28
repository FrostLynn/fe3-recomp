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

// Function: sub_01DB1050
// Address: 0x1db1050 - 0x1db1058
void sub_01DB1050_0x1db1050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1050_0x1db1050");
#endif

    ctx->pc = 0x1db1050u;

    // 0x1db1050: 0x80b0e9c  j           func_2C3A70
    ctx->pc = 0x1DB1050u;
    ctx->pc = 0x2C3A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3A70u, 0x1DB1050u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1058u;
}
