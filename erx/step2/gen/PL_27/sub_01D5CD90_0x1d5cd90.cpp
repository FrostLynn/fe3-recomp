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

// Function: sub_01D5CD90
// Address: 0x1d5cd90 - 0x1d5cd98
void sub_01D5CD90_0x1d5cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CD90_0x1d5cd90");
#endif

    ctx->pc = 0x1d5cd90u;

    // 0x1d5cd90: 0x80ae442  j           func_2B9108
    ctx->pc = 0x1D5CD90u;
    ctx->pc = 0x2B9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9108u, 0x1D5CD90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CD98u;
}
