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

// Function: sub_01C81378
// Address: 0x1c81378 - 0x1c81380
void sub_01C81378_0x1c81378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81378_0x1c81378");
#endif

    ctx->pc = 0x1c81378u;

    // 0x1c81378: 0x80b0fea  j           func_2C3FA8
    ctx->pc = 0x1C81378u;
    ctx->pc = 0x2C3FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FA8u, 0x1C81378u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81380u;
}
