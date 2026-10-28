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

// Function: sub_01CDA330
// Address: 0x1cda330 - 0x1cda338
void sub_01CDA330_0x1cda330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA330_0x1cda330");
#endif

    ctx->pc = 0x1cda330u;

    // 0x1cda330: 0x80b0b7c  j           func_2C2DF0
    ctx->pc = 0x1CDA330u;
    ctx->pc = 0x2C2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2DF0u, 0x1CDA330u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA338u;
}
