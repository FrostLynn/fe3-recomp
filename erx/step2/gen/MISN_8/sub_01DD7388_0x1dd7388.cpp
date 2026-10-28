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

// Function: sub_01DD7388
// Address: 0x1dd7388 - 0x1dd7398
void sub_01DD7388_0x1dd7388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD7388_0x1dd7388");
#endif

    ctx->pc = 0x1dd7388u;

    // 0x1dd7388: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1dd7388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1dd738c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD738Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD738Cu;
        // 0x1dd7390: 0x244281d8  addiu       $v0, $v0, -0x7E28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD738Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD7394u;
    // 0x1dd7394: 0x0  nop
    ctx->pc = 0x1dd7394u;
    // NOP
    ctx->pc = 0x1dd7398u;
}
