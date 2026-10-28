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

// Function: sub_01CAD5A8
// Address: 0x1cad5a8 - 0x1cad5b0
void sub_01CAD5A8_0x1cad5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD5A8_0x1cad5a8");
#endif

    ctx->pc = 0x1cad5a8u;

    // 0x1cad5a8: 0x80b109a  j           func_2C4268
    ctx->pc = 0x1CAD5A8u;
    ctx->pc = 0x2C4268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4268u, 0x1CAD5A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD5B0u;
}
