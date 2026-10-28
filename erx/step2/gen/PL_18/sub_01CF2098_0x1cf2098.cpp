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

// Function: sub_01CF2098
// Address: 0x1cf2098 - 0x1cf20c8
void sub_01CF2098_0x1cf2098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF2098_0x1cf2098");
#endif

    ctx->pc = 0x1cf2098u;

    // 0x1cf2098: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1cf2098u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1cf209c: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CF209Cu;
    {
        const bool branch_taken_0x1cf209c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF209Cu;
        // 0x1cf20a0: 0x3c0e01cf  lui         $t6, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf209c) {
            ctx->pc = 0x1CF2110u;
            return;
        }
    }
    ctx->pc = 0x1CF20A4u;
    // 0x1cf20a4: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1cf20a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cf20a8: 0x25ce304c  addiu       $t6, $t6, 0x304C
    ctx->pc = 0x1cf20a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12364));
    // 0x1cf20ac: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cf20acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cf20b0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cf20b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cf20b4: 0x1a00008  jr          $t5
    ctx->pc = 0x1CF20B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF20BCu: goto label_1cf20bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF20B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CF20BCu;
label_1cf20bc:
    // 0x1cf20bc: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1cf20bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1cf20c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF20C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF20C0u;
        // 0x1cf20c4: 0x25e28b90  addiu       $v0, $t7, -0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294937488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF20C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF20C8u;
}
