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

// Function: sub_01CC2910
// Address: 0x1cc2910 - 0x1cc2918
void sub_01CC2910_0x1cc2910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2910_0x1cc2910");
#endif

    ctx->pc = 0x1cc2910u;

    // 0x1cc2910: 0x80b1162  j           func_2C4588
    ctx->pc = 0x1CC2910u;
    ctx->pc = 0x2C4588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4588u, 0x1CC2910u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2918u;
}
