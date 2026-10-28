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

// Function: sub_01C78928
// Address: 0x1c78928 - 0x1c78940
void sub_01C78928_0x1c78928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78928_0x1c78928");
#endif

    ctx->pc = 0x1c78928u;

    // 0x1c78928: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c78928u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c7892c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c7892cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c78930: 0x25ef9838  addiu       $t7, $t7, -0x67C8
    ctx->pc = 0x1c78930u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940728));
    // 0x1c78934: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c78934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c78938: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78938u;
        // 0x1c7893c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78940u;
}
