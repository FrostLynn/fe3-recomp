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

// Function: sub_01D51718
// Address: 0x1d51718 - 0x1d51720
void sub_01D51718_0x1d51718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D51718_0x1d51718");
#endif

    ctx->pc = 0x1d51718u;

    // 0x1d51718: 0x80b2492  j           func_2C9248
    ctx->pc = 0x1D51718u;
    ctx->pc = 0x2C9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9248u, 0x1D51718u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D51720u;
}
