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

// Function: sub_01C61770
// Address: 0x1c61770 - 0x1c61880
void sub_01C61770_0x1c61770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61770_0x1c61770");
#endif

    switch (ctx->pc) {
        case 0x1c61790u: goto label_1c61790;
        case 0x1c617a4u: goto label_1c617a4;
        case 0x1c617a8u: goto label_1c617a8;
        case 0x1c617c4u: goto label_1c617c4;
        case 0x1c617d4u: goto label_1c617d4;
        case 0x1c61820u: goto label_1c61820;
        case 0x1c6185cu: goto label_1c6185c;
        case 0x1c61868u: goto label_1c61868;
        default: break;
    }

    ctx->pc = 0x1c61770u;

    // 0x1c61770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c61770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c61774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c61778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6177c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c61780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c61780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61784: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c61784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c61788: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C61788u;
    SET_GPR_U32(ctx, 31, 0x1C61790u);
    ctx->pc = 0x1C6178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61788u;
    // 0x1c6178c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C61788u, 0x1C61790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61790u;
label_1c61790:
    // 0x1c61790: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c61790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c61794: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C61794u;
    {
        const bool branch_taken_0x1c61794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61794u;
        // 0x1c61798: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61794) {
            ctx->pc = 0x1C617E0u;
            goto label_1c617e0;
        }
    }
    ctx->pc = 0x1C6179Cu;
    // 0x1c6179c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6179Cu;
    {
        const bool branch_taken_0x1c6179c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c6179c) {
            ctx->pc = 0x1C617BCu;
            goto label_1c617bc;
        }
    }
    ctx->pc = 0x1C617A4u;
label_1c617a4:
    // 0x1c617a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c617a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c617a8:
    // 0x1c617a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c617a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c617ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c617acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c617b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c617b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c617b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C617B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C617B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C617B4u;
        // 0x1c617b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C617B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C617BCu;
label_1c617bc:
    // 0x1c617bc: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C617BCu;
    SET_GPR_U32(ctx, 31, 0x1C617C4u);
    ctx->pc = 0x1C617C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C617BCu;
    // 0x1c617c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C617BCu, 0x1C617C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C617C4u;
label_1c617c4:
    // 0x1c617c4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C617C4u;
    {
        const bool branch_taken_0x1c617c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C617C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C617C4u;
        // 0x1c617c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c617c4) {
            ctx->pc = 0x1C617A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c617a4;
        }
    }
    ctx->pc = 0x1C617CCu;
    // 0x1c617cc: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C617CCu;
    SET_GPR_U32(ctx, 31, 0x1C617D4u);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C617CCu, 0x1C617D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C617D4u;
label_1c617d4:
    // 0x1c617d4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C617D4u;
    {
        const bool branch_taken_0x1c617d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C617D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C617D4u;
        // 0x1c617d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c617d4) {
            ctx->pc = 0x1C617A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c617a8;
        }
    }
    ctx->pc = 0x1C617DCu;
    // 0x1c617dc: 0x0  nop
    ctx->pc = 0x1c617dcu;
    // NOP
label_1c617e0:
    // 0x1c617e0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c617e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c617e4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C617E4u;
    {
        const bool branch_taken_0x1c617e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C617E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C617E4u;
        // 0x1c617e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c617e4) {
            ctx->pc = 0x1C617A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c617a8;
        }
    }
    ctx->pc = 0x1C617ECu;
    // 0x1c617ec: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c617ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c617f0: 0x3c0e01c6  lui         $t6, 0x1C6
    ctx->pc = 0x1c617f0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
    // 0x1c617f4: 0x25ce4490  addiu       $t6, $t6, 0x4490
    ctx->pc = 0x1c617f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17552));
    // 0x1c617f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c617f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c617fc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c617fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c61800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c61800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61804: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c61804u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c61808: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c61808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6180c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c6180cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c61810: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c61810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61814: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c61814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61818: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C61818u;
    SET_GPR_U32(ctx, 31, 0x1C61820u);
    ctx->pc = 0x1C6181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61818u;
    // 0x1c6181c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C61818u, 0x1C61820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61820u;
label_1c61820:
    // 0x1c61820: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c61820u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61824: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C61824u;
    {
        const bool branch_taken_0x1c61824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61824u;
        // 0x1c61828: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61824) {
            ctx->pc = 0x1C617A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c617a4;
        }
    }
    ctx->pc = 0x1C6182Cu;
    // 0x1c6182c: 0x0  nop
    ctx->pc = 0x1c6182cu;
    // NOP
    // 0x1c61830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61834: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c61834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c61838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6183c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6183cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61840: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c61844: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c61844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c61848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6184c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6184cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61850: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c61850u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61854: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C61854u;
    SET_GPR_U32(ctx, 31, 0x1C6185Cu);
    ctx->pc = 0x1C61858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61854u;
    // 0x1c61858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C61854u, 0x1C6185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6185Cu;
label_1c6185c:
    // 0x1c6185c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61860: 0xc717d5a  jal         func_1C5F568
    ctx->pc = 0x1C61860u;
    SET_GPR_U32(ctx, 31, 0x1C61868u);
    ctx->pc = 0x1C61864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61860u;
    // 0x1c61864: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F568u, 0x1C61860u, 0x1C61868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61868u;
label_1c61868:
    // 0x1c61868: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c61868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c6186c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6186cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c61870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c61870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61874: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61874u;
        // 0x1c61878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6187Cu;
    // 0x1c6187c: 0x0  nop
    ctx->pc = 0x1c6187cu;
    // NOP
    ctx->pc = 0x1c61880u;
}
