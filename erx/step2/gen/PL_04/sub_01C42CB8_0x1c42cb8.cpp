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

// Function: sub_01C42CB8
// Address: 0x1c42cb8 - 0x1c42cc0
void sub_01C42CB8_0x1c42cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42CB8_0x1c42cb8");
#endif

    ctx->pc = 0x1c42cb8u;

    // 0x1c42cb8: 0x80b26a8  j           func_2C9AA0
    ctx->pc = 0x1C42CB8u;
    ctx->pc = 0x2C9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9AA0u, 0x1C42CB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42CC0u;
}
