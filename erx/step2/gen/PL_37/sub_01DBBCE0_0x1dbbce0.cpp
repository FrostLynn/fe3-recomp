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

// Function: sub_01DBBCE0
// Address: 0x1dbbce0 - 0x1dbbce8
void sub_01DBBCE0_0x1dbbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBCE0_0x1dbbce0");
#endif

    ctx->pc = 0x1dbbce0u;

    // 0x1dbbce0: 0x80a963e  j           func_2A58F8
    ctx->pc = 0x1DBBCE0u;
    ctx->pc = 0x2A58F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A58F8u, 0x1DBBCE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBCE8u;
}
