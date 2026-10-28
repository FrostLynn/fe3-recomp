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

// Function: sub_01D53D48
// Address: 0x1d53d48 - 0x1d53d54
void sub_01D53D48_0x1d53d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53D48_0x1d53d48");
#endif

    ctx->pc = 0x1d53d48u;

    // 0x1d53d48: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d53d48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d53d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53D4Cu;
        // 0x1d53d50: 0x25e2b230  addiu       $v0, $t7, -0x4DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53D54u;
}
