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

// Function: sub_01C42A18
// Address: 0x1c42a18 - 0x1c42a20
void sub_01C42A18_0x1c42a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42A18_0x1c42a18");
#endif

    ctx->pc = 0x1c42a18u;

    // 0x1c42a18: 0x80b14aa  j           func_2C52A8
    ctx->pc = 0x1C42A18u;
    ctx->pc = 0x2C52A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52A8u, 0x1C42A18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42A20u;
}
