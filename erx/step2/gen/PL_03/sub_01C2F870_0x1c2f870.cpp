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

// Function: sub_01C2F870
// Address: 0x1c2f870 - 0x1c2f878
void sub_01C2F870_0x1c2f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2F870_0x1c2f870");
#endif

    ctx->pc = 0x1c2f870u;

    // 0x1c2f870: 0x80b0ec2  j           func_2C3B08
    ctx->pc = 0x1C2F870u;
    ctx->pc = 0x2C3B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B08u, 0x1C2F870u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2F878u;
}
