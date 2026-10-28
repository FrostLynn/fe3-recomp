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

// Function: sub_01CC2E28
// Address: 0x1cc2e28 - 0x1cc2e30
void sub_01CC2E28_0x1cc2e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2E28_0x1cc2e28");
#endif

    ctx->pc = 0x1cc2e28u;

    // 0x1cc2e28: 0x80b294e  j           func_2CA538
    ctx->pc = 0x1CC2E28u;
    ctx->pc = 0x2CA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA538u, 0x1CC2E28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2E30u;
}
