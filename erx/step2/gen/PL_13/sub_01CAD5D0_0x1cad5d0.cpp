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

// Function: sub_01CAD5D0
// Address: 0x1cad5d0 - 0x1cad5d8
void sub_01CAD5D0_0x1cad5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD5D0_0x1cad5d0");
#endif

    ctx->pc = 0x1cad5d0u;

    // 0x1cad5d0: 0x80b1150  j           func_2C4540
    ctx->pc = 0x1CAD5D0u;
    ctx->pc = 0x2C4540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4540u, 0x1CAD5D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD5D8u;
}
