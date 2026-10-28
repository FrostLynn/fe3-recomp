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

// Function: sub_01C00838
// Address: 0x1c00838 - 0x1c00840
void sub_01C00838_0x1c00838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00838_0x1c00838");
#endif

    ctx->pc = 0x1c00838u;

    // 0x1c00838: 0x80b24a6  j           func_2C9298
    ctx->pc = 0x1C00838u;
    ctx->pc = 0x2C9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9298u, 0x1C00838u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00840u;
}
