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

// Function: sub_01D71868
// Address: 0x1d71868 - 0x1d71874
void sub_01D71868_0x1d71868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71868_0x1d71868");
#endif

    ctx->pc = 0x1d71868u;

    // 0x1d71868: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d71868u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d7186c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7186Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D71870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7186Cu;
        // 0x1d71870: 0x25e262e0  addiu       $v0, $t7, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 25312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7186Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71874u;
}
