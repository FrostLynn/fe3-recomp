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

// Function: sub_01D7DAA8
// Address: 0x1d7daa8 - 0x1d7dab0
void sub_01D7DAA8_0x1d7daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7DAA8_0x1d7daa8");
#endif

    ctx->pc = 0x1d7daa8u;

    // 0x1d7daa8: 0x80b1678  j           func_2C59E0
    ctx->pc = 0x1D7DAA8u;
    ctx->pc = 0x2C59E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C59E0u, 0x1D7DAA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7DAB0u;
}
