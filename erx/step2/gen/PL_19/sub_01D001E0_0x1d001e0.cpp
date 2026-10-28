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

// Function: sub_01D001E0
// Address: 0x1d001e0 - 0x1d00240
void sub_01D001E0_0x1d001e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D001E0_0x1d001e0");
#endif

    ctx->pc = 0x1d001e0u;

    // 0x1d001e0: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1d001e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d001e4: 0x240d007e  addiu       $t5, $zero, 0x7E
    ctx->pc = 0x1d001e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d001e8: 0x240c0147  addiu       $t4, $zero, 0x147
    ctx->pc = 0x1d001e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d001ec: 0xac8e0d10  sw          $t6, 0xD10($a0)
    ctx->pc = 0x1d001ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3344), GPR_U32(ctx, 14));
    // 0x1d001f0: 0x240b0148  addiu       $t3, $zero, 0x148
    ctx->pc = 0x1d001f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1d001f4: 0xac8d0d14  sw          $t5, 0xD14($a0)
    ctx->pc = 0x1d001f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3348), GPR_U32(ctx, 13));
    // 0x1d001f8: 0x240a0149  addiu       $t2, $zero, 0x149
    ctx->pc = 0x1d001f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d001fc: 0xac8b0d38  sw          $t3, 0xD38($a0)
    ctx->pc = 0x1d001fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3384), GPR_U32(ctx, 11));
    // 0x1d00200: 0x240f014a  addiu       $t7, $zero, 0x14A
    ctx->pc = 0x1d00200u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x1d00204: 0xac8a0d28  sw          $t2, 0xD28($a0)
    ctx->pc = 0x1d00204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3368), GPR_U32(ctx, 10));
    // 0x1d00208: 0xac8c0d30  sw          $t4, 0xD30($a0)
    ctx->pc = 0x1d00208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 12));
    // 0x1d0020c: 0xac8f0d34  sw          $t7, 0xD34($a0)
    ctx->pc = 0x1d0020cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3380), GPR_U32(ctx, 15));
    // 0x1d00210: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1d00210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1d00214: 0xac8d0d04  sw          $t5, 0xD04($a0)
    ctx->pc = 0x1d00214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 13));
    // 0x1d00218: 0xac8c0d18  sw          $t4, 0xD18($a0)
    ctx->pc = 0x1d00218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 12));
    // 0x1d0021c: 0xac8a0d1c  sw          $t2, 0xD1C($a0)
    ctx->pc = 0x1d0021cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 10));
    // 0x1d00220: 0xac8b0d20  sw          $t3, 0xD20($a0)
    ctx->pc = 0x1d00220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 11));
    // 0x1d00224: 0xac8e0d08  sw          $t6, 0xD08($a0)
    ctx->pc = 0x1d00224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3336), GPR_U32(ctx, 14));
    // 0x1d00228: 0xac8d0d0c  sw          $t5, 0xD0C($a0)
    ctx->pc = 0x1d00228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3340), GPR_U32(ctx, 13));
    // 0x1d0022c: 0xac8c0d24  sw          $t4, 0xD24($a0)
    ctx->pc = 0x1d0022cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3364), GPR_U32(ctx, 12));
    // 0x1d00230: 0xac8b0d2c  sw          $t3, 0xD2C($a0)
    ctx->pc = 0x1d00230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 11));
    // 0x1d00234: 0x3e00008  jr          $ra
    ctx->pc = 0x1D00234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D00238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00234u;
        // 0x1d00238: 0xaf8080ac  sw          $zero, -0x7F54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D00234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0023Cu;
    // 0x1d0023c: 0x0  nop
    ctx->pc = 0x1d0023cu;
    // NOP
    ctx->pc = 0x1d00240u;
}
