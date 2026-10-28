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

// Function: sub_01DE6868
// Address: 0x1de6868 - 0x1de6878
void sub_01DE6868_0x1de6868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE6868_0x1de6868");
#endif

    ctx->pc = 0x1de6868u;

    // 0x1de6868: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1de6868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1de686c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE686Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE686Cu;
        // 0x1de6870: 0x24426cf0  addiu       $v0, $v0, 0x6CF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27888));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE686Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE6874u;
    // 0x1de6874: 0x0  nop
    ctx->pc = 0x1de6874u;
    // NOP
    ctx->pc = 0x1de6878u;
}
