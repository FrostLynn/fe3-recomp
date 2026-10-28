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

// Function: sub_01D1C06C
// Address: 0x1d1c06c - 0x1d1c078
void sub_01D1C06C_0x1d1c06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1C06C_0x1d1c06c");
#endif

    ctx->pc = 0x1d1c06cu;

    // 0x1d1c06c: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1c06cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1c070: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1C070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C070u;
        // 0x1d1c074: 0x25e23a48  addiu       $v0, $t7, 0x3A48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 14920));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1C078u;
}
