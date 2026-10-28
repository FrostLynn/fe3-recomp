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

// Function: sub_01CB93E4
// Address: 0x1cb93e4 - 0x1cb93f0
void sub_01CB93E4_0x1cb93e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB93E4_0x1cb93e4");
#endif

    ctx->pc = 0x1cb93e4u;

    // 0x1cb93e4: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb93e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb93e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB93E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB93E8u;
        // 0x1cb93ec: 0x25e2f3e8  addiu       $v0, $t7, -0xC18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB93E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB93F0u;
}
