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

// Function: sub_01C8D450
// Address: 0x1c8d450 - 0x1c8d458
void sub_01C8D450_0x1c8d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8D450_0x1c8d450");
#endif

    ctx->pc = 0x1c8d450u;

    // 0x1c8d450: 0x80b11b2  j           func_2C46C8
    ctx->pc = 0x1C8D450u;
    ctx->pc = 0x2C46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46C8u, 0x1C8D450u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8D458u;
}
