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

// Function: sub_01CA4E70
// Address: 0x1ca4e70 - 0x1ca4ef0
void sub_01CA4E70_0x1ca4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4E70_0x1ca4e70");
#endif

    ctx->pc = 0x1ca4e70u;

    // 0x1ca4e70: 0x248d0200  addiu       $t5, $a0, 0x200
    ctx->pc = 0x1ca4e70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1ca4e74: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1ca4e74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4e78: 0x8daf004c  lw          $t7, 0x4C($t5)
    ctx->pc = 0x1ca4e78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x1ca4e7c: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1ca4e7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1ca4e80: 0xa1c047a6  sb          $zero, 0x47A6($t6)
    ctx->pc = 0x1ca4e80u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 18342), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca4e84: 0x8daf004c  lw          $t7, 0x4C($t5)
    ctx->pc = 0x1ca4e84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x1ca4e88: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1ca4e88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1ca4e8c: 0xa1cc5976  sb          $t4, 0x5976($t6)
    ctx->pc = 0x1ca4e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 22902), (uint8_t)GPR_U32(ctx, 12));
    // 0x1ca4e90: 0x8daf004c  lw          $t7, 0x4C($t5)
    ctx->pc = 0x1ca4e90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x1ca4e94: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1ca4e94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1ca4e98: 0xa1cc4416  sb          $t4, 0x4416($t6)
    ctx->pc = 0x1ca4e98u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 17430), (uint8_t)GPR_U32(ctx, 12));
    // 0x1ca4e9c: 0x8daf004c  lw          $t7, 0x4C($t5)
    ctx->pc = 0x1ca4e9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x1ca4ea0: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1ca4ea0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1ca4ea4: 0xa1c055e6  sb          $zero, 0x55E6($t6)
    ctx->pc = 0x1ca4ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 21990), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca4ea8: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x1ca4ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ca4eac: 0x8dac004c  lw          $t4, 0x4C($t5)
    ctx->pc = 0x1ca4eacu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x1ca4eb0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1ca4eb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca4eb4: 0x8dab0048  lw          $t3, 0x48($t5)
    ctx->pc = 0x1ca4eb4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x1ca4eb8: 0xad8f0070  sw          $t7, 0x70($t4)
    ctx->pc = 0x1ca4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 112), GPR_U32(ctx, 15));
    // 0x1ca4ebc: 0xad6e4930  sw          $t6, 0x4930($t3)
    ctx->pc = 0x1ca4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 18736), GPR_U32(ctx, 14));
    // 0x1ca4ec0: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1ca4ec0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1ca4ec4: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1ca4ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1ca4ec8: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1ca4ec8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ca4ecc: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1ca4eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1ca4ed0: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1ca4ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1ca4ed4: 0xac8f0d04  sw          $t7, 0xD04($a0)
    ctx->pc = 0x1ca4ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 15));
    // 0x1ca4ed8: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1ca4ed8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1ca4edc: 0xac8e0d18  sw          $t6, 0xD18($a0)
    ctx->pc = 0x1ca4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
    // 0x1ca4ee0: 0x240f0149  addiu       $t7, $zero, 0x149
    ctx->pc = 0x1ca4ee0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1ca4ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4EE4u;
        // 0x1ca4ee8: 0xac8f0d1c  sw          $t7, 0xD1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4EECu;
    // 0x1ca4eec: 0x0  nop
    ctx->pc = 0x1ca4eecu;
    // NOP
    ctx->pc = 0x1ca4ef0u;
}
