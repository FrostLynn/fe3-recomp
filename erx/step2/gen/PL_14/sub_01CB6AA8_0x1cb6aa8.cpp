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

// Function: sub_01CB6AA8
// Address: 0x1cb6aa8 - 0x1cb6ab0
void sub_01CB6AA8_0x1cb6aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6AA8_0x1cb6aa8");
#endif

    ctx->pc = 0x1cb6aa8u;

    // 0x1cb6aa8: 0x80b1672  j           func_2C59C8
    ctx->pc = 0x1CB6AA8u;
    ctx->pc = 0x2C59C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C59C8u, 0x1CB6AA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6AB0u;
}
