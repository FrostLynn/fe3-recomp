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

// Function: sub_01D92FE0
// Address: 0x1d92fe0 - 0x1d92fe8
void sub_01D92FE0_0x1d92fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92FE0_0x1d92fe0");
#endif

    ctx->pc = 0x1d92fe0u;

    // 0x1d92fe0: 0x80b2386  j           func_2C8E18
    ctx->pc = 0x1D92FE0u;
    ctx->pc = 0x2C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E18u, 0x1D92FE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92FE8u;
}
