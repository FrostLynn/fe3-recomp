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

// Function: sub_01C5FF68
// Address: 0x1c5ff68 - 0x1c5ff70
void sub_01C5FF68_0x1c5ff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5FF68_0x1c5ff68");
#endif

    ctx->pc = 0x1c5ff68u;

    // 0x1c5ff68: 0x80b2ada  j           func_2CAB68
    ctx->pc = 0x1C5FF68u;
    ctx->pc = 0x2CAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAB68u, 0x1C5FF68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5FF70u;
}
