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

// Function: sub_01CDD6D0
// Address: 0x1cdd6d0 - 0x1cdd850
void sub_01CDD6D0_0x1cdd6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD6D0_0x1cdd6d0");
#endif

    switch (ctx->pc) {
        case 0x1cdd700u: goto label_1cdd700;
        case 0x1cdd724u: goto label_1cdd724;
        case 0x1cdd738u: goto label_1cdd738;
        case 0x1cdd73cu: goto label_1cdd73c;
        case 0x1cdd77cu: goto label_1cdd77c;
        case 0x1cdd794u: goto label_1cdd794;
        case 0x1cdd7c8u: goto label_1cdd7c8;
        case 0x1cdd7d0u: goto label_1cdd7d0;
        case 0x1cdd828u: goto label_1cdd828;
        case 0x1cdd844u: goto label_1cdd844;
        default: break;
    }

    ctx->pc = 0x1cdd6d0u;

    // 0x1cdd6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdd6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cdd6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdd6d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdd6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdd6dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdd6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdd6e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdd6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd6e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cdd6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cdd6e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cdd6e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd6ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cdd6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cdd6f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cdd6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd6f4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1cdd6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1cdd6f8: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDD6F8u;
    SET_GPR_U32(ctx, 31, 0x1CDD700u);
    ctx->pc = 0x1CDD6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD6F8u;
    // 0x1cdd6fc: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDD6F8u, 0x1CDD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD700u;
label_1cdd700:
    // 0x1cdd700: 0x240f010b  addiu       $t7, $zero, 0x10B
    ctx->pc = 0x1cdd700u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    // 0x1cdd704: 0x120f004a  beq         $s0, $t7, . + 4 + (0x4A << 2)
    ctx->pc = 0x1CDD704u;
    {
        const bool branch_taken_0x1cdd704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD704u;
        // 0x1cdd708: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd704) {
            ctx->pc = 0x1CDD830u;
            goto label_1cdd830;
        }
    }
    ctx->pc = 0x1CDD70Cu;
    // 0x1cdd70c: 0x2a0f010c  slti        $t7, $s0, 0x10C
    ctx->pc = 0x1cdd70cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)268) ? 1 : 0);
    // 0x1cdd710: 0x11e0003d  beqz        $t7, . + 4 + (0x3D << 2)
    ctx->pc = 0x1CDD710u;
    {
        const bool branch_taken_0x1cdd710 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD710u;
        // 0x1cdd714: 0x240f010a  addiu       $t7, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd710) {
            ctx->pc = 0x1CDD808u;
            goto label_1cdd808;
        }
    }
    ctx->pc = 0x1CDD718u;
    // 0x1cdd718: 0x520f000f  beql        $s0, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x1CDD718u;
    {
        const bool branch_taken_0x1cdd718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cdd718) {
            ctx->pc = 0x1CDD71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDD718u;
            // 0x1cdd71c: 0x8c4e0010  lw          $t6, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD758u;
            goto label_1cdd758;
        }
    }
    ctx->pc = 0x1CDD720u;
    // 0x1cdd720: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x1cdd720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
label_1cdd724:
    // 0x1cdd724: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd728: 0x2484a2c0  addiu       $a0, $a0, -0x5D40
    ctx->pc = 0x1cdd728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943424));
    // 0x1cdd72c: 0x24a5e8f0  addiu       $a1, $a1, -0x1710
    ctx->pc = 0x1cdd72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961392));
    // 0x1cdd730: 0xc7368b2  jal         func_1CDA2C8
    ctx->pc = 0x1CDD730u;
    SET_GPR_U32(ctx, 31, 0x1CDD738u);
    ctx->pc = 0x1CDD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD730u;
    // 0x1cdd734: 0x24060578  addiu       $a2, $zero, 0x578 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA2C8u, 0x1CDD730u, 0x1CDD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD738u;
label_1cdd738:
    // 0x1cdd738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdd738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd73c:
    // 0x1cdd73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdd740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdd744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd748: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cdd748u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdd74c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cdd74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdd750: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD750u;
        // 0x1cdd754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD758u;
