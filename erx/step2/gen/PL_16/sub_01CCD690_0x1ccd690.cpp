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

// Function: sub_01CCD690
// Address: 0x1ccd690 - 0x1ccd698
void sub_01CCD690_0x1ccd690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD690_0x1ccd690");
#endif

    ctx->pc = 0x1ccd690u;

    // 0x1ccd690: 0x80b1c7c  j           func_2C71F0
    ctx->pc = 0x1CCD690u;
    ctx->pc = 0x2C71F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C71F0u, 0x1CCD690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD698u;
}
