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

// Function: sub_01D88F80
// Address: 0x1d88f80 - 0x1d88f88
void sub_01D88F80_0x1d88f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88F80_0x1d88f80");
#endif

    ctx->pc = 0x1d88f80u;

    // 0x1d88f80: 0x80b1e10  j           func_2C7840
    ctx->pc = 0x1D88F80u;
    ctx->pc = 0x2C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7840u, 0x1D88F80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88F88u;
}
