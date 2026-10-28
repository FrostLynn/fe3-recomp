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

// Function: sub_01C1F268
// Address: 0x1c1f268 - 0x1c1f270
void sub_01C1F268_0x1c1f268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F268_0x1c1f268");
#endif

    ctx->pc = 0x1c1f268u;

    // 0x1c1f268: 0x80b0eae  j           func_2C3AB8
    ctx->pc = 0x1C1F268u;
    ctx->pc = 0x2C3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3AB8u, 0x1C1F268u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F270u;
}
