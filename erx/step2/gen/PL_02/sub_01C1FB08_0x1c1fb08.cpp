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

// Function: sub_01C1FB08
// Address: 0x1c1fb08 - 0x1c1fb10
void sub_01C1FB08_0x1c1fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FB08_0x1c1fb08");
#endif

    ctx->pc = 0x1c1fb08u;

    // 0x1c1fb08: 0x80b0fa6  j           func_2C3E98
    ctx->pc = 0x1C1FB08u;
    ctx->pc = 0x2C3E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E98u, 0x1C1FB08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1FB10u;
}
