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

// Function: sub_01C6A0C8
// Address: 0x1c6a0c8 - 0x1c6a0d0
void sub_01C6A0C8_0x1c6a0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A0C8_0x1c6a0c8");
#endif

    ctx->pc = 0x1c6a0c8u;

    // 0x1c6a0c8: 0x80b19fa  j           func_2C67E8
    ctx->pc = 0x1C6A0C8u;
    ctx->pc = 0x2C67E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C67E8u, 0x1C6A0C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A0D0u;
}
