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

// Function: sub_01DD8370
// Address: 0x1dd8370 - 0x1dd8378
void sub_01DD8370_0x1dd8370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8370_0x1dd8370");
#endif

    ctx->pc = 0x1dd8370u;

    // 0x1dd8370: 0x80a6472  j           func_2991C8
    ctx->pc = 0x1DD8370u;
    ctx->pc = 0x2991C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2991C8u, 0x1DD8370u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD8378u;
}
