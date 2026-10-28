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

// Function: sub_01DD8378
// Address: 0x1dd8378 - 0x1dd8380
void sub_01DD8378_0x1dd8378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8378_0x1dd8378");
#endif

    ctx->pc = 0x1dd8378u;

    // 0x1dd8378: 0x8096cbc  j           func_25B2F0
    ctx->pc = 0x1DD8378u;
    ctx->pc = 0x25B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2F0u, 0x1DD8378u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD8380u;
}
