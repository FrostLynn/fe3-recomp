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

// Function: sub_01DCC3E0
// Address: 0x1dcc3e0 - 0x1dcc3f0
void sub_01DCC3E0_0x1dcc3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCC3E0_0x1dcc3e0");
#endif

    ctx->pc = 0x1dcc3e0u;

    // 0x1dcc3e0: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x1dcc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x1dcc3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC3E4u;
        // 0x1dcc3e8: 0x2442d758  addiu       $v0, $v0, -0x28A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956888));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC3ECu;
    // 0x1dcc3ec: 0x0  nop
    ctx->pc = 0x1dcc3ecu;
    // NOP
    ctx->pc = 0x1dcc3f0u;
}
