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

// Function: sub_01D92E18
// Address: 0x1d92e18 - 0x1d92e20
void sub_01D92E18_0x1d92e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92E18_0x1d92e18");
#endif

    ctx->pc = 0x1d92e18u;

    // 0x1d92e18: 0x80b14ac  j           func_2C52B0
    ctx->pc = 0x1D92E18u;
    ctx->pc = 0x2C52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B0u, 0x1D92E18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92E20u;
}
