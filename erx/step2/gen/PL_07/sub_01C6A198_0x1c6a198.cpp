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

// Function: sub_01C6A198
// Address: 0x1c6a198 - 0x1c6a1a0
void sub_01C6A198_0x1c6a198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A198_0x1c6a198");
#endif

    ctx->pc = 0x1c6a198u;

    // 0x1c6a198: 0x80b164a  j           func_2C5928
    ctx->pc = 0x1C6A198u;
    ctx->pc = 0x2C5928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5928u, 0x1C6A198u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A1A0u;
}
