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

// Function: sub_01C75E20
// Address: 0x1c75e20 - 0x1c75e28
void sub_01C75E20_0x1c75e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C75E20_0x1c75e20");
#endif

    ctx->pc = 0x1c75e20u;

    // 0x1c75e20: 0x80b11b2  j           func_2C46C8
    ctx->pc = 0x1C75E20u;
    ctx->pc = 0x2C46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46C8u, 0x1C75E20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C75E28u;
}
