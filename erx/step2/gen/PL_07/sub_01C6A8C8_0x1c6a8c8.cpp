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

// Function: sub_01C6A8C8
// Address: 0x1c6a8c8 - 0x1c6a8d0
void sub_01C6A8C8_0x1c6a8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A8C8_0x1c6a8c8");
#endif

    ctx->pc = 0x1c6a8c8u;

    // 0x1c6a8c8: 0x80b2f70  j           func_2CBDC0
    ctx->pc = 0x1C6A8C8u;
    ctx->pc = 0x2CBDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBDC0u, 0x1C6A8C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A8D0u;
}
