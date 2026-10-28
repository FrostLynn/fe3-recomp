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

// Function: sub_01C30198
// Address: 0x1c30198 - 0x1c301a0
void sub_01C30198_0x1c30198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30198_0x1c30198");
#endif

    ctx->pc = 0x1c30198u;

    // 0x1c30198: 0x80b2b38  j           func_2CACE0
    ctx->pc = 0x1C30198u;
    ctx->pc = 0x2CACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CACE0u, 0x1C30198u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C301A0u;
}
