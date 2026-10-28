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

// Function: sub_01C00140
// Address: 0x1c00140 - 0x1c00148
void sub_01C00140_0x1c00140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00140_0x1c00140");
#endif

    ctx->pc = 0x1c00140u;

    // 0x1c00140: 0x80b0db2  j           func_2C36C8
    ctx->pc = 0x1C00140u;
    ctx->pc = 0x2C36C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C36C8u, 0x1C00140u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00148u;
}
