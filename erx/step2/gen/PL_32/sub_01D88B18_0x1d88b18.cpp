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

// Function: sub_01D88B18
// Address: 0x1d88b18 - 0x1d88b20
void sub_01D88B18_0x1d88b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88B18_0x1d88b18");
#endif

    ctx->pc = 0x1d88b18u;

    // 0x1d88b18: 0x80b2b7c  j           func_2CADF0
    ctx->pc = 0x1D88B18u;
    ctx->pc = 0x2CADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CADF0u, 0x1D88B18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88B20u;
}
