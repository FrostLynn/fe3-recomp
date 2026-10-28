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

// Function: sub_01C4FB08
// Address: 0x1c4fb08 - 0x1c4fb10
void sub_01C4FB08_0x1c4fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FB08_0x1c4fb08");
#endif

    ctx->pc = 0x1c4fb08u;

    // 0x1c4fb08: 0x80b0c56  j           func_2C3158
    ctx->pc = 0x1C4FB08u;
    ctx->pc = 0x2C3158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3158u, 0x1C4FB08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FB10u;
}
