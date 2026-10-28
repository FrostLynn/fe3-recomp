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

// Function: sub_01DB1170
// Address: 0x1db1170 - 0x1db1178
void sub_01DB1170_0x1db1170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1170_0x1db1170");
#endif

    ctx->pc = 0x1db1170u;

    // 0x1db1170: 0x80b1c14  j           func_2C7050
    ctx->pc = 0x1DB1170u;
    ctx->pc = 0x2C7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7050u, 0x1DB1170u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1178u;
}
