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

// Function: sub_01C50450
// Address: 0x1c50450 - 0x1c50458
void sub_01C50450_0x1c50450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50450_0x1c50450");
#endif

    ctx->pc = 0x1c50450u;

    // 0x1c50450: 0x80b2e38  j           func_2CB8E0
    ctx->pc = 0x1C50450u;
    ctx->pc = 0x2CB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8E0u, 0x1C50450u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C50458u;
}
