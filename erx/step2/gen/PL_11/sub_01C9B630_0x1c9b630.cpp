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

// Function: sub_01C9B630
// Address: 0x1c9b630 - 0x1c9b648
void sub_01C9B630_0x1c9b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B630_0x1c9b630");
#endif

    ctx->pc = 0x1c9b630u;

    // 0x1c9b630: 0x3c0f01ca  lui         $t7, 0x1CA
    ctx->pc = 0x1c9b630u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)458 << 16));
    // 0x1c9b634: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c9b634u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c9b638: 0x25efc438  addiu       $t7, $t7, -0x3BC8
    ctx->pc = 0x1c9b638u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294951992));
    // 0x1c9b63c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c9b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c9b640: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B640u;
        // 0x1c9b644: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B648u;
}
