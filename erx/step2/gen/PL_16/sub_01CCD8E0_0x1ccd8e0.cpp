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

// Function: sub_01CCD8E0
// Address: 0x1ccd8e0 - 0x1ccd8e8
void sub_01CCD8E0_0x1ccd8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD8E0_0x1ccd8e0");
#endif

    ctx->pc = 0x1ccd8e0u;

    // 0x1ccd8e0: 0x80b1088  j           func_2C4220
    ctx->pc = 0x1CCD8E0u;
    ctx->pc = 0x2C4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4220u, 0x1CCD8E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD8E8u;
}
