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

// Function: sub_01D29980
// Address: 0x1d29980 - 0x1d299d8
void sub_01D29980_0x1d29980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29980_0x1d29980");
#endif

    ctx->pc = 0x1d29980u;

    // 0x1d29980: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x1d29980u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d29984: 0x240e007e  addiu       $t6, $zero, 0x7E
    ctx->pc = 0x1d29984u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d29988: 0x240d0147  addiu       $t5, $zero, 0x147
    ctx->pc = 0x1d29988u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d2998c: 0xac8f0d10  sw          $t7, 0xD10($a0)
    ctx->pc = 0x1d2998cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3344), GPR_U32(ctx, 15));
    // 0x1d29990: 0x240c0149  addiu       $t4, $zero, 0x149
    ctx->pc = 0x1d29990u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d29994: 0xac8e0d14  sw          $t6, 0xD14($a0)
    ctx->pc = 0x1d29994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3348), GPR_U32(ctx, 14));
    // 0x1d29998: 0x240b0148  addiu       $t3, $zero, 0x148
    ctx->pc = 0x1d29998u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1d2999c: 0xac8d0d30  sw          $t5, 0xD30($a0)
    ctx->pc = 0x1d2999cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 13));
    // 0x1d299a0: 0xac8b0d38  sw          $t3, 0xD38($a0)
    ctx->pc = 0x1d299a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3384), GPR_U32(ctx, 11));
    // 0x1d299a4: 0xac8c0d34  sw          $t4, 0xD34($a0)
    ctx->pc = 0x1d299a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3380), GPR_U32(ctx, 12));
    // 0x1d299a8: 0xac8f0d00  sw          $t7, 0xD00($a0)
    ctx->pc = 0x1d299a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 15));
    // 0x1d299ac: 0xac8e0d04  sw          $t6, 0xD04($a0)
    ctx->pc = 0x1d299acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 14));
    // 0x1d299b0: 0xac8d0d18  sw          $t5, 0xD18($a0)
    ctx->pc = 0x1d299b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 13));
    // 0x1d299b4: 0xac8c0d1c  sw          $t4, 0xD1C($a0)
    ctx->pc = 0x1d299b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 12));
    // 0x1d299b8: 0xac8b0d20  sw          $t3, 0xD20($a0)
    ctx->pc = 0x1d299b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 11));
    // 0x1d299bc: 0xac8f0d08  sw          $t7, 0xD08($a0)
    ctx->pc = 0x1d299bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3336), GPR_U32(ctx, 15));
    // 0x1d299c0: 0xac8e0d0c  sw          $t6, 0xD0C($a0)
    ctx->pc = 0x1d299c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3340), GPR_U32(ctx, 14));
    // 0x1d299c4: 0xac8d0d24  sw          $t5, 0xD24($a0)
    ctx->pc = 0x1d299c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3364), GPR_U32(ctx, 13));
    // 0x1d299c8: 0xac8c0d28  sw          $t4, 0xD28($a0)
    ctx->pc = 0x1d299c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3368), GPR_U32(ctx, 12));
    // 0x1d299cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D299CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D299D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D299CCu;
        // 0x1d299d0: 0xac8b0d2c  sw          $t3, 0xD2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D299CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D299D4u;
    // 0x1d299d4: 0x0  nop
    ctx->pc = 0x1d299d4u;
    // NOP
    ctx->pc = 0x1d299d8u;
}
