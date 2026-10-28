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

// Function: sub_01DB1350
// Address: 0x1db1350 - 0x1db1358
void sub_01DB1350_0x1db1350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1350_0x1db1350");
#endif

    ctx->pc = 0x1db1350u;

    // 0x1db1350: 0x80b0fd6  j           func_2C3F58
    ctx->pc = 0x1DB1350u;
    ctx->pc = 0x2C3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F58u, 0x1DB1350u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1358u;
}
