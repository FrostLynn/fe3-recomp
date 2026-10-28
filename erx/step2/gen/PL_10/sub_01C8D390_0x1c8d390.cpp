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

// Function: sub_01C8D390
// Address: 0x1c8d390 - 0x1c8d398
void sub_01C8D390_0x1c8d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8D390_0x1c8d390");
#endif

    ctx->pc = 0x1c8d390u;

    // 0x1c8d390: 0x80b1000  j           func_2C4000
    ctx->pc = 0x1C8D390u;
    ctx->pc = 0x2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4000u, 0x1C8D390u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8D398u;
}
