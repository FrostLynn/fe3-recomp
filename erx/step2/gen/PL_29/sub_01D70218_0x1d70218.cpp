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

// Function: sub_01D70218
// Address: 0x1d70218 - 0x1d70220
void sub_01D70218_0x1d70218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70218_0x1d70218");
#endif

    ctx->pc = 0x1d70218u;

    // 0x1d70218: 0x80b1b72  j           func_2C6DC8
    ctx->pc = 0x1D70218u;
    ctx->pc = 0x2C6DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6DC8u, 0x1D70218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70220u;
}
