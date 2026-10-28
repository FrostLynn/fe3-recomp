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

// Function: sub_01CDAD08
// Address: 0x1cdad08 - 0x1cdad10
void sub_01CDAD08_0x1cdad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAD08_0x1cdad08");
#endif

    ctx->pc = 0x1cdad08u;

    // 0x1cdad08: 0x80b1a62  j           func_2C6988
    ctx->pc = 0x1CDAD08u;
    ctx->pc = 0x2C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6988u, 0x1CDAD08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAD10u;
}
