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

// Function: sub_01C4FC38
// Address: 0x1c4fc38 - 0x1c4fc40
void sub_01C4FC38_0x1c4fc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FC38_0x1c4fc38");
#endif

    ctx->pc = 0x1c4fc38u;

    // 0x1c4fc38: 0x80b1982  j           func_2C6608
    ctx->pc = 0x1C4FC38u;
    ctx->pc = 0x2C6608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6608u, 0x1C4FC38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FC40u;
}
