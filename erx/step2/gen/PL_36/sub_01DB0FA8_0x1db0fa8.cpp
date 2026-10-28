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

// Function: sub_01DB0FA8
// Address: 0x1db0fa8 - 0x1db0fb0
void sub_01DB0FA8_0x1db0fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB0FA8_0x1db0fa8");
#endif

    ctx->pc = 0x1db0fa8u;

    // 0x1db0fa8: 0x80b2c7e  j           func_2CB1F8
    ctx->pc = 0x1DB0FA8u;
    ctx->pc = 0x2CB1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB1F8u, 0x1DB0FA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB0FB0u;
}
