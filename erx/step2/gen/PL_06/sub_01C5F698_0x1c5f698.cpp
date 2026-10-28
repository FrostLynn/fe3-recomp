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

// Function: sub_01C5F698
// Address: 0x1c5f698 - 0x1c5f6a0
void sub_01C5F698_0x1c5f698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5F698_0x1c5f698");
#endif

    ctx->pc = 0x1c5f698u;

    // 0x1c5f698: 0x80b0f14  j           func_2C3C50
    ctx->pc = 0x1C5F698u;
    ctx->pc = 0x2C3C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C50u, 0x1C5F698u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5F6A0u;
}
