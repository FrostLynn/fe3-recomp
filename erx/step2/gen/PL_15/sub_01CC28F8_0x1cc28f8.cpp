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

// Function: sub_01CC28F8
// Address: 0x1cc28f8 - 0x1cc2900
void sub_01CC28F8_0x1cc28f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC28F8_0x1cc28f8");
#endif

    ctx->pc = 0x1cc28f8u;

    // 0x1cc28f8: 0x80b113c  j           func_2C44F0
    ctx->pc = 0x1CC28F8u;
    ctx->pc = 0x2C44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C44F0u, 0x1CC28F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2900u;
}
