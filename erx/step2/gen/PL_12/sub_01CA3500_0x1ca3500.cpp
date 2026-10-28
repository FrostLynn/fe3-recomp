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

// Function: sub_01CA3500
// Address: 0x1ca3500 - 0x1ca3628
void sub_01CA3500_0x1ca3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3500_0x1ca3500");
#endif

    switch (ctx->pc) {
        case 0x1ca3528u: goto label_1ca3528;
        case 0x1ca353cu: goto label_1ca353c;
        case 0x1ca3540u: goto label_1ca3540;
        case 0x1ca3560u: goto label_1ca3560;
        case 0x1ca3570u: goto label_1ca3570;
        case 0x1ca35a4u: goto label_1ca35a4;
        case 0x1ca35dcu: goto label_1ca35dc;
        case 0x1ca35e8u: goto label_1ca35e8;
        case 0x1ca35f8u: goto label_1ca35f8;
        case 0x1ca3610u: goto label_1ca3610;
        default: break;
    }

    ctx->pc = 0x1ca3500u;

    // 0x1ca3500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca3504: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca3504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ca3508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca3508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca350c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca350cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca3510: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ca3510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3514: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ca3514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ca3518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca3518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca351c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ca351cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ca3520: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA3520u;
    SET_GPR_U32(ctx, 31, 0x1CA3528u);
    ctx->pc = 0x1CA3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3520u;
    // 0x1ca3524: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA3520u, 0x1CA3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3528u;
label_1ca3528:
    // 0x1ca3528: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1ca3528u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ca352c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA352Cu;
    {
        const bool branch_taken_0x1ca352c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA352Cu;
        // 0x1ca3530: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca352c) {
            ctx->pc = 0x1CA3578u;
            goto label_1ca3578;
        }
    }
    ctx->pc = 0x1CA3534u;
    // 0x1ca3534: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA3534u;
    {
        const bool branch_taken_0x1ca3534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1ca3534) {
            ctx->pc = 0x1CA3558u;
            goto label_1ca3558;
        }
    }
    ctx->pc = 0x1CA353Cu;
label_1ca353c:
    // 0x1ca353c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca353cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca3540:
    // 0x1ca3540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca3540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca3544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca3544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca3548: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca3548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca354c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ca354cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca3550: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA3550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3550u;
        // 0x1ca3554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA3550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA3558u;
label_1ca3558:
    // 0x1ca3558: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA3558u;
    SET_GPR_U32(ctx, 31, 0x1CA3560u);
    ctx->pc = 0x1CA355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3558u;
    // 0x1ca355c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA3558u, 0x1CA3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3560u;
label_1ca3560:
    // 0x1ca3560: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CA3560u;
    {
        const bool branch_taken_0x1ca3560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CA3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3560u;
        // 0x1ca3564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3560) {
            ctx->pc = 0x1CA353Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca353c;
        }
    }
    ctx->pc = 0x1CA3568u;
    // 0x1ca3568: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA3568u;
    SET_GPR_U32(ctx, 31, 0x1CA3570u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA3568u, 0x1CA3570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3570u;
label_1ca3570:
    // 0x1ca3570: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CA3570u;
    {
        const bool branch_taken_0x1ca3570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3570u;
        // 0x1ca3574: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3570) {
            ctx->pc = 0x1CA3540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca3540;
        }
    }
    ctx->pc = 0x1CA3578u;
label_1ca3578:
    // 0x1ca3578: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1ca3578u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1ca357c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CA357Cu;
    {
        const bool branch_taken_0x1ca357c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA357Cu;
        // 0x1ca3580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca357c) {
            ctx->pc = 0x1CA3540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca3540;
        }
    }
    ctx->pc = 0x1CA3584u;
    // 0x1ca3584: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ca3584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca3588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca358c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca358cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca3590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3594: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca3594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3598: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca3598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca359c: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA359Cu;
    SET_GPR_U32(ctx, 31, 0x1CA35A4u);
    ctx->pc = 0x1CA35A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA359Cu;
    // 0x1ca35a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA359Cu, 0x1CA35A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA35A4u;
label_1ca35a4:
    // 0x1ca35a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca35a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca35a8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CA35A8u;
    {
        const bool branch_taken_0x1ca35a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA35A8u;
        // 0x1ca35ac: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca35a8) {
            ctx->pc = 0x1CA353Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca353c;
        }
    }
    ctx->pc = 0x1CA35B0u;
    // 0x1ca35b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca35b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca35b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca35b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca35b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca35b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca35bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca35bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca35c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca35c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca35c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca35c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca35c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca35c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca35cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca35ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca35d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca35d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca35d4: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA35D4u;
    SET_GPR_U32(ctx, 31, 0x1CA35DCu);
    ctx->pc = 0x1CA35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA35D4u;
    // 0x1ca35d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA35D4u, 0x1CA35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA35DCu;
label_1ca35dc:
    // 0x1ca35dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca35dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca35e0: 0xc7289da  jal         func_1CA2768
    ctx->pc = 0x1CA35E0u;
    SET_GPR_U32(ctx, 31, 0x1CA35E8u);
    ctx->pc = 0x1CA35E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA35E0u;
    // 0x1ca35e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2768u, 0x1CA35E0u, 0x1CA35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA35E8u;
label_1ca35e8:
    // 0x1ca35e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca35ec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ca35ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca35f0: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA35F0u;
    SET_GPR_U32(ctx, 31, 0x1CA35F8u);
    ctx->pc = 0x1CA35F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA35F0u;
    // 0x1ca35f4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA35F0u, 0x1CA35F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA35F8u;
label_1ca35f8:
    // 0x1ca35f8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca35f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca35fc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1ca35fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1ca3600: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1ca3600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1ca3604: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca3604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca3608: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA3608u;
    SET_GPR_U32(ctx, 31, 0x1CA3610u);
    ctx->pc = 0x1CA360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3608u;
    // 0x1ca360c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA3608u, 0x1CA3610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3610u;
label_1ca3610:
    // 0x1ca3610: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1ca3610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1ca3614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca3614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca3618: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca3618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca361c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA361Cu;
        // 0x1ca3620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA3624u;
    // 0x1ca3624: 0x0  nop
    ctx->pc = 0x1ca3624u;
    // NOP
    ctx->pc = 0x1ca3628u;
}
