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

// Function: sub_01C12070
// Address: 0x1c12070 - 0x1c120a0
void sub_01C12070_0x1c12070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C12070_0x1c12070");
#endif

    ctx->pc = 0x1c12070u;

    // 0x1c12070: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1c12070u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c12074: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C12074u;
    {
        const bool branch_taken_0x1c12074 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C12078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12074u;
        // 0x1c12078: 0x3c0e01c1  lui         $t6, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12074) {
            ctx->pc = 0x1C120E8u;
            return;
        }
    }
    ctx->pc = 0x1C1207Cu;
    // 0x1c1207c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c1207cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c12080: 0x25ce2d3c  addiu       $t6, $t6, 0x2D3C
    ctx->pc = 0x1c12080u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11580));
    // 0x1c12084: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c12084u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c12088: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c12088u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c1208c: 0x1a00008  jr          $t5
    ctx->pc = 0x1C1208Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C12094u: goto label_1c12094;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1208Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C12094u;
label_1c12094:
    // 0x1c12094: 0x3c0f01c2  lui         $t7, 0x1C2
    ctx->pc = 0x1c12094u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)450 << 16));
    // 0x1c12098: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12098u;
        // 0x1c1209c: 0x25e2b590  addiu       $v0, $t7, -0x4A70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C12098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C120A0u;
}
