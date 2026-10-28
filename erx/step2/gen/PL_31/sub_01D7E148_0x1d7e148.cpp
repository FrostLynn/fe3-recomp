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

// Function: sub_01D7E148
// Address: 0x1d7e148 - 0x1d7e150
void sub_01D7E148_0x1d7e148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E148_0x1d7e148");
#endif

    ctx->pc = 0x1d7e148u;

    // 0x1d7e148: 0x80b29b2  j           func_2CA6C8
    ctx->pc = 0x1D7E148u;
    ctx->pc = 0x2CA6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6C8u, 0x1D7E148u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7E150u;
}
