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

// Function: sub_01CB7080
// Address: 0x1cb7080 - 0x1cb7088
void sub_01CB7080_0x1cb7080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7080_0x1cb7080");
#endif

    ctx->pc = 0x1cb7080u;

    // 0x1cb7080: 0x80b28ce  j           func_2CA338
    ctx->pc = 0x1CB7080u;
    ctx->pc = 0x2CA338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA338u, 0x1CB7080u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB7088u;
}
