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

// Function: sub_01D0BFC8
// Address: 0x1d0bfc8 - 0x1d0bfd0
void sub_01D0BFC8_0x1d0bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0BFC8_0x1d0bfc8");
#endif

    ctx->pc = 0x1d0bfc8u;

    // 0x1d0bfc8: 0x80b19fa  j           func_2C67E8
    ctx->pc = 0x1D0BFC8u;
    ctx->pc = 0x2C67E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C67E8u, 0x1D0BFC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0BFD0u;
}
