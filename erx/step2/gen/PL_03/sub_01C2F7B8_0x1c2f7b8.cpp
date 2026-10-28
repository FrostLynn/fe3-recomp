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

// Function: sub_01C2F7B8
// Address: 0x1c2f7b8 - 0x1c2f7c0
void sub_01C2F7B8_0x1c2f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2F7B8_0x1c2f7b8");
#endif

    ctx->pc = 0x1c2f7b8u;

    // 0x1c2f7b8: 0x80b32b8  j           func_2CCAE0
    ctx->pc = 0x1C2F7B8u;
    ctx->pc = 0x2CCAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCAE0u, 0x1C2F7B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2F7C0u;
}
