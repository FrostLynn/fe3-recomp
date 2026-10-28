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

// Function: sub_01CEFCF8
// Address: 0x1cefcf8 - 0x1cefd00
void sub_01CEFCF8_0x1cefcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFCF8_0x1cefcf8");
#endif

    ctx->pc = 0x1cefcf8u;

    // 0x1cefcf8: 0x80b23a4  j           func_2C8E90
    ctx->pc = 0x1CEFCF8u;
    ctx->pc = 0x2C8E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E90u, 0x1CEFCF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFD00u;
}
