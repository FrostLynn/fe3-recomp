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

// Function: sub_01C75D68
// Address: 0x1c75d68 - 0x1c75d70
void sub_01C75D68_0x1c75d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C75D68_0x1c75d68");
#endif

    ctx->pc = 0x1c75d68u;

    // 0x1c75d68: 0x80b0fd6  j           func_2C3F58
    ctx->pc = 0x1C75D68u;
    ctx->pc = 0x2C3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F58u, 0x1C75D68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C75D70u;
}
