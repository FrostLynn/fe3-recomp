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

// Function: sub_01CAD220
// Address: 0x1cad220 - 0x1cad228
void sub_01CAD220_0x1cad220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD220_0x1cad220");
#endif

    ctx->pc = 0x1cad220u;

    // 0x1cad220: 0x80b0ec2  j           func_2C3B08
    ctx->pc = 0x1CAD220u;
    ctx->pc = 0x2C3B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B08u, 0x1CAD220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD228u;
}
