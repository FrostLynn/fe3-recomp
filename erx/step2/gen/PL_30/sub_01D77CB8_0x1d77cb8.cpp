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

// Function: sub_01D77CB8
// Address: 0x1d77cb8 - 0x1d77cc0
void sub_01D77CB8_0x1d77cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77CB8_0x1d77cb8");
#endif

    ctx->pc = 0x1d77cb8u;

    // 0x1d77cb8: 0x80b189e  j           func_2C6278
    ctx->pc = 0x1D77CB8u;
    ctx->pc = 0x2C6278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6278u, 0x1D77CB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77CC0u;
}
