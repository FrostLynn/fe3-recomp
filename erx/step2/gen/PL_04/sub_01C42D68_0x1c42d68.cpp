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

// Function: sub_01C42D68
// Address: 0x1c42d68 - 0x1c42d70
void sub_01C42D68_0x1c42d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42D68_0x1c42d68");
#endif

    ctx->pc = 0x1c42d68u;

    // 0x1c42d68: 0x80b289a  j           func_2CA268
    ctx->pc = 0x1C42D68u;
    ctx->pc = 0x2CA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA268u, 0x1C42D68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42D70u;
}
