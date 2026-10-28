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

// Function: sub_01D33A40
// Address: 0x1d33a40 - 0x1d33a48
void sub_01D33A40_0x1d33a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33A40_0x1d33a40");
#endif

    ctx->pc = 0x1d33a40u;

    // 0x1d33a40: 0x80b119e  j           func_2C4678
    ctx->pc = 0x1D33A40u;
    ctx->pc = 0x2C4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4678u, 0x1D33A40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33A48u;
}
