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

// Function: sub_01DE6F78
// Address: 0x1de6f78 - 0x1de6fe0
void sub_01DE6F78_0x1de6f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE6F78_0x1de6f78");
#endif

    switch (ctx->pc) {
        case 0x1de6f9cu: goto label_1de6f9c;
        case 0x1de6facu: goto label_1de6fac;
        case 0x1de6fd4u: goto label_1de6fd4;
        default: break;
    }

    ctx->pc = 0x1de6f78u;

    // 0x1de6f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de6f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de6f7c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de6f7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de6f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de6f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de6f84: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1DE6F84u;
    {
        const bool branch_taken_0x1de6f84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6F84u;
        // 0x1de6f88: 0x8f8d8014  lw          $t5, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6f84) {
            ctx->pc = 0x1DE6FB0u;
            goto label_1de6fb0;
        }
    }
    ctx->pc = 0x1DE6F8Cu;
    // 0x1de6f8c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de6f8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6f90: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de6f94: 0xc779b8c  jal         func_1DE6E30
    ctx->pc = 0x1DE6F94u;
    SET_GPR_U32(ctx, 31, 0x1DE6F9Cu);
    ctx->pc = 0x1DE6F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6F94u;
    // 0x1de6f98: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E30u, 0x1DE6F94u, 0x1DE6F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6F9Cu;
label_1de6f9c:
    // 0x1de6f9c: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6fa0: 0x8c46081c  lw          $a2, 0x81C($v0)
    ctx->pc = 0x1de6fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
    // 0x1de6fa4: 0xc779b96  jal         func_1DE6E58
    ctx->pc = 0x1DE6FA4u;
    SET_GPR_U32(ctx, 31, 0x1DE6FACu);
    ctx->pc = 0x1DE6FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6FA4u;
    // 0x1de6fa8: 0x8c850118  lw          $a1, 0x118($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E58u, 0x1DE6FA4u, 0x1DE6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6FACu;
label_1de6fac:
    // 0x1de6fac: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1de6facu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1de6fb0:
    // 0x1de6fb0: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x1de6fb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1de6fb4: 0x8dae0118  lw          $t6, 0x118($t5)
    ctx->pc = 0x1de6fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 280)));
    // 0x1de6fb8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE6FB8u;
    {
        const bool branch_taken_0x1de6fb8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DE6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6FB8u;
        // 0x1de6fbc: 0x3c0401de  lui         $a0, 0x1DE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6fb8) {
            ctx->pc = 0x1DE6FCCu;
            goto label_1de6fcc;
        }
    }
    ctx->pc = 0x1DE6FC0u;
    // 0x1de6fc0: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1de6fc0u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1de6fc4: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x1de6fc4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x1de6fc8: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1de6fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de6fcc:
    // 0x1de6fcc: 0xc779ba0  jal         func_1DE6E80
    ctx->pc = 0x1DE6FCCu;
    SET_GPR_U32(ctx, 31, 0x1DE6FD4u);
    ctx->pc = 0x1DE6FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6FCCu;
    // 0x1de6fd0: 0x24847468  addiu       $a0, $a0, 0x7468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E80u, 0x1DE6FCCu, 0x1DE6FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6FD4u;
label_1de6fd4:
    // 0x1de6fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de6fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de6fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE6FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6FD8u;
        // 0x1de6fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE6FE0u;
}
