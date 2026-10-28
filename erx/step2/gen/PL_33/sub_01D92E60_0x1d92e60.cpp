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

// Function: sub_01D92E60
// Address: 0x1d92e60 - 0x1d92e68
void sub_01D92E60_0x1d92e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92E60_0x1d92e60");
#endif

    ctx->pc = 0x1d92e60u;

    // 0x1d92e60: 0x80b1dc6  j           func_2C7718
    ctx->pc = 0x1D92E60u;
    ctx->pc = 0x2C7718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7718u, 0x1D92E60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92E68u;
}
