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

// Function: sub_01DE0AA8
// Address: 0x1de0aa8 - 0x1de0ab8
void sub_01DE0AA8_0x1de0aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0AA8_0x1de0aa8");
#endif

    ctx->pc = 0x1de0aa8u;

    // 0x1de0aa8: 0xaf848018  sw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1de0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 4));
    // 0x1de0aac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1de0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1de0ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0AB0u;
        // 0x1de0ab4: 0x24421088  addiu       $v0, $v0, 0x1088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE0AB8u;
}
