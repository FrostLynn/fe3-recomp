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

// Function: sub_01D71838
// Address: 0x1d71838 - 0x1d71844
void sub_01D71838_0x1d71838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71838_0x1d71838");
#endif

    ctx->pc = 0x1d71838u;

    // 0x1d71838: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d71838u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d7183c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7183Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D71840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7183Cu;
        // 0x1d71840: 0x25e24d30  addiu       $v0, $t7, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 19760));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7183Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71844u;
}