label_1cdd758:
    // 0x1cdd758: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdd758u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd75c: 0x11cf0025  beq         $t6, $t7, . + 4 + (0x25 << 2)
    ctx->pc = 0x1CDD75Cu;
    {
        const bool branch_taken_0x1cdd75c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD75Cu;
        // 0x1cdd760: 0x3c0601ce  lui         $a2, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)462 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd75c) {
            ctx->pc = 0x1CDD7F4u;
            goto label_1cdd7f4;
        }
    }
    ctx->pc = 0x1CDD764u;
    // 0x1cdd764: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1cdd764u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cdd768: 0x11e0001b  beqz        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CDD768u;
    {
        const bool branch_taken_0x1cdd768 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD768u;
        // 0x1cdd76c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd768) {
            ctx->pc = 0x1CDD7D8u;
            goto label_1cdd7d8;
        }
    }
    ctx->pc = 0x1CDD770u;
    // 0x1cdd770: 0x11c00012  beqz        $t6, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CDD770u;
    {
        const bool branch_taken_0x1cdd770 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD770u;
        // 0x1cdd774: 0x3c0601ce  lui         $a2, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)462 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd770) {
            ctx->pc = 0x1CDD7BCu;
            goto label_1cdd7bc;
        }
    }
    ctx->pc = 0x1CDD778u;
    // 0x1cdd778: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x1cdd778u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cdd77c:
    // 0x1cdd77c: 0x240e000d  addiu       $t6, $zero, 0xD
    ctx->pc = 0x1cdd77cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cdd780: 0x8ded043c  lw          $t5, 0x43C($t7)
    ctx->pc = 0x1cdd780u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1084)));
    // 0x1cdd784: 0x15aeffed  bne         $t5, $t6, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CDD784u;
    {
        const bool branch_taken_0x1cdd784 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x1CDD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD784u;
        // 0x1cdd788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd784) {
            ctx->pc = 0x1CDD73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd73c;
        }
    }
    ctx->pc = 0x1CDD78Cu;
    // 0x1cdd78c: 0xc736b40  jal         func_1CDAD00
    ctx->pc = 0x1CDD78Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD794u);
    ctx->pc = 0x1CDAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD00u, 0x1CDD78Cu, 0x1CDD794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD794u;
label_1cdd794:
    // 0x1cdd794: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cdd794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdd798: 0x544fffe8  bnel        $v0, $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CDD798u;
    {
        const bool branch_taken_0x1cdd798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cdd798) {
            ctx->pc = 0x1CDD79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDD798u;
            // 0x1cdd79c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd73c;
        }
    }
    ctx->pc = 0x1CDD7A0u;
    // 0x1cdd7a0: 0x8e6f0248  lw          $t7, 0x248($s3)
    ctx->pc = 0x1cdd7a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 584)));
    // 0x1cdd7a4: 0x240e001b  addiu       $t6, $zero, 0x1B
    ctx->pc = 0x1cdd7a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1cdd7a8: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x1cdd7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x1cdd7ac: 0x8ded4868  lw          $t5, 0x4868($t7)
    ctx->pc = 0x1cdd7acu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18536)));
    // 0x1cdd7b0: 0xadae007c  sw          $t6, 0x7C($t5)
    ctx->pc = 0x1cdd7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 124), GPR_U32(ctx, 14));
    // 0x1cdd7b4: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x1CDD7B4u;
    {
        const bool branch_taken_0x1cdd7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD7B4u;
        // 0x1cdd7b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd7b4) {
            ctx->pc = 0x1CDD73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd73c;
        }
    }
    ctx->pc = 0x1CDD7BCu;
label_1cdd7bc:
    // 0x1cdd7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdd7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd7c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cdd7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd7c4: 0x24c66d50  addiu       $a2, $a2, 0x6D50
    ctx->pc = 0x1cdd7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27984));
label_1cdd7c8:
    // 0x1cdd7c8: 0xc736cae  jal         func_1CDB2B8
    ctx->pc = 0x1CDD7C8u;
    SET_GPR_U32(ctx, 31, 0x1CDD7D0u);
    ctx->pc = 0x1CDB2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB2B8u, 0x1CDD7C8u, 0x1CDD7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD7D0u;
