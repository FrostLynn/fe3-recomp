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

// Function: sub_01C1F670
// Address: 0x1c1f670 - 0x1c1f678
void sub_01C1F670_0x1c1f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F670_0x1c1f670");
#endif

    ctx->pc = 0x1c1f670u;

    // 0x1c1f670: 0x80b11fa  j           func_2C47E8
    ctx->pc = 0x1C1F670u;
    ctx->pc = 0x2C47E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C47E8u, 0x1C1F670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F678u;
}
