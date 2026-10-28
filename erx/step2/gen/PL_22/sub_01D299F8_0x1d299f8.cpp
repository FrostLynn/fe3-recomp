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

// Function: sub_01D299F8
// Address: 0x1d299f8 - 0x1d29a10
void sub_01D299F8_0x1d299f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D299F8_0x1d299f8");
#endif

    ctx->pc = 0x1d299f8u;

    // 0x1d299f8: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d299f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d299fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d299fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d29a00: 0x25efa8d8  addiu       $t7, $t7, -0x5728
    ctx->pc = 0x1d29a00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294944984));
    // 0x1d29a04: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d29a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d29a08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29A08u;
        // 0x1d29a0c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29A10u;
}
