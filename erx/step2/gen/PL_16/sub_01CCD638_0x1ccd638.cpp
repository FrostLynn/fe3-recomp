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

// Function: sub_01CCD638
// Address: 0x1ccd638 - 0x1ccd640
void sub_01CCD638_0x1ccd638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD638_0x1ccd638");
#endif

    ctx->pc = 0x1ccd638u;

    // 0x1ccd638: 0x80b18d8  j           func_2C6360
    ctx->pc = 0x1CCD638u;
    ctx->pc = 0x2C6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6360u, 0x1CCD638u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD640u;
}
