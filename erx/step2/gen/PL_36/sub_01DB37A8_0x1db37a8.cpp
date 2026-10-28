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

// Function: sub_01DB37A8
// Address: 0x1db37a8 - 0x1db37d8
void sub_01DB37A8_0x1db37a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB37A8_0x1db37a8");
#endif

    ctx->pc = 0x1db37a8u;

    // 0x1db37a8: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1db37a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1db37ac: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DB37ACu;
    {
        const bool branch_taken_0x1db37ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB37ACu;
        // 0x1db37b0: 0x3c0e01db  lui         $t6, 0x1DB (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)475 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db37ac) {
            ctx->pc = 0x1DB3820u;
            return;
        }
    }
    ctx->pc = 0x1DB37B4u;
    // 0x1db37b4: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1db37b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1db37b8: 0x25ce4240  addiu       $t6, $t6, 0x4240
    ctx->pc = 0x1db37b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16960));
    // 0x1db37bc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1db37bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1db37c0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1db37c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1db37c4: 0x1a00008  jr          $t5
    ctx->pc = 0x1DB37C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB37CCu: goto label_1db37cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB37C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DB37CCu;
label_1db37cc:
    // 0x1db37cc: 0x3c0f01db  lui         $t7, 0x1DB
    ctx->pc = 0x1db37ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)475 << 16));
    // 0x1db37d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB37D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB37D0u;
        // 0x1db37d4: 0x25e27e20  addiu       $v0, $t7, 0x7E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 32288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB37D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB37D8u;
}
