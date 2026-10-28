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

// Function: sub_01C1FA38
// Address: 0x1c1fa38 - 0x1c1fa40
void sub_01C1FA38_0x1c1fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FA38_0x1c1fa38");
#endif

    ctx->pc = 0x1c1fa38u;

    // 0x1c1fa38: 0x80b27a8  j           func_2C9EA0
    ctx->pc = 0x1C1FA38u;
    ctx->pc = 0x2C9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9EA0u, 0x1C1FA38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1FA40u;
}
