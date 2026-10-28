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

// Function: sub_01D896E0
// Address: 0x1d896e0 - 0x1d89808
void sub_01D896E0_0x1d896e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D896E0_0x1d896e0");
#endif

    switch (ctx->pc) {
        case 0x1d89708u: goto label_1d89708;
        case 0x1d8971cu: goto label_1d8971c;
        case 0x1d89720u: goto label_1d89720;
        case 0x1d89740u: goto label_1d89740;
        case 0x1d89750u: goto label_1d89750;
        case 0x1d89784u: goto label_1d89784;
        case 0x1d897bcu: goto label_1d897bc;
        case 0x1d897c8u: goto label_1d897c8;
        case 0x1d897d8u: goto label_1d897d8;
        case 0x1d897f0u: goto label_1d897f0;
        default: break;
    }

    ctx->pc = 0x1d896e0u;

    // 0x1d896e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d896e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d896e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d896e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d896e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d896e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d896ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d896ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d896f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d896f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d896f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d896f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d896f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d896f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d896fc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d896fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d89700: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D89700u;
    SET_GPR_U32(ctx, 31, 0x1D89708u);
    ctx->pc = 0x1D89704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89700u;
    // 0x1d89704: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D89700u, 0x1D89708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89708u;
label_1d89708:
    // 0x1d89708: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d89708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d8970c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8970Cu;
    {
        const bool branch_taken_0x1d8970c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8970Cu;
        // 0x1d89710: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8970c) {
            ctx->pc = 0x1D89758u;
            goto label_1d89758;
        }
    }
    ctx->pc = 0x1D89714u;
    // 0x1d89714: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D89714u;
    {
        const bool branch_taken_0x1d89714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d89714) {
            ctx->pc = 0x1D89738u;
            goto label_1d89738;
        }
    }
    ctx->pc = 0x1D8971Cu;
label_1d8971c:
    // 0x1d8971c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8971cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d89720:
    // 0x1d89720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d89720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d89724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d89724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d89728: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d89728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8972c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d8972cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d89730: 0x3e00008  jr          $ra
    ctx->pc = 0x1D89730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89730u;
        // 0x1d89734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D89730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D89738u;
label_1d89738:
    // 0x1d89738: 0xc762252  jal         func_1D88948
    ctx->pc = 0x1D89738u;
    SET_GPR_U32(ctx, 31, 0x1D89740u);
    ctx->pc = 0x1D8973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89738u;
    // 0x1d8973c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88948u, 0x1D89738u, 0x1D89740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89740u;
label_1d89740:
    // 0x1d89740: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D89740u;
    {
        const bool branch_taken_0x1d89740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D89744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89740u;
        // 0x1d89744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89740) {
            ctx->pc = 0x1D8971Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8971c;
        }
    }
    ctx->pc = 0x1D89748u;
    // 0x1d89748: 0xc762254  jal         func_1D88950
    ctx->pc = 0x1D89748u;
    SET_GPR_U32(ctx, 31, 0x1D89750u);
    ctx->pc = 0x1D88950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88950u, 0x1D89748u, 0x1D89750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89750u;
label_1d89750:
    // 0x1d89750: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D89750u;
    {
        const bool branch_taken_0x1d89750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89750u;
        // 0x1d89754: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89750) {
            ctx->pc = 0x1D89720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d89720;
        }
    }
    ctx->pc = 0x1D89758u;
label_1d89758:
    // 0x1d89758: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d89758u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d8975c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D8975Cu;
    {
        const bool branch_taken_0x1d8975c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D89760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8975Cu;
        // 0x1d89760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8975c) {
            ctx->pc = 0x1D89720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d89720;
        }
    }
    ctx->pc = 0x1D89764u;
    // 0x1d89764: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d89764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d89768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8976c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8976cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89770: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d89770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89774: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d89774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89778: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d89778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8977c: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8977Cu;
    SET_GPR_U32(ctx, 31, 0x1D89784u);
    ctx->pc = 0x1D89780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8977Cu;
    // 0x1d89780: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8977Cu, 0x1D89784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89784u;
label_1d89784:
    // 0x1d89784: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d89784u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d89788: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D89788u;
    {
        const bool branch_taken_0x1d89788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89788u;
        // 0x1d8978c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89788) {
            ctx->pc = 0x1D8971Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8971c;
        }
    }
    ctx->pc = 0x1D89790u;
    // 0x1d89790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d89790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d89794: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d89794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d89798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d89798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8979c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8979cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d897a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d897a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d897a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d897a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d897a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d897a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d897ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d897acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d897b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d897b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d897b4: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D897B4u;
    SET_GPR_U32(ctx, 31, 0x1D897BCu);
    ctx->pc = 0x1D897B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D897B4u;
    // 0x1d897b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D897B4u, 0x1D897BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D897BCu;
label_1d897bc:
    // 0x1d897bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d897bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d897c0: 0xc76225a  jal         func_1D88968
    ctx->pc = 0x1D897C0u;
    SET_GPR_U32(ctx, 31, 0x1D897C8u);
    ctx->pc = 0x1D897C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D897C0u;
    // 0x1d897c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88968u, 0x1D897C0u, 0x1D897C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D897C8u;
label_1d897c8:
    // 0x1d897c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d897c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d897cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d897ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d897d0: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D897D0u;
    SET_GPR_U32(ctx, 31, 0x1D897D8u);
    ctx->pc = 0x1D897D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D897D0u;
    // 0x1d897d4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D897D0u, 0x1D897D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D897D8u;
label_1d897d8:
    // 0x1d897d8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d897d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d897dc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d897dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d897e0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d897e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d897e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d897e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d897e8: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D897E8u;
    SET_GPR_U32(ctx, 31, 0x1D897F0u);
    ctx->pc = 0x1D897ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D897E8u;
    // 0x1d897ec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D897E8u, 0x1D897F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D897F0u;
label_1d897f0:
    // 0x1d897f0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d897f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d897f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d897f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d897f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d897f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d897fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D897FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D897FCu;
        // 0x1d89800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D897FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D89804u;
    // 0x1d89804: 0x0  nop
    ctx->pc = 0x1d89804u;
    // NOP
    ctx->pc = 0x1d89808u;
}
