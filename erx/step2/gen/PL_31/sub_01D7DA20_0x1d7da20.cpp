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

// Function: sub_01D7DA20
// Address: 0x1d7da20 - 0x1d7da28
void sub_01D7DA20_0x1d7da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7DA20_0x1d7da20");
#endif

    ctx->pc = 0x1d7da20u;

    // 0x1d7da20: 0x80b1cde  j           func_2C7378
    ctx->pc = 0x1D7DA20u;
    ctx->pc = 0x2C7378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7378u, 0x1D7DA20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7DA28u;
}
