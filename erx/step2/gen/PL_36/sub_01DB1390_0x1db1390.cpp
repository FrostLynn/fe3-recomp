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

// Function: sub_01DB1390
// Address: 0x1db1390 - 0x1db1398
void sub_01DB1390_0x1db1390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1390_0x1db1390");
#endif

    ctx->pc = 0x1db1390u;

    // 0x1db1390: 0x80b1026  j           func_2C4098
    ctx->pc = 0x1DB1390u;
    ctx->pc = 0x2C4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4098u, 0x1DB1390u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1398u;
}
