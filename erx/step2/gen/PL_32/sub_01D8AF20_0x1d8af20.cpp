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

// Function: sub_01D8AF20
// Address: 0x1d8af20 - 0x1d8af78
void sub_01D8AF20_0x1d8af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8AF20_0x1d8af20");
#endif

    ctx->pc = 0x1d8af20u;

    // 0x1d8af20: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x1d8af20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d8af24: 0x240e007e  addiu       $t6, $zero, 0x7E
    ctx->pc = 0x1d8af24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d8af28: 0x240d0147  addiu       $t5, $zero, 0x147
    ctx->pc = 0x1d8af28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d8af2c: 0xac8f0d10  sw          $t7, 0xD10($a0)
    ctx->pc = 0x1d8af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3344), GPR_U32(ctx, 15));
    // 0x1d8af30: 0x240c0149  addiu       $t4, $zero, 0x149
    ctx->pc = 0x1d8af30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d8af34: 0xac8e0d14  sw          $t6, 0xD14($a0)
    ctx->pc = 0x1d8af34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3348), GPR_U32(ctx, 14));
    // 0x1d8af38: 0x240b0148  addiu       $t3, $zero, 0x148
    ctx->pc = 0x1d8af38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1d8af3c: 0xac8d0d30  sw          $t5, 0xD30($a0)
    ctx->pc = 0x1d8af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 13));
    // 0x1d8af40: 0xac8b0d38  sw          $t3, 0xD38($a0)
    ctx->pc = 0x1d8af40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3384), GPR_U32(ctx, 11));
    // 0x1d8af44: 0xac8c0d34  sw          $t4, 0xD34($a0)
    ctx->pc = 0x1d8af44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3380), GPR_U32(ctx, 12));
    // 0x1d8af48: 0xac8f0d00  sw          $t7, 0xD00($a0)
    ctx->pc = 0x1d8af48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 15));
    // 0x1d8af4c: 0xac8e0d04  sw          $t6, 0xD04($a0)
    ctx->pc = 0x1d8af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 14));
    // 0x1d8af50: 0xac8d0d18  sw          $t5, 0xD18($a0)
    ctx->pc = 0x1d8af50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 13));
    // 0x1d8af54: 0xac8c0d1c  sw          $t4, 0xD1C($a0)
    ctx->pc = 0x1d8af54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 12));
    // 0x1d8af58: 0xac8b0d20  sw          $t3, 0xD20($a0)
    ctx->pc = 0x1d8af58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 11));
    // 0x1d8af5c: 0xac8f0d08  sw          $t7, 0xD08($a0)
    ctx->pc = 0x1d8af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3336), GPR_U32(ctx, 15));
    // 0x1d8af60: 0xac8e0d0c  sw          $t6, 0xD0C($a0)
    ctx->pc = 0x1d8af60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3340), GPR_U32(ctx, 14));
    // 0x1d8af64: 0xac8d0d24  sw          $t5, 0xD24($a0)
    ctx->pc = 0x1d8af64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3364), GPR_U32(ctx, 13));
    // 0x1d8af68: 0xac8c0d28  sw          $t4, 0xD28($a0)
    ctx->pc = 0x1d8af68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3368), GPR_U32(ctx, 12));
    // 0x1d8af6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AF6Cu;
        // 0x1d8af70: 0xac8b0d2c  sw          $t3, 0xD2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AF74u;
    // 0x1d8af74: 0x0  nop
    ctx->pc = 0x1d8af74u;
    // NOP
    ctx->pc = 0x1d8af78u;
}
