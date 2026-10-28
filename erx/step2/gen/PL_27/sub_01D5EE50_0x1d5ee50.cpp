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

// Function: sub_01D5EE50
// Address: 0x1d5ee50 - 0x1d5ef60
void sub_01D5EE50_0x1d5ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5EE50_0x1d5ee50");
#endif

    switch (ctx->pc) {
        case 0x1d5ee70u: goto label_1d5ee70;
        case 0x1d5ee84u: goto label_1d5ee84;
        case 0x1d5ee88u: goto label_1d5ee88;
        case 0x1d5eea4u: goto label_1d5eea4;
        case 0x1d5eeb4u: goto label_1d5eeb4;
        case 0x1d5ef00u: goto label_1d5ef00;
        case 0x1d5ef3cu: goto label_1d5ef3c;
        case 0x1d5ef48u: goto label_1d5ef48;
        default: break;
    }

    ctx->pc = 0x1d5ee50u;

    // 0x1d5ee50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5ee54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5ee58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5ee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5ee5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5ee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5ee60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5ee60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ee64: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5ee64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5ee68: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5EE68u;
    SET_GPR_U32(ctx, 31, 0x1D5EE70u);
    ctx->pc = 0x1D5EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EE68u;
    // 0x1d5ee6c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5EE68u, 0x1D5EE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EE70u;
label_1d5ee70:
    // 0x1d5ee70: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d5ee70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5ee74: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5EE74u;
    {
        const bool branch_taken_0x1d5ee74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EE74u;
        // 0x1d5ee78: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ee74) {
            ctx->pc = 0x1D5EEC0u;
            goto label_1d5eec0;
        }
    }
    ctx->pc = 0x1D5EE7Cu;
    // 0x1d5ee7c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5EE7Cu;
    {
        const bool branch_taken_0x1d5ee7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d5ee7c) {
            ctx->pc = 0x1D5EE9Cu;
            goto label_1d5ee9c;
        }
    }
    ctx->pc = 0x1D5EE84u;
label_1d5ee84:
    // 0x1d5ee84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5ee84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ee88:
    // 0x1d5ee88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ee88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ee8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5ee8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5ee90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5ee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ee94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5EE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EE94u;
        // 0x1d5ee98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5EE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5EE9Cu;
label_1d5ee9c:
    // 0x1d5ee9c: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5EE9Cu;
    SET_GPR_U32(ctx, 31, 0x1D5EEA4u);
    ctx->pc = 0x1D5EEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EE9Cu;
    // 0x1d5eea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5EE9Cu, 0x1D5EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EEA4u;
label_1d5eea4:
    // 0x1d5eea4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D5EEA4u;
    {
        const bool branch_taken_0x1d5eea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D5EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EEA4u;
        // 0x1d5eea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5eea4) {
            ctx->pc = 0x1D5EE84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5ee84;
        }
    }
    ctx->pc = 0x1D5EEACu;
    // 0x1d5eeac: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5EEACu;
    SET_GPR_U32(ctx, 31, 0x1D5EEB4u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5EEACu, 0x1D5EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EEB4u;
label_1d5eeb4:
    // 0x1d5eeb4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D5EEB4u;
    {
        const bool branch_taken_0x1d5eeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EEB4u;
        // 0x1d5eeb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5eeb4) {
            ctx->pc = 0x1D5EE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5ee88;
        }
    }
    ctx->pc = 0x1D5EEBCu;
    // 0x1d5eebc: 0x0  nop
    ctx->pc = 0x1d5eebcu;
    // NOP
label_1d5eec0:
    // 0x1d5eec0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d5eec0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d5eec4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D5EEC4u;
    {
        const bool branch_taken_0x1d5eec4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EEC4u;
        // 0x1d5eec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5eec4) {
            ctx->pc = 0x1D5EE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5ee88;
        }
    }
    ctx->pc = 0x1D5EECCu;
    // 0x1d5eecc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d5eeccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d5eed0: 0x3c0e01d6  lui         $t6, 0x1D6
    ctx->pc = 0x1d5eed0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)470 << 16));
    // 0x1d5eed4: 0x25ce0978  addiu       $t6, $t6, 0x978
    ctx->pc = 0x1d5eed4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2424));
    // 0x1d5eed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5eed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eedc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d5eedcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d5eee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5eee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eee4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d5eee4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d5eee8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5eee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eeec: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d5eeecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d5eef0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5eef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eef4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5eef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5eef8: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5EEF8u;
    SET_GPR_U32(ctx, 31, 0x1D5EF00u);
    ctx->pc = 0x1D5EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EEF8u;
    // 0x1d5eefc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5EEF8u, 0x1D5EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EF00u;
label_1d5ef00:
    // 0x1d5ef00: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5ef00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ef04: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D5EF04u;
    {
        const bool branch_taken_0x1d5ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EF04u;
        // 0x1d5ef08: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ef04) {
            ctx->pc = 0x1D5EE84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5ee84;
        }
    }
    ctx->pc = 0x1D5EF0Cu;
    // 0x1d5ef0c: 0x0  nop
    ctx->pc = 0x1d5ef0cu;
    // NOP
    // 0x1d5ef10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5ef14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5ef14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5ef18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5ef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5ef1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5ef1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ef20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5ef20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5ef24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5ef24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ef28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5ef28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ef2c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5ef2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ef30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5ef30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ef34: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5EF34u;
    SET_GPR_U32(ctx, 31, 0x1D5EF3Cu);
    ctx->pc = 0x1D5EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EF34u;
    // 0x1d5ef38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5EF34u, 0x1D5EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EF3Cu;
label_1d5ef3c:
    // 0x1d5ef3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ef3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ef40: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5EF40u;
    SET_GPR_U32(ctx, 31, 0x1D5EF48u);
    ctx->pc = 0x1D5EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EF40u;
    // 0x1d5ef44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5EF40u, 0x1D5EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EF48u;
label_1d5ef48:
    // 0x1d5ef48: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5ef4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5ef4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5ef50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ef50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ef54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5EF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EF54u;
        // 0x1d5ef58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5EF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5EF5Cu;
    // 0x1d5ef5c: 0x0  nop
    ctx->pc = 0x1d5ef5cu;
    // NOP
    ctx->pc = 0x1d5ef60u;
}
