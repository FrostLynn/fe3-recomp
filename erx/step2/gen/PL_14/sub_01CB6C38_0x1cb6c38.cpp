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

// Function: sub_01CB6C38
// Address: 0x1cb6c38 - 0x1cb6c40
void sub_01CB6C38_0x1cb6c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6C38_0x1cb6c38");
#endif

    ctx->pc = 0x1cb6c38u;

    // 0x1cb6c38: 0x80b118a  j           func_2C4628
    ctx->pc = 0x1CB6C38u;
    ctx->pc = 0x2C4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4628u, 0x1CB6C38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6C40u;
}
