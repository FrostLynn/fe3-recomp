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

// Function: sub_01DEA060
// Address: 0x1dea060 - 0x1dea068
void sub_01DEA060_0x1dea060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA060_0x1dea060");
#endif

    ctx->pc = 0x1dea060u;

    // 0x1dea060: 0x80a6366  j           func_298D98
    ctx->pc = 0x1DEA060u;
    ctx->pc = 0x298D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298D98u, 0x1DEA060u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DEA068u;
}
