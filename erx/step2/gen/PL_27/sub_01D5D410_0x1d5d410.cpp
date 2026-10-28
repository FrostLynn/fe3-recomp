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

// Function: sub_01D5D410
// Address: 0x1d5d410 - 0x1d5d418
void sub_01D5D410_0x1d5d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D410_0x1d5d410");
#endif

    ctx->pc = 0x1d5d410u;

    // 0x1d5d410: 0x80b2086  j           func_2C8218
    ctx->pc = 0x1D5D410u;
    ctx->pc = 0x2C8218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8218u, 0x1D5D410u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D418u;
}
