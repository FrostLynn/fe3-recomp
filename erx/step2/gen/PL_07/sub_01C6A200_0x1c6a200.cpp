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

// Function: sub_01C6A200
// Address: 0x1c6a200 - 0x1c6a208
void sub_01C6A200_0x1c6a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A200_0x1c6a200");
#endif

    ctx->pc = 0x1c6a200u;

    // 0x1c6a200: 0x80b17b8  j           func_2C5EE0
    ctx->pc = 0x1C6A200u;
    ctx->pc = 0x2C5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5EE0u, 0x1C6A200u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A208u;
}
