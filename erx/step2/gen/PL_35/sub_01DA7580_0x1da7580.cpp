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

// Function: sub_01DA7580
// Address: 0x1da7580 - 0x1da7588
void sub_01DA7580_0x1da7580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7580_0x1da7580");
#endif

    ctx->pc = 0x1da7580u;

    // 0x1da7580: 0x80b2120  j           func_2C8480
    ctx->pc = 0x1DA7580u;
    ctx->pc = 0x2C8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8480u, 0x1DA7580u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7588u;
}
