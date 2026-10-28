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

// Function: sub_01D33668
// Address: 0x1d33668 - 0x1d33670
void sub_01D33668_0x1d33668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33668_0x1d33668");
#endif

    ctx->pc = 0x1d33668u;

    // 0x1d33668: 0x80b0ec8  j           func_2C3B20
    ctx->pc = 0x1D33668u;
    ctx->pc = 0x2C3B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B20u, 0x1D33668u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33670u;
}
