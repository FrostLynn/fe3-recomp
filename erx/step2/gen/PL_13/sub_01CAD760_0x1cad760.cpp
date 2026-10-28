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

// Function: sub_01CAD760
// Address: 0x1cad760 - 0x1cad768
void sub_01CAD760_0x1cad760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD760_0x1cad760");
#endif

    ctx->pc = 0x1cad760u;

    // 0x1cad760: 0x80b1e9a  j           func_2C7A68
    ctx->pc = 0x1CAD760u;
    ctx->pc = 0x2C7A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7A68u, 0x1CAD760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD768u;
}
