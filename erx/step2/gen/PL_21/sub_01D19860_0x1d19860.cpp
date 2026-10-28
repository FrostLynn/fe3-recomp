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

// Function: sub_01D19860
// Address: 0x1d19860 - 0x1d19868
void sub_01D19860_0x1d19860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19860_0x1d19860");
#endif

    ctx->pc = 0x1d19860u;

    // 0x1d19860: 0x80b24fc  j           func_2C93F0
    ctx->pc = 0x1D19860u;
    ctx->pc = 0x2C93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C93F0u, 0x1D19860u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19868u;
}
