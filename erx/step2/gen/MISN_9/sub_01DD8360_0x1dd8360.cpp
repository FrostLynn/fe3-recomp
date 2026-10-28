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

// Function: sub_01DD8360
// Address: 0x1dd8360 - 0x1dd8368
void sub_01DD8360_0x1dd8360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8360_0x1dd8360");
#endif

    ctx->pc = 0x1dd8360u;

    // 0x1dd8360: 0x80b073c  j           func_2C1CF0
    ctx->pc = 0x1DD8360u;
    ctx->pc = 0x2C1CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1CF0u, 0x1DD8360u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD8368u;
}
