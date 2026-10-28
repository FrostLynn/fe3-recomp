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

// Function: sub_01D26F18
// Address: 0x1d26f18 - 0x1d26f20
void sub_01D26F18_0x1d26f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D26F18_0x1d26f18");
#endif

    ctx->pc = 0x1d26f18u;

    // 0x1d26f18: 0x80b194a  j           func_2C6528
    ctx->pc = 0x1D26F18u;
    ctx->pc = 0x2C6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6528u, 0x1D26F18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D26F20u;
}
