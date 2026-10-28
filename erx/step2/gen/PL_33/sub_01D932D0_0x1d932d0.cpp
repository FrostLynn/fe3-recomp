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

// Function: sub_01D932D0
// Address: 0x1d932d0 - 0x1d932d8
void sub_01D932D0_0x1d932d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D932D0_0x1d932d0");
#endif

    ctx->pc = 0x1d932d0u;

    // 0x1d932d0: 0x80b2d92  j           func_2CB648
    ctx->pc = 0x1D932D0u;
    ctx->pc = 0x2CB648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB648u, 0x1D932D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D932D8u;
}
