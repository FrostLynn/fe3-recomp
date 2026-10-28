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

// Function: sub_01D46520
// Address: 0x1d46520 - 0x1d46528
void sub_01D46520_0x1d46520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46520_0x1d46520");
#endif

    ctx->pc = 0x1d46520u;

    // 0x1d46520: 0x80b24d0  j           func_2C9340
    ctx->pc = 0x1D46520u;
    ctx->pc = 0x2C9340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9340u, 0x1D46520u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46528u;
}
