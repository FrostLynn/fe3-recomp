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

// Function: sub_01CCD900
// Address: 0x1ccd900 - 0x1ccd908
void sub_01CCD900_0x1ccd900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD900_0x1ccd900");
#endif

    ctx->pc = 0x1ccd900u;

    // 0x1ccd900: 0x80b113c  j           func_2C44F0
    ctx->pc = 0x1CCD900u;
    ctx->pc = 0x2C44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C44F0u, 0x1CCD900u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD908u;
}