label_1cdd7d0:
    // 0x1cdd7d0: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x1CDD7D0u;
    {
        const bool branch_taken_0x1cdd7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD7D0u;
        // 0x1cdd7d4: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd7d0) {
            ctx->pc = 0x1CDD77Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd77c;
        }
    }
    ctx->pc = 0x1CDD7D8u;
label_1cdd7d8:
    // 0x1cdd7d8: 0x55cfffe8  bnel        $t6, $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CDD7D8u;
    {
        const bool branch_taken_0x1cdd7d8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cdd7d8) {
            ctx->pc = 0x1CDD7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDD7D8u;
            // 0x1cdd7dc: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD77Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd77c;
        }
    }
    ctx->pc = 0x1CDD7E0u;
    // 0x1cdd7e0: 0x3c0601ce  lui         $a2, 0x1CE
    ctx->pc = 0x1cdd7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd7e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdd7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd7e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cdd7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd7ec: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1CDD7ECu;
    {
        const bool branch_taken_0x1cdd7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD7ECu;
        // 0x1cdd7f0: 0x24c66d80  addiu       $a2, $a2, 0x6D80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd7ec) {
            ctx->pc = 0x1CDD7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd7c8;
        }
    }
    ctx->pc = 0x1CDD7F4u;
label_1cdd7f4:
    // 0x1cdd7f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdd7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd7f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cdd7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd7fc: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1CDD7FCu;
    {
        const bool branch_taken_0x1cdd7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD7FCu;
        // 0x1cdd800: 0x24c66db0  addiu       $a2, $a2, 0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd7fc) {
            ctx->pc = 0x1CDD7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd7c8;
        }
    }
    ctx->pc = 0x1CDD804u;
    // 0x1cdd804: 0x0  nop
    ctx->pc = 0x1cdd804u;
    // NOP
label_1cdd808:
    // 0x1cdd808: 0x240f010c  addiu       $t7, $zero, 0x10C
    ctx->pc = 0x1cdd808u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x1cdd80c: 0x160fffc5  bne         $s0, $t7, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1CDD80Cu;
    {
        const bool branch_taken_0x1cdd80c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD80Cu;
        // 0x1cdd810: 0x3c0401ce  lui         $a0, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)462 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd80c) {
            ctx->pc = 0x1CDD724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd724;
        }
    }
    ctx->pc = 0x1CDD814u;
    // 0x1cdd814: 0x3c0601ce  lui         $a2, 0x1CE
    ctx->pc = 0x1cdd814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdd818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd81c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cdd81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd820: 0xc736de6  jal         func_1CDB798
    ctx->pc = 0x1CDD820u;
    SET_GPR_U32(ctx, 31, 0x1CDD828u);
    ctx->pc = 0x1CDD824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD820u;
    // 0x1cdd824: 0x24c66e50  addiu       $a2, $a2, 0x6E50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB798u, 0x1CDD820u, 0x1CDD828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD828u;
label_1cdd828:
    // 0x1cdd828: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x1CDD828u;
    {
        const bool branch_taken_0x1cdd828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD828u;
        // 0x1cdd82c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd828) {
            ctx->pc = 0x1CDD73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd73c;
        }
    }
    ctx->pc = 0x1CDD830u;
label_1cdd830:
    // 0x1cdd830: 0x3c0601ce  lui         $a2, 0x1CE
    ctx->pc = 0x1cdd830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdd834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd838: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cdd838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd83c: 0xc736e56  jal         func_1CDB958
    ctx->pc = 0x1CDD83Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD844u);
    ctx->pc = 0x1CDD840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD83Cu;
    // 0x1cdd840: 0x24c66de0  addiu       $a2, $a2, 0x6DE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB958u, 0x1CDD83Cu, 0x1CDD844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD844u;
label_1cdd844:
    // 0x1cdd844: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x1CDD844u;
    {
        const bool branch_taken_0x1cdd844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD844u;
        // 0x1cdd848: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd844) {
            ctx->pc = 0x1CDD73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd73c;
        }
    }
    ctx->pc = 0x1CDD84Cu;
    // 0x1cdd84c: 0x0  nop
    ctx->pc = 0x1cdd84cu;
    // NOP
    ctx->pc = 0x1cdd850u;
}
