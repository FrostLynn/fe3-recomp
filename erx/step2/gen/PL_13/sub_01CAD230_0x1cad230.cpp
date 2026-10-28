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

// Function: sub_01CAD230
// Address: 0x1cad230 - 0x1cad238
void sub_01CAD230_0x1cad230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD230_0x1cad230");
#endif

    ctx->pc = 0x1cad230u;

    // 0x1cad230: 0x80b0ece  j           func_2C3B38
    ctx->pc = 0x1CAD230u;
    ctx->pc = 0x2C3B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B38u, 0x1CAD230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD238u;
}
