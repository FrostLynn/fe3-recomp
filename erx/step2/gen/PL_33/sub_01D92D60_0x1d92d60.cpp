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

// Function: sub_01D92D60
// Address: 0x1d92d60 - 0x1d92d68
void sub_01D92D60_0x1d92d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92D60_0x1d92d60");
#endif

    ctx->pc = 0x1d92d60u;

    // 0x1d92d60: 0x80b11c6  j           func_2C4718
    ctx->pc = 0x1D92D60u;
    ctx->pc = 0x2C4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4718u, 0x1D92D60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92D68u;
}
