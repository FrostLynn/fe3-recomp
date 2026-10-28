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

// Function: sub_01CC2BD0
// Address: 0x1cc2bd0 - 0x1cc2bd8
void sub_01CC2BD0_0x1cc2bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2BD0_0x1cc2bd0");
#endif

    ctx->pc = 0x1cc2bd0u;

    // 0x1cc2bd0: 0x80b2386  j           func_2C8E18
    ctx->pc = 0x1CC2BD0u;
    ctx->pc = 0x2C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E18u, 0x1CC2BD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2BD8u;
}
