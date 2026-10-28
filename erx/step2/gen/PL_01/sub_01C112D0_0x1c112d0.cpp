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

// Function: sub_01C112D0
// Address: 0x1c112d0 - 0x1c1145c
void sub_01C112D0_0x1c112d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C112D0_0x1c112d0");
#endif

    switch (ctx->pc) {
        case 0x1c112f8u: goto label_1c112f8;
        case 0x1c112fcu: goto label_1c112fc;
        case 0x1c11318u: goto label_1c11318;
        case 0x1c11328u: goto label_1c11328;
        case 0x1c11330u: goto label_1c11330;
        case 0x1c11344u: goto label_1c11344;
        case 0x1c1134cu: goto label_1c1134c;
        case 0x1c1137cu: goto label_1c1137c;
        case 0x1c11384u: goto label_1c11384;
        case 0x1c113b0u: goto label_1c113b0;
        case 0x1c113f0u: goto label_1c113f0;
        case 0x1c11404u: goto label_1c11404;
        case 0x1c11410u: goto label_1c11410;
        case 0x1c1141cu: goto label_1c1141c;
        case 0x1c11430u: goto label_1c11430;
        case 0x1c11440u: goto label_1c11440;
        default: break;
    }

    ctx->pc = 0x1c112d0u;

    // 0x1c112d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c112d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c112d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c112d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c112d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c112d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c112dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c112dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c112e0: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x1c112e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c112e4: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C112E4u;
    {
        const bool branch_taken_0x1c112e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C112E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C112E4u;
        // 0x1c112e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c112e4) {
            ctx->pc = 0x1C11338u;
            goto label_1c11338;
        }
    }
    ctx->pc = 0x1C112ECu;
    // 0x1c112ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c112ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c112f0: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C112F0u;
    {
        const bool branch_taken_0x1c112f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c112f0) {
            ctx->pc = 0x1C11310u;
            goto label_1c11310;
        }
    }
    ctx->pc = 0x1C112F8u;
label_1c112f8:
    // 0x1c112f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c112f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c112fc:
    // 0x1c112fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c112fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11300: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c11300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c11304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c11308: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11308u;
        // 0x1c1130c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11310u;
label_1c11310:
    // 0x1c11310: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C11310u;
    SET_GPR_U32(ctx, 31, 0x1C11318u);
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C11310u, 0x1C11318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11318u;
label_1c11318:
    // 0x1c11318: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C11318u;
    {
        const bool branch_taken_0x1c11318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C1131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11318u;
        // 0x1c1131c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11318) {
            ctx->pc = 0x1C112F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c112f8;
        }
    }
    ctx->pc = 0x1C11320u;
    // 0x1c11320: 0xc703dec  jal         func_1C0F7B0
    ctx->pc = 0x1C11320u;
    SET_GPR_U32(ctx, 31, 0x1C11328u);
    ctx->pc = 0x1C0F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F7B0u, 0x1C11320u, 0x1C11328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11328u;
label_1c11328:
    // 0x1c11328: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C11328u;
    SET_GPR_U32(ctx, 31, 0x1C11330u);
    ctx->pc = 0x1C1132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11328u;
    // 0x1c1132c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C11328u, 0x1C11330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11330u;
label_1c11330:
    // 0x1c11330: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1C11330u;
    {
        const bool branch_taken_0x1c11330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11330u;
        // 0x1c11334: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11330) {
            ctx->pc = 0x1C112FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c112fc;
        }
    }
    ctx->pc = 0x1C11338u;
label_1c11338:
    // 0x1c11338: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c11338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1133c: 0xc703dd0  jal         func_1C0F740
    ctx->pc = 0x1C1133Cu;
    SET_GPR_U32(ctx, 31, 0x1C11344u);
    ctx->pc = 0x1C11340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1133Cu;
    // 0x1c11340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F740u, 0x1C1133Cu, 0x1C11344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11344u;
label_1c11344:
    // 0x1c11344: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C11344u;
    SET_GPR_U32(ctx, 31, 0x1C1134Cu);
    ctx->pc = 0x1C11348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11344u;
    // 0x1c11348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C11344u, 0x1C1134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1134Cu;
label_1c1134c:
    // 0x1c1134c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1134cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c11350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11354: 0x2406008e  addiu       $a2, $zero, 0x8E
    ctx->pc = 0x1c11354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x1c11358: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c11358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1135c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1135cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11360: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c11360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c11364: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c11364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11368: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c11368u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1136c: 0x144fffe2  bne         $v0, $t7, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C1136Cu;
    {
        const bool branch_taken_0x1c1136c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C11370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1136Cu;
        // 0x1c11370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1136c) {
            ctx->pc = 0x1C112F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c112f8;
        }
    }
    ctx->pc = 0x1C11374u;
    // 0x1c11374: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C11374u;
    SET_GPR_U32(ctx, 31, 0x1C1137Cu);
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C11374u, 0x1C1137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1137Cu;
label_1c1137c:
    // 0x1c1137c: 0xc703dec  jal         func_1C0F7B0
    ctx->pc = 0x1C1137Cu;
    SET_GPR_U32(ctx, 31, 0x1C11384u);
    ctx->pc = 0x1C11380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1137Cu;
    // 0x1c11380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F7B0u, 0x1C1137Cu, 0x1C11384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11384u;
