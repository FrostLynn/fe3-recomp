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

// Function: sub_01CB74E8
// Address: 0x1cb74e8 - 0x1cb7610
void sub_01CB74E8_0x1cb74e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB74E8_0x1cb74e8");
#endif

    switch (ctx->pc) {
        case 0x1cb7510u: goto label_1cb7510;
        case 0x1cb7524u: goto label_1cb7524;
        case 0x1cb7528u: goto label_1cb7528;
        case 0x1cb7548u: goto label_1cb7548;
        case 0x1cb7558u: goto label_1cb7558;
        case 0x1cb758cu: goto label_1cb758c;
        case 0x1cb75c4u: goto label_1cb75c4;
        case 0x1cb75d0u: goto label_1cb75d0;
        case 0x1cb75e0u: goto label_1cb75e0;
        case 0x1cb75f8u: goto label_1cb75f8;
        default: break;
    }

    ctx->pc = 0x1cb74e8u;

    // 0x1cb74e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb74e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb74ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb74ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb74f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb74f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb74f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb74f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb74f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cb74f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb74fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cb74fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cb7500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cb7500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7504: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb7504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb7508: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB7508u;
    SET_GPR_U32(ctx, 31, 0x1CB7510u);
    ctx->pc = 0x1CB750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7508u;
    // 0x1cb750c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB7508u, 0x1CB7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7510u;
label_1cb7510:
    // 0x1cb7510: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cb7510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cb7514: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB7514u;
    {
        const bool branch_taken_0x1cb7514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7514u;
        // 0x1cb7518: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7514) {
            ctx->pc = 0x1CB7560u;
            goto label_1cb7560;
        }
    }
    ctx->pc = 0x1CB751Cu;
    // 0x1cb751c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB751Cu;
    {
        const bool branch_taken_0x1cb751c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cb751c) {
            ctx->pc = 0x1CB7540u;
            goto label_1cb7540;
        }
    }
    ctx->pc = 0x1CB7524u;
label_1cb7524:
    // 0x1cb7524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb7524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7528:
    // 0x1cb7528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb7528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb752c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb752cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb7530: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb7530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb7534: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cb7534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb7538: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB7538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7538u;
        // 0x1cb753c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB7538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB7540u;
label_1cb7540:
    // 0x1cb7540: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB7540u;
    SET_GPR_U32(ctx, 31, 0x1CB7548u);
    ctx->pc = 0x1CB7544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7540u;
    // 0x1cb7544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB7540u, 0x1CB7548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7548u;
label_1cb7548:
    // 0x1cb7548: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CB7548u;
    {
        const bool branch_taken_0x1cb7548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CB754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7548u;
        // 0x1cb754c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7548) {
            ctx->pc = 0x1CB7524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb7524;
        }
    }
    ctx->pc = 0x1CB7550u;
    // 0x1cb7550: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB7550u;
    SET_GPR_U32(ctx, 31, 0x1CB7558u);
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB7550u, 0x1CB7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7558u;
label_1cb7558:
    // 0x1cb7558: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CB7558u;
    {
        const bool branch_taken_0x1cb7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7558u;
        // 0x1cb755c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7558) {
            ctx->pc = 0x1CB7528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb7528;
        }
    }
    ctx->pc = 0x1CB7560u;
label_1cb7560:
    // 0x1cb7560: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cb7560u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cb7564: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CB7564u;
    {
        const bool branch_taken_0x1cb7564 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7564u;
        // 0x1cb7568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7564) {
            ctx->pc = 0x1CB7528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb7528;
        }
    }
    ctx->pc = 0x1CB756Cu;
    // 0x1cb756c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cb756cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb7570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb7574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7578: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb7578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb757c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb757cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7580: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb7580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb7584: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB7584u;
    SET_GPR_U32(ctx, 31, 0x1CB758Cu);
    ctx->pc = 0x1CB7588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7584u;
    // 0x1cb7588: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB7584u, 0x1CB758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB758Cu;
label_1cb758c:
    // 0x1cb758c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb758cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb7590: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CB7590u;
    {
        const bool branch_taken_0x1cb7590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7590u;
        // 0x1cb7594: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7590) {
            ctx->pc = 0x1CB7524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb7524;
        }
    }
    ctx->pc = 0x1CB7598u;
    // 0x1cb7598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb7598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb759c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cb759cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb75a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb75a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb75a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb75a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb75a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb75a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb75ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb75acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb75b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb75b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb75b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb75b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb75b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cb75b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb75bc: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB75BCu;
    SET_GPR_U32(ctx, 31, 0x1CB75C4u);
    ctx->pc = 0x1CB75C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB75BCu;
    // 0x1cb75c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB75BCu, 0x1CB75C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB75C4u;
label_1cb75c4:
    // 0x1cb75c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb75c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb75c8: 0xc72d9da  jal         func_1CB6768
    ctx->pc = 0x1CB75C8u;
    SET_GPR_U32(ctx, 31, 0x1CB75D0u);
    ctx->pc = 0x1CB75CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB75C8u;
    // 0x1cb75cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6768u, 0x1CB75C8u, 0x1CB75D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB75D0u;
label_1cb75d0:
    // 0x1cb75d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb75d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb75d4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cb75d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb75d8: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB75D8u;
    SET_GPR_U32(ctx, 31, 0x1CB75E0u);
    ctx->pc = 0x1CB75DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB75D8u;
    // 0x1cb75dc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB75D8u, 0x1CB75E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB75E0u;
label_1cb75e0:
    // 0x1cb75e0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb75e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb75e4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cb75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cb75e8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cb75e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cb75ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb75f0: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB75F0u;
    SET_GPR_U32(ctx, 31, 0x1CB75F8u);
    ctx->pc = 0x1CB75F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB75F0u;
    // 0x1cb75f4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB75F0u, 0x1CB75F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB75F8u;
label_1cb75f8:
    // 0x1cb75f8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cb75f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cb75fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb75fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7600: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb7600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb7604: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB7604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7604u;
        // 0x1cb7608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB7604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB760Cu;
    // 0x1cb760c: 0x0  nop
    ctx->pc = 0x1cb760cu;
    // NOP
    ctx->pc = 0x1cb7610u;
}
