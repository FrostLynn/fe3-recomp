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

// Function: sub_01D0BF78
// Address: 0x1d0bf78 - 0x1d0bf80
void sub_01D0BF78_0x1d0bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0BF78_0x1d0bf78");
#endif

    ctx->pc = 0x1d0bf78u;

    // 0x1d0bf78: 0x80b1c14  j           func_2C7050
    ctx->pc = 0x1D0BF78u;
    ctx->pc = 0x2C7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7050u, 0x1D0BF78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0BF80u;
}
