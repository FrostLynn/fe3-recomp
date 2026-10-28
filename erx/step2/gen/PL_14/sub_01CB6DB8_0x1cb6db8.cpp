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

// Function: sub_01CB6DB8
// Address: 0x1cb6db8 - 0x1cb6dc0
void sub_01CB6DB8_0x1cb6db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6DB8_0x1cb6db8");
#endif

    ctx->pc = 0x1cb6db8u;

    // 0x1cb6db8: 0x80b1ebe  j           func_2C7AF8
    ctx->pc = 0x1CB6DB8u;
    ctx->pc = 0x2C7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7AF8u, 0x1CB6DB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6DC0u;
}
