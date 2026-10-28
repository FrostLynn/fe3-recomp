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

// Function: sub_01D77B60
// Address: 0x1d77b60 - 0x1d77b68
void sub_01D77B60_0x1d77b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77B60_0x1d77b60");
#endif

    ctx->pc = 0x1d77b60u;

    // 0x1d77b60: 0x80b2e4e  j           func_2CB938
    ctx->pc = 0x1D77B60u;
    ctx->pc = 0x2CB938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB938u, 0x1D77B60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77B68u;
}
