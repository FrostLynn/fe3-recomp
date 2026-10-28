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

// Function: sub_01CDAB60
// Address: 0x1cdab60 - 0x1cdab68
void sub_01CDAB60_0x1cdab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAB60_0x1cdab60");
#endif

    ctx->pc = 0x1cdab60u;

    // 0x1cdab60: 0x80b289a  j           func_2CA268
    ctx->pc = 0x1CDAB60u;
    ctx->pc = 0x2CA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA268u, 0x1CDAB60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAB68u;
}
