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

// Function: sub_01D707E8
// Address: 0x1d707e8 - 0x1d707f0
void sub_01D707E8_0x1d707e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D707E8_0x1d707e8");
#endif

    ctx->pc = 0x1d707e8u;

    // 0x1d707e8: 0x80b24a6  j           func_2C9298
    ctx->pc = 0x1D707E8u;
    ctx->pc = 0x2C9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9298u, 0x1D707E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D707F0u;
}
