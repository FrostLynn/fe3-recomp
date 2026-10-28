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

// Function: sub_01C4FB28
// Address: 0x1c4fb28 - 0x1c4fb30
void sub_01C4FB28_0x1c4fb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FB28_0x1c4fb28");
#endif

    ctx->pc = 0x1c4fb28u;

    // 0x1c4fb28: 0x80b0c8e  j           func_2C3238
    ctx->pc = 0x1C4FB28u;
    ctx->pc = 0x2C3238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3238u, 0x1C4FB28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FB30u;
}
