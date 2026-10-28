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

// Function: sub_01D88940
// Address: 0x1d88940 - 0x1d88948
void sub_01D88940_0x1d88940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88940_0x1d88940");
#endif

    ctx->pc = 0x1d88940u;

    // 0x1d88940: 0x80b2f3e  j           func_2CBCF8
    ctx->pc = 0x1D88940u;
    ctx->pc = 0x2CBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBCF8u, 0x1D88940u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88948u;
}
