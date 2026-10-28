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

// Function: sub_01CCD668
// Address: 0x1ccd668 - 0x1ccd670
void sub_01CCD668_0x1ccd668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD668_0x1ccd668");
#endif

    ctx->pc = 0x1ccd668u;

    // 0x1ccd668: 0x80b1be0  j           func_2C6F80
    ctx->pc = 0x1CCD668u;
    ctx->pc = 0x2C6F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6F80u, 0x1CCD668u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD670u;
}
