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

// Function: sub_01CCD590
// Address: 0x1ccd590 - 0x1ccd598
void sub_01CCD590_0x1ccd590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD590_0x1ccd590");
#endif

    ctx->pc = 0x1ccd590u;

    // 0x1ccd590: 0x80b0f02  j           func_2C3C08
    ctx->pc = 0x1CCD590u;
    ctx->pc = 0x2C3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C08u, 0x1CCD590u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD598u;
}
