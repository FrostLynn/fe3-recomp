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

// Function: sub_01DD8338
// Address: 0x1dd8338 - 0x1dd8340
void sub_01DD8338_0x1dd8338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8338_0x1dd8338");
#endif

    ctx->pc = 0x1dd8338u;

    // 0x1dd8338: 0x80a96be  j           func_2A5AF8
    ctx->pc = 0x1DD8338u;
    ctx->pc = 0x2A5AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5AF8u, 0x1DD8338u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD8340u;
}
