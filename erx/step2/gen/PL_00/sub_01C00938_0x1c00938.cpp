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

// Function: sub_01C00938
// Address: 0x1c00938 - 0x1c00940
void sub_01C00938_0x1c00938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00938_0x1c00938");
#endif

    ctx->pc = 0x1c00938u;

    // 0x1c00938: 0x80b2802  j           func_2CA008
    ctx->pc = 0x1C00938u;
    ctx->pc = 0x2CA008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA008u, 0x1C00938u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00940u;
}
