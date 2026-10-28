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

// Function: sub_01D26D38
// Address: 0x1d26d38 - 0x1d26d40
void sub_01D26D38_0x1d26d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D26D38_0x1d26d38");
#endif

    ctx->pc = 0x1d26d38u;

    // 0x1d26d38: 0x80b0b6a  j           func_2C2DA8
    ctx->pc = 0x1D26D38u;
    ctx->pc = 0x2C2DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2DA8u, 0x1D26D38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D26D40u;
}
