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

// Function: sub_01C104E0
// Address: 0x1c104e0 - 0x1c10608
void sub_01C104E0_0x1c104e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C104E0_0x1c104e0");
#endif

    switch (ctx->pc) {
        case 0x1c10508u: goto label_1c10508;
        case 0x1c1051cu: goto label_1c1051c;
        case 0x1c10520u: goto label_1c10520;
        case 0x1c10540u: goto label_1c10540;
        case 0x1c10550u: goto label_1c10550;
        case 0x1c10584u: goto label_1c10584;
        case 0x1c105bcu: goto label_1c105bc;
        case 0x1c105c8u: goto label_1c105c8;
        case 0x1c105d8u: goto label_1c105d8;
        case 0x1c105f0u: goto label_1c105f0;
        default: break;
    }

    ctx->pc = 0x1c104e0u;

    // 0x1c104e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c104e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c104e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c104e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c104e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c104e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c104ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c104ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c104f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c104f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c104f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c104f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c104f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c104f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c104fc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c104fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c10500: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C10500u;
    SET_GPR_U32(ctx, 31, 0x1C10508u);
    ctx->pc = 0x1C10504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10500u;
    // 0x1c10504: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C10500u, 0x1C10508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10508u;
label_1c10508:
    // 0x1c10508: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c10508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c1050c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C1050Cu;
    {
        const bool branch_taken_0x1c1050c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1050Cu;
        // 0x1c10510: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1050c) {
            ctx->pc = 0x1C10558u;
            goto label_1c10558;
        }
    }
    ctx->pc = 0x1C10514u;
    // 0x1c10514: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C10514u;
    {
        const bool branch_taken_0x1c10514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c10514) {
            ctx->pc = 0x1C10538u;
            goto label_1c10538;
        }
    }
    ctx->pc = 0x1C1051Cu;
label_1c1051c:
    // 0x1c1051c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1051cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c10520:
    // 0x1c10520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c10520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c10524: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c10524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c10528: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c10528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1052c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1052cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c10530: 0x3e00008  jr          $ra
    ctx->pc = 0x1C10530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10530u;
        // 0x1c10534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C10530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C10538u;
label_1c10538:
    // 0x1c10538: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C10538u;
    SET_GPR_U32(ctx, 31, 0x1C10540u);
    ctx->pc = 0x1C1053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10538u;
    // 0x1c1053c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C10538u, 0x1C10540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10540u;
label_1c10540:
    // 0x1c10540: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C10540u;
    {
        const bool branch_taken_0x1c10540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C10544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10540u;
        // 0x1c10544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10540) {
            ctx->pc = 0x1C1051Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1051c;
        }
    }
    ctx->pc = 0x1C10548u;
    // 0x1c10548: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C10548u;
    SET_GPR_U32(ctx, 31, 0x1C10550u);
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C10548u, 0x1C10550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10550u;
label_1c10550:
    // 0x1c10550: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C10550u;
    {
        const bool branch_taken_0x1c10550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10550u;
        // 0x1c10554: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10550) {
            ctx->pc = 0x1C10520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c10520;
        }
    }
    ctx->pc = 0x1C10558u;
label_1c10558:
    // 0x1c10558: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c10558u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c1055c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C1055Cu;
    {
        const bool branch_taken_0x1c1055c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C10560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1055Cu;
        // 0x1c10560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1055c) {
            ctx->pc = 0x1C10520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c10520;
        }
    }
    ctx->pc = 0x1C10564u;
    // 0x1c10564: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c10564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c10568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1056c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1056cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c10570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10574: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c10574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10578: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c10578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1057c: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C1057Cu;
    SET_GPR_U32(ctx, 31, 0x1C10584u);
    ctx->pc = 0x1C10580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1057Cu;
    // 0x1c10580: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C1057Cu, 0x1C10584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10584u;
label_1c10584:
    // 0x1c10584: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c10584u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10588: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C10588u;
    {
        const bool branch_taken_0x1c10588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10588u;
        // 0x1c1058c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10588) {
            ctx->pc = 0x1C1051Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1051c;
        }
    }
    ctx->pc = 0x1C10590u;
    // 0x1c10590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c10590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c10594: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c10594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c10598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c10598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1059c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1059cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c105a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c105a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c105a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c105a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c105a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c105a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c105ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c105acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c105b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c105b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c105b4: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C105B4u;
    SET_GPR_U32(ctx, 31, 0x1C105BCu);
    ctx->pc = 0x1C105B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C105B4u;
    // 0x1c105b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C105B4u, 0x1C105BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C105BCu;
label_1c105bc:
    // 0x1c105bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c105bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c105c0: 0xc703dda  jal         func_1C0F768
    ctx->pc = 0x1C105C0u;
    SET_GPR_U32(ctx, 31, 0x1C105C8u);
    ctx->pc = 0x1C105C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C105C0u;
    // 0x1c105c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F768u, 0x1C105C0u, 0x1C105C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C105C8u;
label_1c105c8:
    // 0x1c105c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c105c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c105cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c105ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c105d0: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C105D0u;
    SET_GPR_U32(ctx, 31, 0x1C105D8u);
    ctx->pc = 0x1C105D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C105D0u;
    // 0x1c105d4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C105D0u, 0x1C105D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C105D8u;
label_1c105d8:
    // 0x1c105d8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c105d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c105dc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c105dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c105e0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c105e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c105e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c105e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c105e8: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C105E8u;
    SET_GPR_U32(ctx, 31, 0x1C105F0u);
    ctx->pc = 0x1C105ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C105E8u;
    // 0x1c105ec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C105E8u, 0x1C105F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C105F0u;
label_1c105f0:
    // 0x1c105f0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c105f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c105f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c105f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c105f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c105f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c105fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C105FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C105FCu;
        // 0x1c10600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C105FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C10604u;
    // 0x1c10604: 0x0  nop
    ctx->pc = 0x1c10604u;
    // NOP
    ctx->pc = 0x1c10608u;
}
