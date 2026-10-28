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

// Function: sub_01CCD658
// Address: 0x1ccd658 - 0x1ccd660
void sub_01CCD658_0x1ccd658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD658_0x1ccd658");
#endif

    ctx->pc = 0x1ccd658u;

    // 0x1ccd658: 0x80b1b72  j           func_2C6DC8
    ctx->pc = 0x1CCD658u;
    ctx->pc = 0x2C6DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6DC8u, 0x1CCD658u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD660u;
}
