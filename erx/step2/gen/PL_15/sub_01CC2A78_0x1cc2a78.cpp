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

// Function: sub_01CC2A78
// Address: 0x1cc2a78 - 0x1cc2a80
void sub_01CC2A78_0x1cc2a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2A78_0x1cc2a78");
#endif

    ctx->pc = 0x1cc2a78u;

    // 0x1cc2a78: 0x80b1e10  j           func_2C7840
    ctx->pc = 0x1CC2A78u;
    ctx->pc = 0x2C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7840u, 0x1CC2A78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2A80u;
}
