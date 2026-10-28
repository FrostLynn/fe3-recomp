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

// Function: sub_01CFDCD8
// Address: 0x1cfdcd8 - 0x1cfdce0
void sub_01CFDCD8_0x1cfdcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDCD8_0x1cfdcd8");
#endif

    ctx->pc = 0x1cfdcd8u;

    // 0x1cfdcd8: 0x80a94a4  j           func_2A5290
    ctx->pc = 0x1CFDCD8u;
    ctx->pc = 0x2A5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5290u, 0x1CFDCD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDCE0u;
}
