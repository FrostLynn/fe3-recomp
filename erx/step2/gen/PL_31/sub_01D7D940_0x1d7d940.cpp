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

// Function: sub_01D7D940
// Address: 0x1d7d940 - 0x1d7d948
void sub_01D7D940_0x1d7d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7D940_0x1d7d940");
#endif

    ctx->pc = 0x1d7d940u;

    // 0x1d7d940: 0x80b18de  j           func_2C6378
    ctx->pc = 0x1D7D940u;
    ctx->pc = 0x2C6378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6378u, 0x1D7D940u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7D948u;
}
