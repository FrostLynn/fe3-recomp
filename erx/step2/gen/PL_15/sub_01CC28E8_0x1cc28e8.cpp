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

// Function: sub_01CC28E8
// Address: 0x1cc28e8 - 0x1cc28f0
void sub_01CC28E8_0x1cc28e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC28E8_0x1cc28e8");
#endif

    ctx->pc = 0x1cc28e8u;

    // 0x1cc28e8: 0x80b1118  j           func_2C4460
    ctx->pc = 0x1CC28E8u;
    ctx->pc = 0x2C4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4460u, 0x1CC28E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC28F0u;
}
