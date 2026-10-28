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

// Function: sub_01D70930
// Address: 0x1d70930 - 0x1d70938
void sub_01D70930_0x1d70930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70930_0x1d70930");
#endif

    ctx->pc = 0x1d70930u;

    // 0x1d70930: 0x80b28ac  j           func_2CA2B0
    ctx->pc = 0x1D70930u;
    ctx->pc = 0x2CA2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2B0u, 0x1D70930u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70938u;
}
