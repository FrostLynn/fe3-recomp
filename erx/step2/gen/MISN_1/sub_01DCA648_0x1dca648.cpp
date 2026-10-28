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

// Function: sub_01DCA648
// Address: 0x1dca648 - 0x1dca658
void sub_01DCA648_0x1dca648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCA648_0x1dca648");
#endif

    ctx->pc = 0x1dca648u;

    // 0x1dca648: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x1dca648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x1dca64c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA64Cu;
        // 0x1dca650: 0x2442ba60  addiu       $v0, $v0, -0x45A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949472));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCA654u;
    // 0x1dca654: 0x0  nop
    ctx->pc = 0x1dca654u;
    // NOP
    ctx->pc = 0x1dca658u;
}
