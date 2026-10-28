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

// Function: sub_01DCBB28
// Address: 0x1dcbb28 - 0x1dcbb30
void sub_01DCBB28_0x1dcbb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBB28_0x1dcbb28");
#endif

    ctx->pc = 0x1dcbb28u;

    // 0x1dcbb28: 0x809b9c6  j           func_26E718
    ctx->pc = 0x1DCBB28u;
    ctx->pc = 0x26E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E718u, 0x1DCBB28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DCBB30u;
}
