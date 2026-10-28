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

// Function: sub_01CB6838
// Address: 0x1cb6838 - 0x1cb6840
void sub_01CB6838_0x1cb6838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6838_0x1cb6838");
#endif

    ctx->pc = 0x1cb6838u;

    // 0x1cb6838: 0x80b0db2  j           func_2C36C8
    ctx->pc = 0x1CB6838u;
    ctx->pc = 0x2C36C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C36C8u, 0x1CB6838u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6840u;
}
