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

// Function: sub_01C81368
// Address: 0x1c81368 - 0x1c81370
void sub_01C81368_0x1c81368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81368_0x1c81368");
#endif

    ctx->pc = 0x1c81368u;

    // 0x1c81368: 0x80b0fd6  j           func_2C3F58
    ctx->pc = 0x1C81368u;
    ctx->pc = 0x2C3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F58u, 0x1C81368u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81370u;
}
