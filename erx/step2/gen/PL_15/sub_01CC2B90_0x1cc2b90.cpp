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

// Function: sub_01CC2B90
// Address: 0x1cc2b90 - 0x1cc2b98
void sub_01CC2B90_0x1cc2b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2B90_0x1cc2b90");
#endif

    ctx->pc = 0x1cc2b90u;

    // 0x1cc2b90: 0x80b2242  j           func_2C8908
    ctx->pc = 0x1CC2B90u;
    ctx->pc = 0x2C8908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8908u, 0x1CC2B90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2B98u;
}
