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

// Function: sub_01CDAB90
// Address: 0x1cdab90 - 0x1cdab98
void sub_01CDAB90_0x1cdab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAB90_0x1cdab90");
#endif

    ctx->pc = 0x1cdab90u;

    // 0x1cdab90: 0x80b2924  j           func_2CA490
    ctx->pc = 0x1CDAB90u;
    ctx->pc = 0x2CA490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA490u, 0x1CDAB90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAB98u;
}
