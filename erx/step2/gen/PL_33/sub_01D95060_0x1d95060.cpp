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

// Function: sub_01D95060
// Address: 0x1d95060 - 0x1d95090
void sub_01D95060_0x1d95060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D95060_0x1d95060");
#endif

    ctx->pc = 0x1d95060u;

    // 0x1d95060: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d95060u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d95064: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D95064u;
    {
        const bool branch_taken_0x1d95064 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D95068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95064u;
        // 0x1d95068: 0x3c0e01d9  lui         $t6, 0x1D9 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)473 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95064) {
            ctx->pc = 0x1D950D8u;
            return;
        }
    }
    ctx->pc = 0x1D9506Cu;
    // 0x1d9506c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d9506cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d95070: 0x25ce5b2c  addiu       $t6, $t6, 0x5B2C
    ctx->pc = 0x1d95070u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 23340));
    // 0x1d95074: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d95074u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d95078: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d95078u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d9507c: 0x1a00008  jr          $t5
    ctx->pc = 0x1D9507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D95084u: goto label_1d95084;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9507Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D95084u;
label_1d95084:
    // 0x1d95084: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x1d95084u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x1d95088: 0x3e00008  jr          $ra
    ctx->pc = 0x1D95088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95088u;
        // 0x1d9508c: 0x25e28950  addiu       $v0, $t7, -0x76B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294936912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D95088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D95090u;
}
