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

// Function: sub_01CB7030
// Address: 0x1cb7030 - 0x1cb7038
void sub_01CB7030_0x1cb7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7030_0x1cb7030");
#endif

    ctx->pc = 0x1cb7030u;

    // 0x1cb7030: 0x80b2802  j           func_2CA008
    ctx->pc = 0x1CB7030u;
    ctx->pc = 0x2CA008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA008u, 0x1CB7030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB7038u;
}
