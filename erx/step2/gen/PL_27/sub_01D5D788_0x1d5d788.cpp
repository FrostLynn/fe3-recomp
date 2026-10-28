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

// Function: sub_01D5D788
// Address: 0x1d5d788 - 0x1d5d790
void sub_01D5D788_0x1d5d788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D788_0x1d5d788");
#endif

    ctx->pc = 0x1d5d788u;

    // 0x1d5d788: 0x80b2a82  j           func_2CAA08
    ctx->pc = 0x1D5D788u;
    ctx->pc = 0x2CAA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA08u, 0x1D5D788u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D790u;
}
