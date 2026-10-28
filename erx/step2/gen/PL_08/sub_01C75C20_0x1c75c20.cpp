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

// Function: sub_01C75C20
// Address: 0x1c75c20 - 0x1c75c28
void sub_01C75C20_0x1c75c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C75C20_0x1c75c20");
#endif

    ctx->pc = 0x1c75c20u;

    // 0x1c75c20: 0x80b1cde  j           func_2C7378
    ctx->pc = 0x1C75C20u;
    ctx->pc = 0x2C7378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7378u, 0x1C75C20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C75C28u;
}
