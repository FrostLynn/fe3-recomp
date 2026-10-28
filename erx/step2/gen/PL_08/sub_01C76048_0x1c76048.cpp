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

// Function: sub_01C76048
// Address: 0x1c76048 - 0x1c76050
void sub_01C76048_0x1c76048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76048_0x1c76048");
#endif

    ctx->pc = 0x1c76048u;

    // 0x1c76048: 0x80b2166  j           func_2C8598
    ctx->pc = 0x1C76048u;
    ctx->pc = 0x2C8598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8598u, 0x1C76048u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C76050u;
}
