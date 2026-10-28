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

// Function: sub_01DE1A98
// Address: 0x1de1a98 - 0x1de1ad0
void sub_01DE1A98_0x1de1a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1A98_0x1de1a98");
#endif

    ctx->pc = 0x1de1a98u;

    // 0x1de1a98: 0x8f8c8014  lw          $t4, -0x7FEC($gp)
    ctx->pc = 0x1de1a98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1a9c: 0x8d8d00e0  lw          $t5, 0xE0($t4)
    ctx->pc = 0x1de1a9cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 224)));
    // 0x1de1aa0: 0x8dae000c  lw          $t6, 0xC($t5)
    ctx->pc = 0x1de1aa0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1de1aa4: 0x8daf0078  lw          $t7, 0x78($t5)
    ctx->pc = 0x1de1aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 120)));
    // 0x1de1aa8: 0x15ee0007  bne         $t7, $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE1AA8u;
    {
        const bool branch_taken_0x1de1aa8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x1DE1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1AA8u;
        // 0x1de1aac: 0x240f0157  addiu       $t7, $zero, 0x157 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1aa8) {
            ctx->pc = 0x1DE1AC8u;
            goto label_1de1ac8;
        }
    }
    ctx->pc = 0x1DE1AB0u;
    // 0x1de1ab0: 0x8dae007c  lw          $t6, 0x7C($t5)
    ctx->pc = 0x1de1ab0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 124)));
    // 0x1de1ab4: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE1AB4u;
    {
        const bool branch_taken_0x1de1ab4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1de1ab4) {
            ctx->pc = 0x1DE1AC8u;
            goto label_1de1ac8;
        }
    }
    ctx->pc = 0x1DE1ABCu;
    // 0x1de1abc: 0x958f056e  lhu         $t7, 0x56E($t4)
    ctx->pc = 0x1de1abcu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 1390)));
    // 0x1de1ac0: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1de1ac0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1de1ac4: 0xa58f056e  sh          $t7, 0x56E($t4)
    ctx->pc = 0x1de1ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de1ac8:
    // 0x1de1ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1AD0u;
}
