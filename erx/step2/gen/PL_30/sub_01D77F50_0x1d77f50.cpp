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

// Function: sub_01D77F50
// Address: 0x1d77f50 - 0x1d77f58
void sub_01D77F50_0x1d77f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77F50_0x1d77f50");
#endif

    ctx->pc = 0x1d77f50u;

    // 0x1d77f50: 0x80b1460  j           func_2C5180
    ctx->pc = 0x1D77F50u;
    ctx->pc = 0x2C5180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5180u, 0x1D77F50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77F58u;
}
