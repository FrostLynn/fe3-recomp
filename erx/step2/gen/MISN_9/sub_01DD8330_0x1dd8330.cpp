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

// Function: sub_01DD8330
// Address: 0x1dd8330 - 0x1dd8338
void sub_01DD8330_0x1dd8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8330_0x1dd8330");
#endif

    ctx->pc = 0x1dd8330u;

    // 0x1dd8330: 0x80a96e2  j           func_2A5B88
    ctx->pc = 0x1DD8330u;
    ctx->pc = 0x2A5B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B88u, 0x1DD8330u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD8338u;
}
