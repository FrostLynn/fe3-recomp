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

// Function: sub_01D7E160
// Address: 0x1d7e160 - 0x1d7e168
void sub_01D7E160_0x1d7e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E160_0x1d7e160");
#endif

    ctx->pc = 0x1d7e160u;

    // 0x1d7e160: 0x80b2ac8  j           func_2CAB20
    ctx->pc = 0x1D7E160u;
    ctx->pc = 0x2CAB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAB20u, 0x1D7E160u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7E168u;
}
