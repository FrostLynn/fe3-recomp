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

// Function: sub_01D33F90
// Address: 0x1d33f90 - 0x1d33f98
void sub_01D33F90_0x1d33f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33F90_0x1d33f90");
#endif

    ctx->pc = 0x1d33f90u;

    // 0x1d33f90: 0x80b29dc  j           func_2CA770
    ctx->pc = 0x1D33F90u;
    ctx->pc = 0x2CA770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA770u, 0x1D33F90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33F98u;
}
