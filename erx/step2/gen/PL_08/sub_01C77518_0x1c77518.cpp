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

// Function: sub_01C77518
// Address: 0x1c77518 - 0x1c77620
void sub_01C77518_0x1c77518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77518_0x1c77518");
#endif

    switch (ctx->pc) {
        case 0x1c77534u: goto label_1c77534;
        case 0x1c7753cu: goto label_1c7753c;
        case 0x1c77550u: goto label_1c77550;
        case 0x1c77558u: goto label_1c77558;
        case 0x1c7755cu: goto label_1c7755c;
        case 0x1c77598u: goto label_1c77598;
        case 0x1c775c4u: goto label_1c775c4;
        case 0x1c775d0u: goto label_1c775d0;
        case 0x1c775dcu: goto label_1c775dc;
        case 0x1c775f0u: goto label_1c775f0;
        case 0x1c77600u: goto label_1c77600;
        default: break;
    }

    ctx->pc = 0x1c77518u;

    // 0x1c77518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7751c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7751cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c77520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c77524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77528: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c77528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7752c: 0xc71d650  jal         func_1C75940
    ctx->pc = 0x1C7752Cu;
    SET_GPR_U32(ctx, 31, 0x1C77534u);
    ctx->pc = 0x1C77530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7752Cu;
    // 0x1c77530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75940u, 0x1C7752Cu, 0x1C77534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77534u;
label_1c77534:
    // 0x1c77534: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C77534u;
    SET_GPR_U32(ctx, 31, 0x1C7753Cu);
    ctx->pc = 0x1C77538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77534u;
    // 0x1c77538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C77534u, 0x1C7753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7753Cu;
label_1c7753c:
    // 0x1c7753c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c7753cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77540: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C77540u;
    {
        const bool branch_taken_0x1c77540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C77544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77540u;
        // 0x1c77544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77540) {
            ctx->pc = 0x1C7756Cu;
            goto label_1c7756c;
        }
    }
    ctx->pc = 0x1C77548u;
    // 0x1c77548: 0xc71d66c  jal         func_1C759B0
    ctx->pc = 0x1C77548u;
    SET_GPR_U32(ctx, 31, 0x1C77550u);
    ctx->pc = 0x1C759B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C759B0u, 0x1C77548u, 0x1C77550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77550u;
label_1c77550:
    // 0x1c77550: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C77550u;
    SET_GPR_U32(ctx, 31, 0x1C77558u);
    ctx->pc = 0x1C77554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77550u;
    // 0x1c77554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C77550u, 0x1C77558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77558u;
label_1c77558:
    // 0x1c77558: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c77558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c7755c:
    // 0x1c7755c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7755cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77560: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c77560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77564: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77564u;
        // 0x1c77568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7756Cu;
label_1c7756c:
    // 0x1c7756c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7756Cu;
    {
        const bool branch_taken_0x1c7756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7756Cu;
        // 0x1c77570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7756c) {
            ctx->pc = 0x1C7755Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7755c;
        }
    }
    ctx->pc = 0x1C77574u;
    // 0x1c77574: 0x0  nop
    ctx->pc = 0x1c77574u;
    // NOP
    // 0x1c77578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7757c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7757cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c77580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c77584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c77584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c77588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c77588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7758c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c7758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c77590: 0xc71d658  jal         func_1C75960
    ctx->pc = 0x1C77590u;
    SET_GPR_U32(ctx, 31, 0x1C77598u);
    ctx->pc = 0x1C77594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77590u;
    // 0x1c77594: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75960u, 0x1C77590u, 0x1C77598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77598u;
label_1c77598:
    // 0x1c77598: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c77598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c7759c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c7759cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c775a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c775a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c775a4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c775a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c775a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c775a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c775ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c775acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c775b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c775b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c775b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c775b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c775b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c775b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c775bc: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C775BCu;
    SET_GPR_U32(ctx, 31, 0x1C775C4u);
    ctx->pc = 0x1C775C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C775BCu;
    // 0x1c775c0: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C775BCu, 0x1C775C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C775C4u;
label_1c775c4:
    // 0x1c775c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c775c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c775c8: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C775C8u;
    SET_GPR_U32(ctx, 31, 0x1C775D0u);
    ctx->pc = 0x1C775CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C775C8u;
    // 0x1c775cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C775C8u, 0x1C775D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C775D0u;
label_1c775d0:
    // 0x1c775d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c775d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c775d4: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C775D4u;
    SET_GPR_U32(ctx, 31, 0x1C775DCu);
    ctx->pc = 0x1C775D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C775D4u;
    // 0x1c775d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C775D4u, 0x1C775DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C775DCu;
label_1c775dc:
    // 0x1c775dc: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c775dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c775e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c775e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c775e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c775e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c775e8: 0xc71d65c  jal         func_1C75970
    ctx->pc = 0x1C775E8u;
    SET_GPR_U32(ctx, 31, 0x1C775F0u);
    ctx->pc = 0x1C775ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C775E8u;
    // 0x1c775ec: 0x240500b9  addiu       $a1, $zero, 0xB9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75970u, 0x1C775E8u, 0x1C775F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C775F0u;
label_1c775f0:
    // 0x1c775f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c775f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c775f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c775f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c775f8: 0xc71d650  jal         func_1C75940
    ctx->pc = 0x1C775F8u;
    SET_GPR_U32(ctx, 31, 0x1C77600u);
    ctx->pc = 0x1C775FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C775F8u;
    // 0x1c775fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75940u, 0x1C775F8u, 0x1C77600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77600u;
label_1c77600:
    // 0x1c77600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77604: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c77604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7760c: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x1c7760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1c77610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c77610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77614: 0x871d65e  j           func_1C75978
    ctx->pc = 0x1C77614u;
    ctx->pc = 0x1C77618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77614u;
    // 0x1c77618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75978u;
    sub_01C75978_0x1c75978(rdram, ctx, runtime); return;
    ctx->pc = 0x1C7761Cu;
    // 0x1c7761c: 0x0  nop
    ctx->pc = 0x1c7761cu;
    // NOP
    ctx->pc = 0x1c77620u;
}
