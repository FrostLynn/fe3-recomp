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

// Function: sub_01C50428
// Address: 0x1c50428 - 0x1c50430
void sub_01C50428_0x1c50428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50428_0x1c50428");
#endif

    ctx->pc = 0x1c50428u;

    // 0x1c50428: 0x80b1a62  j           func_2C6988
    ctx->pc = 0x1C50428u;
    ctx->pc = 0x2C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6988u, 0x1C50428u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C50430u;
}
