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

// Function: sub_01CFD948
// Address: 0x1cfd948 - 0x1cfd950
void sub_01CFD948_0x1cfd948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD948_0x1cfd948");
#endif

    ctx->pc = 0x1cfd948u;

    // 0x1cfd948: 0x80b2054  j           func_2C8150
    ctx->pc = 0x1CFD948u;
    ctx->pc = 0x2C8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8150u, 0x1CFD948u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD950u;
}
