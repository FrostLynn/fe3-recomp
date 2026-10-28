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

// Function: sub_01D3E348
// Address: 0x1d3e348 - 0x1d3e360
void sub_01D3E348_0x1d3e348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3E348_0x1d3e348");
#endif

    ctx->pc = 0x1d3e348u;

    // 0x1d3e348: 0x3c0f01d4  lui         $t7, 0x1D4
    ctx->pc = 0x1d3e348u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)468 << 16));
    // 0x1d3e34c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d3e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d3e350: 0x25efee38  addiu       $t7, $t7, -0x11C8
    ctx->pc = 0x1d3e350u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962744));
    // 0x1d3e354: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d3e354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d3e358: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3E358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E358u;
        // 0x1d3e35c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E360u;
}
