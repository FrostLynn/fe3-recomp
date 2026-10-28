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

// Function: sub_01CAD488
// Address: 0x1cad488 - 0x1cad490
void sub_01CAD488_0x1cad488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD488_0x1cad488");
#endif

    ctx->pc = 0x1cad488u;

    // 0x1cad488: 0x80b1714  j           func_2C5C50
    ctx->pc = 0x1CAD488u;
    ctx->pc = 0x2C5C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C50u, 0x1CAD488u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD490u;
}
