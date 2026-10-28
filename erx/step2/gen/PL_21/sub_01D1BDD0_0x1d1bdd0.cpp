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

// Function: sub_01D1BDD0
// Address: 0x1d1bdd0 - 0x1d1be28
void sub_01D1BDD0_0x1d1bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1BDD0_0x1d1bdd0");
#endif

    ctx->pc = 0x1d1bdd0u;

    // 0x1d1bdd0: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x1d1bdd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1bdd4: 0x240e007e  addiu       $t6, $zero, 0x7E
    ctx->pc = 0x1d1bdd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d1bdd8: 0x240d0147  addiu       $t5, $zero, 0x147
    ctx->pc = 0x1d1bdd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d1bddc: 0xac8f0d10  sw          $t7, 0xD10($a0)
    ctx->pc = 0x1d1bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3344), GPR_U32(ctx, 15));
    // 0x1d1bde0: 0x240c0149  addiu       $t4, $zero, 0x149
    ctx->pc = 0x1d1bde0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d1bde4: 0xac8e0d14  sw          $t6, 0xD14($a0)
    ctx->pc = 0x1d1bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3348), GPR_U32(ctx, 14));
    // 0x1d1bde8: 0x240b0148  addiu       $t3, $zero, 0x148
    ctx->pc = 0x1d1bde8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1d1bdec: 0xac8d0d30  sw          $t5, 0xD30($a0)
    ctx->pc = 0x1d1bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 13));
    // 0x1d1bdf0: 0xac8b0d38  sw          $t3, 0xD38($a0)
    ctx->pc = 0x1d1bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3384), GPR_U32(ctx, 11));
    // 0x1d1bdf4: 0xac8c0d34  sw          $t4, 0xD34($a0)
    ctx->pc = 0x1d1bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3380), GPR_U32(ctx, 12));
    // 0x1d1bdf8: 0xac8f0d00  sw          $t7, 0xD00($a0)
    ctx->pc = 0x1d1bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 15));
    // 0x1d1bdfc: 0xac8e0d04  sw          $t6, 0xD04($a0)
    ctx->pc = 0x1d1bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 14));
    // 0x1d1be00: 0xac8d0d18  sw          $t5, 0xD18($a0)
    ctx->pc = 0x1d1be00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 13));
    // 0x1d1be04: 0xac8c0d1c  sw          $t4, 0xD1C($a0)
    ctx->pc = 0x1d1be04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 12));
    // 0x1d1be08: 0xac8b0d20  sw          $t3, 0xD20($a0)
    ctx->pc = 0x1d1be08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 11));
    // 0x1d1be0c: 0xac8f0d08  sw          $t7, 0xD08($a0)
    ctx->pc = 0x1d1be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3336), GPR_U32(ctx, 15));
    // 0x1d1be10: 0xac8e0d0c  sw          $t6, 0xD0C($a0)
    ctx->pc = 0x1d1be10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3340), GPR_U32(ctx, 14));
    // 0x1d1be14: 0xac8d0d24  sw          $t5, 0xD24($a0)
    ctx->pc = 0x1d1be14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3364), GPR_U32(ctx, 13));
    // 0x1d1be18: 0xac8c0d28  sw          $t4, 0xD28($a0)
    ctx->pc = 0x1d1be18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3368), GPR_U32(ctx, 12));
    // 0x1d1be1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1BE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BE1Cu;
        // 0x1d1be20: 0xac8b0d2c  sw          $t3, 0xD2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1BE24u;
    // 0x1d1be24: 0x0  nop
    ctx->pc = 0x1d1be24u;
    // NOP
    ctx->pc = 0x1d1be28u;
}
