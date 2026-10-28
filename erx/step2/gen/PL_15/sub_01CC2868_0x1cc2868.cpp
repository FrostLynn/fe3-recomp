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

// Function: sub_01CC2868
// Address: 0x1cc2868 - 0x1cc2870
void sub_01CC2868_0x1cc2868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2868_0x1cc2868");
#endif

    ctx->pc = 0x1cc2868u;

    // 0x1cc2868: 0x80b0fe8  j           func_2C3FA0
    ctx->pc = 0x1CC2868u;
    ctx->pc = 0x2C3FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FA0u, 0x1CC2868u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2870u;
}
