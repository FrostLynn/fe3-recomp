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

// Function: sub_01DE6858
// Address: 0x1de6858 - 0x1de6868
void sub_01DE6858_0x1de6858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE6858_0x1de6858");
#endif

    ctx->pc = 0x1de6858u;

    // 0x1de6858: 0xaf848014  sw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de6858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), GPR_U32(ctx, 4));
    // 0x1de685c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1de685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1de6860: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE6860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6860u;
        // 0x1de6864: 0x24426a88  addiu       $v0, $v0, 0x6A88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE6868u;
}
