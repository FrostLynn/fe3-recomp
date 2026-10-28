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

// Function: sub_01DB0F70
// Address: 0x1db0f70 - 0x1db0f78
void sub_01DB0F70_0x1db0f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB0F70_0x1db0f70");
#endif

    ctx->pc = 0x1db0f70u;

    // 0x1db0f70: 0x80ad7e2  j           func_2B5F88
    ctx->pc = 0x1DB0F70u;
    ctx->pc = 0x2B5F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5F88u, 0x1DB0F70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB0F78u;
}
