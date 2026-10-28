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

// Function: sub_01C4F918
// Address: 0x1c4f918 - 0x1c4f920
void sub_01C4F918_0x1c4f918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4F918_0x1c4f918");
#endif

    ctx->pc = 0x1c4f918u;

    // 0x1c4f918: 0x80d97d4  j           func_365F50
    ctx->pc = 0x1C4F918u;
    ctx->pc = 0x365F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365F50u, 0x1C4F918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4F920u;
}
