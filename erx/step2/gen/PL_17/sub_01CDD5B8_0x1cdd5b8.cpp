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

// Function: sub_01CDD5B8
// Address: 0x1cdd5b8 - 0x1cdd618
void sub_01CDD5B8_0x1cdd5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD5B8_0x1cdd5b8");
#endif

    ctx->pc = 0x1cdd5b8u;

    // 0x1cdd5b8: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x1cdd5b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cdd5bc: 0x240e007e  addiu       $t6, $zero, 0x7E
    ctx->pc = 0x1cdd5bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1cdd5c0: 0x240d014e  addiu       $t5, $zero, 0x14E
    ctx->pc = 0x1cdd5c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x1cdd5c4: 0xac8f0d10  sw          $t7, 0xD10($a0)
    ctx->pc = 0x1cdd5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3344), GPR_U32(ctx, 15));
    // 0x1cdd5c8: 0x240c0150  addiu       $t4, $zero, 0x150
    ctx->pc = 0x1cdd5c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1cdd5cc: 0xac8e0d14  sw          $t6, 0xD14($a0)
    ctx->pc = 0x1cdd5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3348), GPR_U32(ctx, 14));
    // 0x1cdd5d0: 0x240b014f  addiu       $t3, $zero, 0x14F
    ctx->pc = 0x1cdd5d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    // 0x1cdd5d4: 0xac8d0d30  sw          $t5, 0xD30($a0)
    ctx->pc = 0x1cdd5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 13));
    // 0x1cdd5d8: 0xac8b0d38  sw          $t3, 0xD38($a0)
    ctx->pc = 0x1cdd5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3384), GPR_U32(ctx, 11));
    // 0x1cdd5dc: 0xac8c0d34  sw          $t4, 0xD34($a0)
    ctx->pc = 0x1cdd5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3380), GPR_U32(ctx, 12));
    // 0x1cdd5e0: 0xac8f0d00  sw          $t7, 0xD00($a0)
    ctx->pc = 0x1cdd5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 15));
    // 0x1cdd5e4: 0xac8e0d04  sw          $t6, 0xD04($a0)
    ctx->pc = 0x1cdd5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 14));
    // 0x1cdd5e8: 0xac8d0d18  sw          $t5, 0xD18($a0)
    ctx->pc = 0x1cdd5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 13));
    // 0x1cdd5ec: 0xac8c0d1c  sw          $t4, 0xD1C($a0)
    ctx->pc = 0x1cdd5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 12));
    // 0x1cdd5f0: 0xac8b0d20  sw          $t3, 0xD20($a0)
    ctx->pc = 0x1cdd5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 11));
    // 0x1cdd5f4: 0xac8f0d08  sw          $t7, 0xD08($a0)
    ctx->pc = 0x1cdd5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3336), GPR_U32(ctx, 15));
    // 0x1cdd5f8: 0xac8e0d0c  sw          $t6, 0xD0C($a0)
    ctx->pc = 0x1cdd5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3340), GPR_U32(ctx, 14));
    // 0x1cdd5fc: 0xac8d0d24  sw          $t5, 0xD24($a0)
    ctx->pc = 0x1cdd5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3364), GPR_U32(ctx, 13));
    // 0x1cdd600: 0xac8c0d28  sw          $t4, 0xD28($a0)
    ctx->pc = 0x1cdd600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3368), GPR_U32(ctx, 12));
    // 0x1cdd604: 0xac8b0d2c  sw          $t3, 0xD2C($a0)
    ctx->pc = 0x1cdd604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 11));
    // 0x1cdd608: 0xaf808084  sw          $zero, -0x7F7C($gp)
    ctx->pc = 0x1cdd608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934660), GPR_U32(ctx, 0));
    // 0x1cdd60c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD60Cu;
        // 0x1cdd610: 0xaf808080  sw          $zero, -0x7F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD614u;
    // 0x1cdd614: 0x0  nop
    ctx->pc = 0x1cdd614u;
    // NOP
    ctx->pc = 0x1cdd618u;
}
