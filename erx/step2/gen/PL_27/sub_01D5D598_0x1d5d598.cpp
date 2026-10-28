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

// Function: sub_01D5D598
// Address: 0x1d5d598 - 0x1d5d5a0
void sub_01D5D598_0x1d5d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D598_0x1d5d598");
#endif

    ctx->pc = 0x1d5d598u;

    // 0x1d5d598: 0x80b272e  j           func_2C9CB8
    ctx->pc = 0x1D5D598u;
    ctx->pc = 0x2C9CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CB8u, 0x1D5D598u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D5A0u;
}
