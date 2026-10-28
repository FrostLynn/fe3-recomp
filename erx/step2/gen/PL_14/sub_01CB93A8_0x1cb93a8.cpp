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

// Function: sub_01CB93A8
// Address: 0x1cb93a8 - 0x1cb93d8
void sub_01CB93A8_0x1cb93a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB93A8_0x1cb93a8");
#endif

    ctx->pc = 0x1cb93a8u;

    // 0x1cb93a8: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1cb93a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1cb93ac: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CB93ACu;
    {
        const bool branch_taken_0x1cb93ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB93ACu;
        // 0x1cb93b0: 0x3c0e01cc  lui         $t6, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb93ac) {
            ctx->pc = 0x1CB9420u;
            return;
        }
    }
    ctx->pc = 0x1CB93B4u;
    // 0x1cb93b4: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1cb93b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb93b8: 0x25ce9ffc  addiu       $t6, $t6, -0x6004
    ctx->pc = 0x1cb93b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294942716));
    // 0x1cb93bc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cb93bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cb93c0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cb93c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cb93c4: 0x1a00008  jr          $t5
    ctx->pc = 0x1CB93C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB93CCu: goto label_1cb93cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB93C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB93CCu;
label_1cb93cc:
    // 0x1cb93cc: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb93ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb93d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB93D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB93D0u;
        // 0x1cb93d4: 0x25e2dd80  addiu       $v0, $t7, -0x2280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294958464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB93D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB93D8u;
}
