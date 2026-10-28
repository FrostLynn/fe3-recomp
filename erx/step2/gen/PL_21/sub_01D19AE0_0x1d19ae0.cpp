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

// Function: sub_01D19AE0
// Address: 0x1d19ae0 - 0x1d19ae8
void sub_01D19AE0_0x1d19ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19AE0_0x1d19ae0");
#endif

    ctx->pc = 0x1d19ae0u;

    // 0x1d19ae0: 0x80a96fc  j           func_2A5BF0
    ctx->pc = 0x1D19AE0u;
    ctx->pc = 0x2A5BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5BF0u, 0x1D19AE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19AE8u;
}
