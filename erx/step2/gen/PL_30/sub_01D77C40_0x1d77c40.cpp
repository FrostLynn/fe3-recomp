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

// Function: sub_01D77C40
// Address: 0x1d77c40 - 0x1d77c48
void sub_01D77C40_0x1d77c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77C40_0x1d77c40");
#endif

    ctx->pc = 0x1d77c40u;

    // 0x1d77c40: 0x80b0b7e  j           func_2C2DF8
    ctx->pc = 0x1D77C40u;
    ctx->pc = 0x2C2DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2DF8u, 0x1D77C40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77C48u;
}
