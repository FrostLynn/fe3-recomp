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

// Function: sub_01CCD460
// Address: 0x1ccd460 - 0x1ccd468
void sub_01CCD460_0x1ccd460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD460_0x1ccd460");
#endif

    ctx->pc = 0x1ccd460u;

    // 0x1ccd460: 0x80a96ba  j           func_2A5AE8
    ctx->pc = 0x1CCD460u;
    ctx->pc = 0x2A5AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5AE8u, 0x1CCD460u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD468u;
}
