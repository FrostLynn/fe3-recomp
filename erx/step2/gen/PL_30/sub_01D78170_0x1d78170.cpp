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

// Function: sub_01D78170
// Address: 0x1d78170 - 0x1d78178
void sub_01D78170_0x1d78170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78170_0x1d78170");
#endif

    ctx->pc = 0x1d78170u;

    // 0x1d78170: 0x80b2b1a  j           func_2CAC68
    ctx->pc = 0x1D78170u;
    ctx->pc = 0x2CAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC68u, 0x1D78170u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D78178u;
}
