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

// Function: sub_01C81220
// Address: 0x1c81220 - 0x1c81228
void sub_01C81220_0x1c81220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81220_0x1c81220");
#endif

    ctx->pc = 0x1c81220u;

    // 0x1c81220: 0x80b1cde  j           func_2C7378
    ctx->pc = 0x1C81220u;
    ctx->pc = 0x2C7378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7378u, 0x1C81220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81228u;
}
