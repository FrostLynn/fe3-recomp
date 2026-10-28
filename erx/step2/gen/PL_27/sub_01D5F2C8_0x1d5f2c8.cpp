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

// Function: sub_01D5F2C8
// Address: 0x1d5f2c8 - 0x1d5f2f8
void sub_01D5F2C8_0x1d5f2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5F2C8_0x1d5f2c8");
#endif

    ctx->pc = 0x1d5f2c8u;

    // 0x1d5f2c8: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d5f2c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d5f2cc: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D5F2CCu;
    {
        const bool branch_taken_0x1d5f2cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F2CCu;
        // 0x1d5f2d0: 0x3c0e01d6  lui         $t6, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)470 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f2cc) {
            ctx->pc = 0x1D5F340u;
            return;
        }
    }
    ctx->pc = 0x1D5F2D4u;
    // 0x1d5f2d4: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d5f2d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d5f2d8: 0x25cefcb0  addiu       $t6, $t6, -0x350
    ctx->pc = 0x1d5f2d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966448));
    // 0x1d5f2dc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d5f2dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d5f2e0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d5f2e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d5f2e4: 0x1a00008  jr          $t5
    ctx->pc = 0x1D5F2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5F2ECu: goto label_1d5f2ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F2E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D5F2ECu;
label_1d5f2ec:
    // 0x1d5f2ec: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d5f2ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d5f2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F2F0u;
        // 0x1d5f2f4: 0x25e22910  addiu       $v0, $t7, 0x2910 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 10512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F2F8u;
}
