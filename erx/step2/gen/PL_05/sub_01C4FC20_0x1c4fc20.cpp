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

// Function: sub_01C4FC20
// Address: 0x1c4fc20 - 0x1c4fc28
void sub_01C4FC20_0x1c4fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FC20_0x1c4fc20");
#endif

    ctx->pc = 0x1c4fc20u;

    // 0x1c4fc20: 0x80b1816  j           func_2C6058
    ctx->pc = 0x1C4FC20u;
    ctx->pc = 0x2C6058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6058u, 0x1C4FC20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FC28u;
}
