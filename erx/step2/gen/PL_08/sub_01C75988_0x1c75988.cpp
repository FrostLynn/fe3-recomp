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

// Function: sub_01C75988
// Address: 0x1c75988 - 0x1c75990
void sub_01C75988_0x1c75988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C75988_0x1c75988");
#endif

    ctx->pc = 0x1c75988u;

    // 0x1c75988: 0x80b2e44  j           func_2CB910
    ctx->pc = 0x1C75988u;
    ctx->pc = 0x2CB910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB910u, 0x1C75988u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C75990u;
}
