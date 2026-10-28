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

// Function: sub_01DC4508
// Address: 0x1dc4508 - 0x1dc4510
void sub_01DC4508_0x1dc4508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4508_0x1dc4508");
#endif

    ctx->pc = 0x1dc4508u;

    // 0x1dc4508: 0x80b2b04  j           func_2CAC10
    ctx->pc = 0x1DC4508u;
    ctx->pc = 0x2CAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC10u, 0x1DC4508u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC4510u;
}
