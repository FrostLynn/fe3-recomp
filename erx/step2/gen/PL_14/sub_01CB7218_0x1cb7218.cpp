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

// Function: sub_01CB7218
// Address: 0x1cb7218 - 0x1cb7228
void sub_01CB7218_0x1cb7218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7218_0x1cb7218");
#endif

    ctx->pc = 0x1cb7218u;

    // 0x1cb7218: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1CB7218u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1CB7218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB7220u;
    // 0x1cb7220: 0x0  nop
    ctx->pc = 0x1cb7220u;
    // NOP
    // 0x1cb7224: 0x0  nop
    ctx->pc = 0x1cb7224u;
    // NOP
    ctx->pc = 0x1cb7228u;
}
