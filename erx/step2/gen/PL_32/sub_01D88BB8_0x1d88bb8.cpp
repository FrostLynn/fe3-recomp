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

// Function: sub_01D88BB8
// Address: 0x1d88bb8 - 0x1d88bc0
void sub_01D88BB8_0x1d88bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88BB8_0x1d88bb8");
#endif

    ctx->pc = 0x1d88bb8u;

    // 0x1d88bb8: 0x80b19dc  j           func_2C6770
    ctx->pc = 0x1D88BB8u;
    ctx->pc = 0x2C6770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6770u, 0x1D88BB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88BC0u;
}
