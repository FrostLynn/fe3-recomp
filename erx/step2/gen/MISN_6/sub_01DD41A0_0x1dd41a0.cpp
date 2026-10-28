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

// Function: sub_01DD41A0
// Address: 0x1dd41a0 - 0x1dd41b0
void sub_01DD41A0_0x1dd41a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD41A0_0x1dd41a0");
#endif

    ctx->pc = 0x1dd41a0u;

    // 0x1dd41a0: 0xaf848014  sw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd41a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), GPR_U32(ctx, 4));
    // 0x1dd41a4: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x1dd41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x1dd41a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD41A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD41A8u;
        // 0x1dd41ac: 0x24424c70  addiu       $v0, $v0, 0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD41A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD41B0u;
}
