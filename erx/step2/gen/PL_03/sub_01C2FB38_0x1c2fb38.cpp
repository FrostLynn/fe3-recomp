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

// Function: sub_01C2FB38
// Address: 0x1c2fb38 - 0x1c2fb40
void sub_01C2FB38_0x1c2fb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2FB38_0x1c2fb38");
#endif

    ctx->pc = 0x1c2fb38u;

    // 0x1c2fb38: 0x80b0d5a  j           func_2C3568
    ctx->pc = 0x1C2FB38u;
    ctx->pc = 0x2C3568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3568u, 0x1C2FB38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2FB40u;
}
