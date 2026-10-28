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

// Function: sub_01CCDA08
// Address: 0x1ccda08 - 0x1ccda10
void sub_01CCDA08_0x1ccda08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDA08_0x1ccda08");
#endif

    ctx->pc = 0x1ccda08u;

    // 0x1ccda08: 0x80b14aa  j           func_2C52A8
    ctx->pc = 0x1CCDA08u;
    ctx->pc = 0x2C52A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52A8u, 0x1CCDA08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDA10u;
}
