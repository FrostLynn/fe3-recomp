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

// Function: sub_01CC44F8
// Address: 0x1cc44f8 - 0x1cc45e0
void sub_01CC44F8_0x1cc44f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC44F8_0x1cc44f8");
#endif

    switch (ctx->pc) {
        case 0x1cc450cu: goto label_1cc450c;
        case 0x1cc4520u: goto label_1cc4520;
        case 0x1cc4524u: goto label_1cc4524;
        case 0x1cc4540u: goto label_1cc4540;
        case 0x1cc454cu: goto label_1cc454c;
        case 0x1cc458cu: goto label_1cc458c;
        case 0x1cc45b8u: goto label_1cc45b8;
        case 0x1cc45c4u: goto label_1cc45c4;
        case 0x1cc45d0u: goto label_1cc45d0;
        default: break;
    }

    ctx->pc = 0x1cc44f8u;

    // 0x1cc44f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc44f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc44fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc44fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4500: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc4500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc4504: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC4504u;
    SET_GPR_U32(ctx, 31, 0x1CC450Cu);
    ctx->pc = 0x1CC4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4504u;
    // 0x1cc4508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC4504u, 0x1CC450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC450Cu;
label_1cc450c:
    // 0x1cc450c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc450cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4510: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC4510u;
    {
        const bool branch_taken_0x1cc4510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CC4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4510u;
        // 0x1cc4514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4510) {
            ctx->pc = 0x1CC4534u;
            goto label_1cc4534;
        }
    }
    ctx->pc = 0x1CC4518u;
    // 0x1cc4518: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC4518u;
    SET_GPR_U32(ctx, 31, 0x1CC4520u);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC4518u, 0x1CC4520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4520u;
label_1cc4520:
    // 0x1cc4520: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cc4520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cc4524:
    // 0x1cc4524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4528: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc4528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc452c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC452Cu;
        // 0x1cc4530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC452Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4534u;
label_1cc4534:
    // 0x1cc4534: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc4534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc4538: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4538u;
    SET_GPR_U32(ctx, 31, 0x1CC4540u);
    ctx->pc = 0x1CC453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4538u;
    // 0x1cc453c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4538u, 0x1CC4540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4540u;
label_1cc4540:
    // 0x1cc4540: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cc4540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cc4544: 0xc730926  jal         func_1CC2498
    ctx->pc = 0x1CC4544u;
    SET_GPR_U32(ctx, 31, 0x1CC454Cu);
    ctx->pc = 0x1CC4548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4544u;
    // 0x1cc4548: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2498u, 0x1CC4544u, 0x1CC454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC454Cu;
label_1cc454c:
    // 0x1cc454c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CC454Cu;
    {
        const bool branch_taken_0x1cc454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC454Cu;
        // 0x1cc4550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc454c) {
            ctx->pc = 0x1CC4524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4524;
        }
    }
    ctx->pc = 0x1CC4554u;
    // 0x1cc4554: 0x0  nop
    ctx->pc = 0x1cc4554u;
    // NOP
    // 0x1cc4558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc4558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc455c: 0x3c0f01cd  lui         $t7, 0x1CD
    ctx->pc = 0x1cc455cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)461 << 16));
    // 0x1cc4560: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cc4560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cc4564: 0x25eed3c8  addiu       $t6, $t7, -0x2C38
    ctx->pc = 0x1cc4564u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955976));
    // 0x1cc4568: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cc4568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cc456c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cc456cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CCD3CCu));
    // 0x1cc4570: 0x8dedd3c8  lw          $t5, -0x2C38($t7)
    ctx->pc = 0x1cc4570u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CCD3C8u));
    // 0x1cc4574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc4574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4578: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cc4578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cc457c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cc457cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cc4580: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cc4580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cc4584: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4584u;
    SET_GPR_U32(ctx, 31, 0x1CC458Cu);
    ctx->pc = 0x1CC4588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4584u;
    // 0x1cc4588: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4584u, 0x1CC458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC458Cu;
label_1cc458c:
    // 0x1cc458c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cc458cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cc4590: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc4590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4594: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc4594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4598: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc4598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc459c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cc459cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cc45a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc45a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc45a4: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cc45a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cc45a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc45a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc45ac: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cc45acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cc45b0: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC45B0u;
    SET_GPR_U32(ctx, 31, 0x1CC45B8u);
    ctx->pc = 0x1CC45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC45B0u;
    // 0x1cc45b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC45B0u, 0x1CC45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC45B8u;
label_1cc45b8:
    // 0x1cc45b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc45b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc45bc: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC45BCu;
    SET_GPR_U32(ctx, 31, 0x1CC45C4u);
    ctx->pc = 0x1CC45C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC45BCu;
    // 0x1cc45c0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC45BCu, 0x1CC45C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC45C4u;
label_1cc45c4:
    // 0x1cc45c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc45c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc45c8: 0xc730928  jal         func_1CC24A0
    ctx->pc = 0x1CC45C8u;
    SET_GPR_U32(ctx, 31, 0x1CC45D0u);
    ctx->pc = 0x1CC45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC45C8u;
    // 0x1cc45cc: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC24A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC24A0u, 0x1CC45C8u, 0x1CC45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC45D0u;
label_1cc45d0:
    // 0x1cc45d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cc45d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc45d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cc45d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc45d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC45D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC45D8u;
        // 0x1cc45dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC45D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC45E0u;
}
