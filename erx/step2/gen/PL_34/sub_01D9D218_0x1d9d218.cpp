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

// Function: sub_01D9D218
// Address: 0x1d9d218 - 0x1d9d220
void sub_01D9D218_0x1d9d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D218_0x1d9d218");
#endif

    ctx->pc = 0x1d9d218u;

    // 0x1d9d218: 0x80b27a8  j           func_2C9EA0
    ctx->pc = 0x1D9D218u;
    ctx->pc = 0x2C9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9EA0u, 0x1D9D218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9D220u;
}
