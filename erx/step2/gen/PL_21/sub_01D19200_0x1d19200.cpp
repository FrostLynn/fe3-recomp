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

// Function: sub_01D19200
// Address: 0x1d19200 - 0x1d19208
void sub_01D19200_0x1d19200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19200_0x1d19200");
#endif

    ctx->pc = 0x1d19200u;

    // 0x1d19200: 0x80b0c74  j           func_2C31D0
    ctx->pc = 0x1D19200u;
    ctx->pc = 0x2C31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C31D0u, 0x1D19200u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19208u;
}
