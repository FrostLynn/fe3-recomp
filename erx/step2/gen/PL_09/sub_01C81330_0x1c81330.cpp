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

// Function: sub_01C81330
// Address: 0x1c81330 - 0x1c81338
void sub_01C81330_0x1c81330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81330_0x1c81330");
#endif

    ctx->pc = 0x1c81330u;

    // 0x1c81330: 0x80b0d6e  j           func_2C35B8
    ctx->pc = 0x1C81330u;
    ctx->pc = 0x2C35B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C35B8u, 0x1C81330u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81338u;
}
