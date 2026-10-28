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

// Function: sub_01DB1038
// Address: 0x1db1038 - 0x1db1040
void sub_01DB1038_0x1db1038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1038_0x1db1038");
#endif

    ctx->pc = 0x1db1038u;

    // 0x1db1038: 0x80b0dc4  j           func_2C3710
    ctx->pc = 0x1DB1038u;
    ctx->pc = 0x2C3710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3710u, 0x1DB1038u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1040u;
}
