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

// Function: sub_01D66D98
// Address: 0x1d66d98 - 0x1d66da0
void sub_01D66D98_0x1d66d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66D98_0x1d66d98");
#endif

    ctx->pc = 0x1d66d98u;

    // 0x1d66d98: 0x80b1f36  j           func_2C7CD8
    ctx->pc = 0x1D66D98u;
    ctx->pc = 0x2C7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7CD8u, 0x1D66D98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66DA0u;
}
