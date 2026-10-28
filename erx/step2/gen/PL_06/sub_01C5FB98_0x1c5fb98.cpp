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

// Function: sub_01C5FB98
// Address: 0x1c5fb98 - 0x1c5fba0
void sub_01C5FB98_0x1c5fb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5FB98_0x1c5fb98");
#endif

    ctx->pc = 0x1c5fb98u;

    // 0x1c5fb98: 0x80b1e8a  j           func_2C7A28
    ctx->pc = 0x1C5FB98u;
    ctx->pc = 0x2C7A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7A28u, 0x1C5FB98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5FBA0u;
}
