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

// Function: sub_01CB93D8
// Address: 0x1cb93d8 - 0x1cb93e4
void sub_01CB93D8_0x1cb93d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB93D8_0x1cb93d8");
#endif

    ctx->pc = 0x1cb93d8u;

    // 0x1cb93d8: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb93d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb93dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB93DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB93DCu;
        // 0x1cb93e0: 0x25e2f1c8  addiu       $v0, $t7, -0xE38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB93DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB93E4u;
}
