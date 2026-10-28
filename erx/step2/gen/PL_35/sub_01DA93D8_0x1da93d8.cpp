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

// Function: sub_01DA93D8
// Address: 0x1da93d8 - 0x1da9408
void sub_01DA93D8_0x1da93d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA93D8_0x1da93d8");
#endif

    ctx->pc = 0x1da93d8u;

    // 0x1da93d8: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1da93d8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1da93dc: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DA93DCu;
    {
        const bool branch_taken_0x1da93dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA93DCu;
        // 0x1da93e0: 0x3c0e01db  lui         $t6, 0x1DB (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)475 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da93dc) {
            ctx->pc = 0x1DA9450u;
            return;
        }
    }
    ctx->pc = 0x1DA93E4u;
    // 0x1da93e4: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1da93e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1da93e8: 0x25ce9eb0  addiu       $t6, $t6, -0x6150
    ctx->pc = 0x1da93e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294942384));
    // 0x1da93ec: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1da93ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1da93f0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1da93f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da93f4: 0x1a00008  jr          $t5
    ctx->pc = 0x1DA93F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA93FCu: goto label_1da93fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA93F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DA93FCu;
label_1da93fc:
    // 0x1da93fc: 0x3c0f01db  lui         $t7, 0x1DB
    ctx->pc = 0x1da93fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)475 << 16));
    // 0x1da9400: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA9400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9400u;
        // 0x1da9404: 0x25e2cc80  addiu       $v0, $t7, -0x3380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA9400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA9408u;
}
