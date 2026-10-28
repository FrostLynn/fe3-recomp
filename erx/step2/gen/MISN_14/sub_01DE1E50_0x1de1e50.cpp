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

// Function: sub_01DE1E50
// Address: 0x1de1e50 - 0x1de1e60
void sub_01DE1E50_0x1de1e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1E50_0x1de1e50");
#endif

    ctx->pc = 0x1de1e50u;

    // 0x1de1e50: 0xaf848014  sw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), GPR_U32(ctx, 4));
    // 0x1de1e54: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1de1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1de1e58: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1E58u;
        // 0x1de1e5c: 0x24422ae0  addiu       $v0, $v0, 0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1E60u;
}
