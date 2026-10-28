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

// Function: sub_01CC2C88
// Address: 0x1cc2c88 - 0x1cc2c90
void sub_01CC2C88_0x1cc2c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2C88_0x1cc2c88");
#endif

    ctx->pc = 0x1cc2c88u;

    // 0x1cc2c88: 0x80b25e2  j           func_2C9788
    ctx->pc = 0x1CC2C88u;
    ctx->pc = 0x2C9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9788u, 0x1CC2C88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2C90u;
}
