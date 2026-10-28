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

// Function: sub_01C99120
// Address: 0x1c99120 - 0x1c99128
void sub_01C99120_0x1c99120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99120_0x1c99120");
#endif

    ctx->pc = 0x1c99120u;

    // 0x1c99120: 0x80b151a  j           func_2C5468
    ctx->pc = 0x1C99120u;
    ctx->pc = 0x2C5468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5468u, 0x1C99120u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C99128u;
}
