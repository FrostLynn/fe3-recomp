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

// Function: sub_01CB6FA0
// Address: 0x1cb6fa0 - 0x1cb6fa8
void sub_01CB6FA0_0x1cb6fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6FA0_0x1cb6fa0");
#endif

    ctx->pc = 0x1cb6fa0u;

    // 0x1cb6fa0: 0x80b25f6  j           func_2C97D8
    ctx->pc = 0x1CB6FA0u;
    ctx->pc = 0x2C97D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C97D8u, 0x1CB6FA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6FA8u;
}
