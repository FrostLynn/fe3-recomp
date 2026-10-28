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

// Function: sub_01D92F90
// Address: 0x1d92f90 - 0x1d92f98
void sub_01D92F90_0x1d92f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92F90_0x1d92f90");
#endif

    ctx->pc = 0x1d92f90u;

    // 0x1d92f90: 0x80b2212  j           func_2C8848
    ctx->pc = 0x1D92F90u;
    ctx->pc = 0x2C8848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8848u, 0x1D92F90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92F98u;
}
