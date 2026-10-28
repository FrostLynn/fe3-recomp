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

// Function: sub_01DE4E68
// Address: 0x1de4e68 - 0x1de4e70
void sub_01DE4E68_0x1de4e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE4E68_0x1de4e68");
#endif

    ctx->pc = 0x1de4e68u;

    // 0x1de4e68: 0x809cab8  j           func_272AE0
    ctx->pc = 0x1DE4E68u;
    ctx->pc = 0x272AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272AE0u, 0x1DE4E68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE4E70u;
}
