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

// Function: sub_01CAD480
// Address: 0x1cad480 - 0x1cad488
void sub_01CAD480_0x1cad480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD480_0x1cad480");
#endif

    ctx->pc = 0x1cad480u;

    // 0x1cad480: 0x80b16ca  j           func_2C5B28
    ctx->pc = 0x1CAD480u;
    ctx->pc = 0x2C5B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5B28u, 0x1CAD480u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD488u;
}
