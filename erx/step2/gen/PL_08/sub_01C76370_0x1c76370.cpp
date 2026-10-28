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

// Function: sub_01C76370
// Address: 0x1c76370 - 0x1c76378
void sub_01C76370_0x1c76370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76370_0x1c76370");
#endif

    ctx->pc = 0x1c76370u;

    // 0x1c76370: 0x80b2a3a  j           func_2CA8E8
    ctx->pc = 0x1C76370u;
    ctx->pc = 0x2CA8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8E8u, 0x1C76370u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C76378u;
}
