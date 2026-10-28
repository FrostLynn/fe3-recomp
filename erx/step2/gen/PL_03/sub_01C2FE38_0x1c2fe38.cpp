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

// Function: sub_01C2FE38
// Address: 0x1c2fe38 - 0x1c2fe40
void sub_01C2FE38_0x1c2fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2FE38_0x1c2fe38");
#endif

    ctx->pc = 0x1c2fe38u;

    // 0x1c2fe38: 0x80b2052  j           func_2C8148
    ctx->pc = 0x1C2FE38u;
    ctx->pc = 0x2C8148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8148u, 0x1C2FE38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2FE40u;
}
