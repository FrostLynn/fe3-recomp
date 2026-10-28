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

// Function: sub_01DBB970
// Address: 0x1dbb970 - 0x1dbb978
void sub_01DBB970_0x1dbb970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBB970_0x1dbb970");
#endif

    ctx->pc = 0x1dbb970u;

    // 0x1dbb970: 0x80b2e4e  j           func_2CB938
    ctx->pc = 0x1DBB970u;
    ctx->pc = 0x2CB938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB938u, 0x1DBB970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBB978u;
}
