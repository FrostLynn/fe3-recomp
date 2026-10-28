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

// Function: sub_01D0C328
// Address: 0x1d0c328 - 0x1d0c330
void sub_01D0C328_0x1d0c328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C328_0x1d0c328");
#endif

    ctx->pc = 0x1d0c328u;

    // 0x1d0c328: 0x80b151a  j           func_2C5468
    ctx->pc = 0x1D0C328u;
    ctx->pc = 0x2C5468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5468u, 0x1D0C328u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C330u;
}
