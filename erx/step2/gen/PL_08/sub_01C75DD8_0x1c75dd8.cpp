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

// Function: sub_01C75DD8
// Address: 0x1c75dd8 - 0x1c75de0
void sub_01C75DD8_0x1c75dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C75DD8_0x1c75dd8");
#endif

    ctx->pc = 0x1c75dd8u;

    // 0x1c75dd8: 0x80b1082  j           func_2C4208
    ctx->pc = 0x1C75DD8u;
    ctx->pc = 0x2C4208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4208u, 0x1C75DD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C75DE0u;
}
