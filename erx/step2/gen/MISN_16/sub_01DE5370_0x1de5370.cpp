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

// Function: sub_01DE5370
// Address: 0x1de5370 - 0x1de5380
void sub_01DE5370_0x1de5370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE5370_0x1de5370");
#endif

    ctx->pc = 0x1de5370u;

    // 0x1de5370: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1de5370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1de5374: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE5374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5374u;
        // 0x1de5378: 0x24426670  addiu       $v0, $v0, 0x6670 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE5374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE537Cu;
    // 0x1de537c: 0x0  nop
    ctx->pc = 0x1de537cu;
    // NOP
    ctx->pc = 0x1de5380u;
}
