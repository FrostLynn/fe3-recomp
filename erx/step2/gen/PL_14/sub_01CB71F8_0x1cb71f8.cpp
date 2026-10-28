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

// Function: sub_01CB71F8
// Address: 0x1cb71f8 - 0x1cb7200
void sub_01CB71F8_0x1cb71f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB71F8_0x1cb71f8");
#endif

    ctx->pc = 0x1cb71f8u;

    // 0x1cb71f8: 0x80b1a62  j           func_2C6988
    ctx->pc = 0x1CB71F8u;
    ctx->pc = 0x2C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6988u, 0x1CB71F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB7200u;
}
