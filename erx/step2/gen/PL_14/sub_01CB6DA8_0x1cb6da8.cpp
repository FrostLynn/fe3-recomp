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

// Function: sub_01CB6DA8
// Address: 0x1cb6da8 - 0x1cb6db0
void sub_01CB6DA8_0x1cb6da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6DA8_0x1cb6da8");
#endif

    ctx->pc = 0x1cb6da8u;

    // 0x1cb6da8: 0x80b1e9a  j           func_2C7A68
    ctx->pc = 0x1CB6DA8u;
    ctx->pc = 0x2C7A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7A68u, 0x1CB6DA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6DB0u;
}
