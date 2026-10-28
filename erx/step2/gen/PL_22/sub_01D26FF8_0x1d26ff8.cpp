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

// Function: sub_01D26FF8
// Address: 0x1d26ff8 - 0x1d27000
void sub_01D26FF8_0x1d26ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D26FF8_0x1d26ff8");
#endif

    ctx->pc = 0x1d26ff8u;

    // 0x1d26ff8: 0x80b1766  j           func_2C5D98
    ctx->pc = 0x1D26FF8u;
    ctx->pc = 0x2C5D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5D98u, 0x1D26FF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D27000u;
}
