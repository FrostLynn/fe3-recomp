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

// Function: sub_01DCDB98
// Address: 0x1dcdb98 - 0x1dcdc10
void sub_01DCDB98_0x1dcdb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCDB98_0x1dcdb98");
#endif

    switch (ctx->pc) {
        case 0x1dcdbb8u: goto label_1dcdbb8;
        case 0x1dcdbc8u: goto label_1dcdbc8;
        default: break;
    }

    ctx->pc = 0x1dcdb98u;

    // 0x1dcdb98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcdb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcdb9c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdb9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdba0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dcdba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dcdba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcdba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcdba8: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcdba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcdbac: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcdbacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcdbb0: 0xc773608  jal         func_1DCD820
    ctx->pc = 0x1DCDBB0u;
    SET_GPR_U32(ctx, 31, 0x1DCDBB8u);
    ctx->pc = 0x1DCDBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDBB0u;
    // 0x1dcdbb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD820u, 0x1DCDBB0u, 0x1DCDBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDBB8u;
label_1dcdbb8:
    // 0x1dcdbb8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdbb8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdbbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcdbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdbc0: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCDBC0u;
    SET_GPR_U32(ctx, 31, 0x1DCDBC8u);
    ctx->pc = 0x1DCDBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDBC0u;
    // 0x1dcdbc4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCDBC0u, 0x1DCDBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDBC8u;
label_1dcdbc8:
    // 0x1dcdbc8: 0x8f8b8014  lw          $t3, -0x7FEC($gp)
    ctx->pc = 0x1dcdbc8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdbcc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dcdbccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcdbd0: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dcdbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dcdbd4: 0x240e001d  addiu       $t6, $zero, 0x1D
    ctx->pc = 0x1dcdbd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1dcdbd8: 0xaf808020  sw          $zero, -0x7FE0($gp)
    ctx->pc = 0x1dcdbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 0));
    // 0x1dcdbdc: 0x8d6d00dc  lw          $t5, 0xDC($t3)
    ctx->pc = 0x1dcdbdcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 220)));
    // 0x1dcdbe0: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x1dcdbe0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dcdbe4: 0x158e0006  bne         $t4, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCDBE4u;
    {
        const bool branch_taken_0x1dcdbe4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 14));
        ctx->pc = 0x1DCDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDBE4u;
        // 0x1dcdbe8: 0xadaf0cd8  sw          $t7, 0xCD8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 3288), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdbe4) {
            ctx->pc = 0x1DCDC00u;
            goto label_1dcdc00;
        }
    }
    ctx->pc = 0x1DCDBECu;
    // 0x1dcdbec: 0x8d6400e0  lw          $a0, 0xE0($t3)
    ctx->pc = 0x1dcdbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 224)));
    // 0x1dcdbf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcdbf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcdbf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dcdbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcdbf8: 0x877361a  j           func_1DCD868
    ctx->pc = 0x1DCDBF8u;
    ctx->pc = 0x1DCDBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDBF8u;
    // 0x1dcdbfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD868u;
    sub_01DCD868_0x1dcd868(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCDC00u;
label_1dcdc00:
    // 0x1dcdc00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcdc00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcdc04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dcdc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcdc08: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDC08u;
        // 0x1dcdc0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDC10u;
}
