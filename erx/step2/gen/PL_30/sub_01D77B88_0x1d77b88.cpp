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

// Function: sub_01D77B88
// Address: 0x1d77b88 - 0x1d77b90
void sub_01D77B88_0x1d77b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77B88_0x1d77b88");
#endif

    ctx->pc = 0x1d77b88u;

    // 0x1d77b88: 0x80ae442  j           func_2B9108
    ctx->pc = 0x1D77B88u;
    ctx->pc = 0x2B9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9108u, 0x1D77B88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77B90u;
}
