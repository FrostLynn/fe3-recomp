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

// Function: sub_01D357FC
// Address: 0x1d357fc - 0x1d3580c
void sub_01D357FC_0x1d357fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D357FC_0x1d357fc");
#endif

    ctx->pc = 0x1d357fcu;

    // 0x1d357fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D357FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D357FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D35804u;
    // 0x1d35804: 0x0  nop
    ctx->pc = 0x1d35804u;
    // NOP
    // 0x1d35808: 0x0  nop
    ctx->pc = 0x1d35808u;
    // NOP
    ctx->pc = 0x1d3580cu;
}
