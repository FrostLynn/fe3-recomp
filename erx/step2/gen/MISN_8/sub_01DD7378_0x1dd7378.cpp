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

// Function: sub_01DD7378
// Address: 0x1dd7378 - 0x1dd7388
void sub_01DD7378_0x1dd7378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD7378_0x1dd7378");
#endif

    ctx->pc = 0x1dd7378u;

    // 0x1dd7378: 0xaf848014  sw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd7378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), GPR_U32(ctx, 4));
    // 0x1dd737c: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x1dd737cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x1dd7380: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD7380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7380u;
        // 0x1dd7384: 0x24427d78  addiu       $v0, $v0, 0x7D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD7380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD7388u;
}
