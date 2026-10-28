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

// Function: sub_01CAD350
// Address: 0x1cad350 - 0x1cad358
void sub_01CAD350_0x1cad350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD350_0x1cad350");
#endif

    ctx->pc = 0x1cad350u;

    // 0x1cad350: 0x80b1c7c  j           func_2C71F0
    ctx->pc = 0x1CAD350u;
    ctx->pc = 0x2C71F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C71F0u, 0x1CAD350u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD358u;
}
