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

// Function: sub_01CFD998
// Address: 0x1cfd998 - 0x1cfd9a0
void sub_01CFD998_0x1cfd998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD998_0x1cfd998");
#endif

    ctx->pc = 0x1cfd998u;

    // 0x1cfd998: 0x80b21d8  j           func_2C8760
    ctx->pc = 0x1CFD998u;
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x1CFD998u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD9A0u;
}
