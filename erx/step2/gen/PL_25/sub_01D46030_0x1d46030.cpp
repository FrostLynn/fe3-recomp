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

// Function: sub_01D46030
// Address: 0x1d46030 - 0x1d46038
void sub_01D46030_0x1d46030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46030_0x1d46030");
#endif

    ctx->pc = 0x1d46030u;

    // 0x1d46030: 0x80b1d6a  j           func_2C75A8
    ctx->pc = 0x1D46030u;
    ctx->pc = 0x2C75A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C75A8u, 0x1D46030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46038u;
}
