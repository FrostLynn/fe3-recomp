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

// Function: sub_01D89150
// Address: 0x1d89150 - 0x1d89158
void sub_01D89150_0x1d89150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89150_0x1d89150");
#endif

    ctx->pc = 0x1d89150u;

    // 0x1d89150: 0x80b24fe  j           func_2C93F8
    ctx->pc = 0x1D89150u;
    ctx->pc = 0x2C93F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C93F8u, 0x1D89150u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D89158u;
}
