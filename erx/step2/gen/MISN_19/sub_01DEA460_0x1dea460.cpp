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

// Function: sub_01DEA460
// Address: 0x1dea460 - 0x1dea470
void sub_01DEA460_0x1dea460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA460_0x1dea460");
#endif

    ctx->pc = 0x1dea460u;

    // 0x1dea460: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x1dea460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x1dea464: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA464u;
        // 0x1dea468: 0x2442ae88  addiu       $v0, $v0, -0x5178 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA46Cu;
    // 0x1dea46c: 0x0  nop
    ctx->pc = 0x1dea46cu;
    // NOP
    ctx->pc = 0x1dea470u;
}
