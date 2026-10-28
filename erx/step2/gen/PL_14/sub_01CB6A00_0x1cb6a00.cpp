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

// Function: sub_01CB6A00
// Address: 0x1cb6a00 - 0x1cb6a08
void sub_01CB6A00_0x1cb6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6A00_0x1cb6a00");
#endif

    ctx->pc = 0x1cb6a00u;

    // 0x1cb6a00: 0x80b192e  j           func_2C64B8
    ctx->pc = 0x1CB6A00u;
    ctx->pc = 0x2C64B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C64B8u, 0x1CB6A00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6A08u;
}
