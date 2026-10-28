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

// Function: sub_01D26F58
// Address: 0x1d26f58 - 0x1d26f60
void sub_01D26F58_0x1d26f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D26F58_0x1d26f58");
#endif

    ctx->pc = 0x1d26f58u;

    // 0x1d26f58: 0x80b1d6a  j           func_2C75A8
    ctx->pc = 0x1D26F58u;
    ctx->pc = 0x2C75A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C75A8u, 0x1D26F58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D26F60u;
}
