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

// Function: sub_01C42510
// Address: 0x1c42510 - 0x1c42518
void sub_01C42510_0x1c42510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42510_0x1c42510");
#endif

    ctx->pc = 0x1c42510u;

    // 0x1c42510: 0x80b0b24  j           func_2C2C90
    ctx->pc = 0x1C42510u;
    ctx->pc = 0x2C2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2C90u, 0x1C42510u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42518u;
}
