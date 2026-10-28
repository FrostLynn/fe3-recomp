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

// Function: sub_01CEFD68
// Address: 0x1cefd68 - 0x1cefd70
void sub_01CEFD68_0x1cefd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFD68_0x1cefd68");
#endif

    ctx->pc = 0x1cefd68u;

    // 0x1cefd68: 0x80b24fe  j           func_2C93F8
    ctx->pc = 0x1CEFD68u;
    ctx->pc = 0x2C93F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C93F8u, 0x1CEFD68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFD70u;
}
