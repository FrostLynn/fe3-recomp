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

// Function: sub_01CAD798
// Address: 0x1cad798 - 0x1cad7a0
void sub_01CAD798_0x1cad798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD798_0x1cad798");
#endif

    ctx->pc = 0x1cad798u;

    // 0x1cad798: 0x80b1f36  j           func_2C7CD8
    ctx->pc = 0x1CAD798u;
    ctx->pc = 0x2C7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7CD8u, 0x1CAD798u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD7A0u;
}
