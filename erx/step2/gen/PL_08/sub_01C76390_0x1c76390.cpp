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

// Function: sub_01C76390
// Address: 0x1c76390 - 0x1c76398
void sub_01C76390_0x1c76390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76390_0x1c76390");
#endif

    ctx->pc = 0x1c76390u;

    // 0x1c76390: 0x80a9618  j           func_2A5860
    ctx->pc = 0x1C76390u;
    ctx->pc = 0x2A5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5860u, 0x1C76390u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C76398u;
}
