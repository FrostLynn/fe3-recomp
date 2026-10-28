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

// Function: sub_01CB6AF8
// Address: 0x1cb6af8 - 0x1cb6b00
void sub_01CB6AF8_0x1cb6af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6AF8_0x1cb6af8");
#endif

    ctx->pc = 0x1cb6af8u;

    // 0x1cb6af8: 0x80b176e  j           func_2C5DB8
    ctx->pc = 0x1CB6AF8u;
    ctx->pc = 0x2C5DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5DB8u, 0x1CB6AF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6B00u;
}
