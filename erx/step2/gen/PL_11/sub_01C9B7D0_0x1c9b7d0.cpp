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

// Function: sub_01C9B7D0
// Address: 0x1c9b7d0 - 0x1c9b800
void sub_01C9B7D0_0x1c9b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B7D0_0x1c9b7d0");
#endif

    ctx->pc = 0x1c9b7d0u;

    // 0x1c9b7d0: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1c9b7d0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c9b7d4: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C9B7D4u;
    {
        const bool branch_taken_0x1c9b7d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B7D4u;
        // 0x1c9b7d8: 0x3c0e01ca  lui         $t6, 0x1CA (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)458 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b7d4) {
            ctx->pc = 0x1C9B848u;
            return;
        }
    }
    ctx->pc = 0x1C9B7DCu;
    // 0x1c9b7dc: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c9b7dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c9b7e0: 0x25cec41c  addiu       $t6, $t6, -0x3BE4
    ctx->pc = 0x1c9b7e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294951964));
    // 0x1c9b7e4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c9b7e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c9b7e8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c9b7e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c9b7ec: 0x1a00008  jr          $t5
    ctx->pc = 0x1C9B7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9B7F4u: goto label_1c9b7f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B7ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C9B7F4u;
label_1c9b7f4:
    // 0x1c9b7f4: 0x3c0f01ca  lui         $t7, 0x1CA
    ctx->pc = 0x1c9b7f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)458 << 16));
    // 0x1c9b7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B7F8u;
        // 0x1c9b7fc: 0x25e2ea20  addiu       $v0, $t7, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B800u;
}
