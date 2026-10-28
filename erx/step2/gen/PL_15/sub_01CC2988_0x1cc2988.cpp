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

// Function: sub_01CC2988
// Address: 0x1cc2988 - 0x1cc2990
void sub_01CC2988_0x1cc2988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2988_0x1cc2988");
#endif

    ctx->pc = 0x1cc2988u;

    // 0x1cc2988: 0x80b12ba  j           func_2C4AE8
    ctx->pc = 0x1CC2988u;
    ctx->pc = 0x2C4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AE8u, 0x1CC2988u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2990u;
}