label_1c11384:
    // 0x1c11384: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1C11384u;
    {
        const bool branch_taken_0x1c11384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11384u;
        // 0x1c11388: 0xae300024  sw          $s0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11384) {
            ctx->pc = 0x1C112F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c112f8;
        }
    }
    ctx->pc = 0x1C1138Cu;
    // 0x1c1138c: 0x0  nop
    ctx->pc = 0x1c1138cu;
    // NOP
    // 0x1c11390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c11390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c11394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c11394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c11398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c11398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1139c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1139cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c113a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c113a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c113a4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c113a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c113a8: 0xc703dd8  jal         func_1C0F760
    ctx->pc = 0x1C113A8u;
    SET_GPR_U32(ctx, 31, 0x1C113B0u);
    ctx->pc = 0x1C113ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C113A8u;
    // 0x1c113ac: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F760u, 0x1C113A8u, 0x1C113B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C113B0u;
label_1c113b0:
    // 0x1c113b0: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c113b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c113b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c113b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c113b8: 0x25cefff7  addiu       $t6, $t6, -0x9
    ctx->pc = 0x1c113b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
    // 0x1c113bc: 0x2dcf0017  sltiu       $t7, $t6, 0x17
    ctx->pc = 0x1c113bcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1c113c0: 0x11e00026  beqz        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C113C0u;
    {
        const bool branch_taken_0x1c113c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C113C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C113C0u;
        // 0x1c113c4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c113c0) {
            ctx->pc = 0x1C1145Cu;
            return;
        }
    }
    ctx->pc = 0x1C113C8u;
    // 0x1c113c8: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1c113c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c113cc: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x1c113ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x1c113d0: 0x25ce2cd0  addiu       $t6, $t6, 0x2CD0
    ctx->pc = 0x1c113d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11472));
    // 0x1c113d4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c113d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c113d8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c113d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c113dc: 0x1a00008  jr          $t5
    ctx->pc = 0x1C113DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C113E4u: goto label_1c113e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C113DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C113E4u;
label_1c113e4:
    // 0x1c113e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c113e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c113e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c113e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c113ec: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x1c113ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1c113f0:
    // 0x1c113f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c113f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c113f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c113f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c113f8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c113f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c113fc: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C113FCu;
    SET_GPR_U32(ctx, 31, 0x1C11404u);
    ctx->pc = 0x1C11400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C113FCu;
    // 0x1c11400: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C113FCu, 0x1C11404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11404u;
label_1c11404:
    // 0x1c11404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11408: 0xc703dda  jal         func_1C0F768
    ctx->pc = 0x1C11408u;
    SET_GPR_U32(ctx, 31, 0x1C11410u);
    ctx->pc = 0x1C1140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11408u;
    // 0x1c1140c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F768u, 0x1C11408u, 0x1C11410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11410u;
label_1c11410:
    // 0x1c11410: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c11410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c11414: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11414u;
    SET_GPR_U32(ctx, 31, 0x1C1141Cu);
    ctx->pc = 0x1C11418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11414u;
    // 0x1c11418: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11414u, 0x1C1141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1141Cu;
label_1c1141c:
    // 0x1c1141c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c1141cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c11420: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c11420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c11424: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c11424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c11428: 0xc703ddc  jal         func_1C0F770
    ctx->pc = 0x1C11428u;
    SET_GPR_U32(ctx, 31, 0x1C11430u);
    ctx->pc = 0x1C1142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11428u;
    // 0x1c1142c: 0x240500a5  addiu       $a1, $zero, 0xA5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F770u, 0x1C11428u, 0x1C11430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11430u;
label_1c11430:
    // 0x1c11430: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c11430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c11434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11438: 0xc703dd0  jal         func_1C0F740
    ctx->pc = 0x1C11438u;
    SET_GPR_U32(ctx, 31, 0x1C11440u);
    ctx->pc = 0x1C1143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11438u;
    // 0x1c1143c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F740u, 0x1C11438u, 0x1C11440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11440u;
label_1c11440:
    // 0x1c11440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c11444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1144c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1c1144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c11450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c11450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c11454: 0x8703dde  j           func_1C0F778
    ctx->pc = 0x1C11454u;
    ctx->pc = 0x1C11458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11454u;
    // 0x1c11458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F778u;
    sub_01C0F778_0x1c0f778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1145Cu;
}
