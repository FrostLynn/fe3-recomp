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

// Function: sub_01D33F98
// Address: 0x1d33f98 - 0x1d33fa0
void sub_01D33F98_0x1d33f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33F98_0x1d33f98");
#endif

    ctx->pc = 0x1d33f98u;

    // 0x1d33f98: 0x80b29f2  j           func_2CA7C8
    ctx->pc = 0x1D33F98u;
    ctx->pc = 0x2CA7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA7C8u, 0x1D33F98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33FA0u;
}
