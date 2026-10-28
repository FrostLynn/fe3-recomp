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

// Function: sub_01C30098
// Address: 0x1c30098 - 0x1c300a0
void sub_01C30098_0x1c30098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30098_0x1c30098");
#endif

    ctx->pc = 0x1c30098u;

    // 0x1c30098: 0x80b2924  j           func_2CA490
    ctx->pc = 0x1C30098u;
    ctx->pc = 0x2CA490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA490u, 0x1C30098u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C300A0u;
}
