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

// Function: sub_01D27008
// Address: 0x1d27008 - 0x1d27010
void sub_01D27008_0x1d27008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27008_0x1d27008");
#endif

    ctx->pc = 0x1d27008u;

    // 0x1d27008: 0x80b176e  j           func_2C5DB8
    ctx->pc = 0x1D27008u;
    ctx->pc = 0x2C5DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5DB8u, 0x1D27008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D27010u;
}
