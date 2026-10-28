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

// Function: sub_01C4F948
// Address: 0x1c4f948 - 0x1c4f950
void sub_01C4F948_0x1c4f948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4F948_0x1c4f948");
#endif

    ctx->pc = 0x1c4f948u;

    // 0x1c4f948: 0x80d9734  j           func_365CD0
    ctx->pc = 0x1C4F948u;
    ctx->pc = 0x365CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365CD0u, 0x1C4F948u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4F950u;
}
