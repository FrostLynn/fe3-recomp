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

// Function: sub_01CAD180
// Address: 0x1cad180 - 0x1cad190
void sub_01CAD180_0x1cad180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD180_0x1cad180");
#endif

    ctx->pc = 0x1cad180u;

    // 0x1cad180: 0x80b30d0  j           func_2CC340
    ctx->pc = 0x1CAD180u;
    ctx->pc = 0x2CC340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC340u, 0x1CAD180u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD188u;
    // 0x1cad188: 0x80e5244  j           func_394910
    ctx->pc = 0x1CAD188u;
    ctx->pc = 0x394910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394910u, 0x1CAD188u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD190u;
}
