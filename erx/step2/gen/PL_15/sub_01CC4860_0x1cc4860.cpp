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

// Function: sub_01CC4860
// Address: 0x1cc4860 - 0x1cc4970
void sub_01CC4860_0x1cc4860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4860_0x1cc4860");
#endif

    switch (ctx->pc) {
        case 0x1cc4880u: goto label_1cc4880;
        case 0x1cc4894u: goto label_1cc4894;
        case 0x1cc4898u: goto label_1cc4898;
        case 0x1cc48b4u: goto label_1cc48b4;
        case 0x1cc48c4u: goto label_1cc48c4;
        case 0x1cc4910u: goto label_1cc4910;
        case 0x1cc494cu: goto label_1cc494c;
        case 0x1cc4958u: goto label_1cc4958;
        default: break;
    }

    ctx->pc = 0x1cc4860u;

    // 0x1cc4860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc4860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc4864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc4864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc4868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc486c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc4870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc4870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4874: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc4874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc4878: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4878u;
    SET_GPR_U32(ctx, 31, 0x1CC4880u);
    ctx->pc = 0x1CC487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4878u;
    // 0x1cc487c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4878u, 0x1CC4880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4880u;
label_1cc4880:
    // 0x1cc4880: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cc4880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cc4884: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CC4884u;
    {
        const bool branch_taken_0x1cc4884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4884u;
        // 0x1cc4888: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4884) {
            ctx->pc = 0x1CC48D0u;
            goto label_1cc48d0;
        }
    }
    ctx->pc = 0x1CC488Cu;
    // 0x1cc488c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC488Cu;
    {
        const bool branch_taken_0x1cc488c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cc488c) {
            ctx->pc = 0x1CC48ACu;
            goto label_1cc48ac;
        }
    }
    ctx->pc = 0x1CC4894u;
label_1cc4894:
    // 0x1cc4894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc4894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4898:
    // 0x1cc4898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc489c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc489cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc48a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc48a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc48a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC48A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC48A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC48A4u;
        // 0x1cc48a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC48A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC48ACu;
label_1cc48ac:
    // 0x1cc48ac: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC48ACu;
    SET_GPR_U32(ctx, 31, 0x1CC48B4u);
    ctx->pc = 0x1CC48B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC48ACu;
    // 0x1cc48b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC48ACu, 0x1CC48B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC48B4u;
label_1cc48b4:
    // 0x1cc48b4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CC48B4u;
    {
        const bool branch_taken_0x1cc48b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CC48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC48B4u;
        // 0x1cc48b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc48b4) {
            ctx->pc = 0x1CC4894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4894;
        }
    }
    ctx->pc = 0x1CC48BCu;
    // 0x1cc48bc: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC48BCu;
    SET_GPR_U32(ctx, 31, 0x1CC48C4u);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC48BCu, 0x1CC48C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC48C4u;
label_1cc48c4:
    // 0x1cc48c4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CC48C4u;
    {
        const bool branch_taken_0x1cc48c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC48C4u;
        // 0x1cc48c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc48c4) {
            ctx->pc = 0x1CC4898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4898;
        }
    }
    ctx->pc = 0x1CC48CCu;
    // 0x1cc48cc: 0x0  nop
    ctx->pc = 0x1cc48ccu;
    // NOP
label_1cc48d0:
    // 0x1cc48d0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cc48d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cc48d4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CC48D4u;
    {
        const bool branch_taken_0x1cc48d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC48D4u;
        // 0x1cc48d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc48d4) {
            ctx->pc = 0x1CC4898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4898;
        }
    }
    ctx->pc = 0x1CC48DCu;
    // 0x1cc48dc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cc48dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cc48e0: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x1cc48e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x1cc48e4: 0x25ce7218  addiu       $t6, $t6, 0x7218
    ctx->pc = 0x1cc48e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 29208));
    // 0x1cc48e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc48e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc48ec: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cc48ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cc48f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc48f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc48f4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cc48f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cc48f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc48f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc48fc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cc48fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cc4900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc4900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4904: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc4904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4908: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC4908u;
    SET_GPR_U32(ctx, 31, 0x1CC4910u);
    ctx->pc = 0x1CC490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4908u;
    // 0x1cc490c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC4908u, 0x1CC4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4910u;
label_1cc4910:
    // 0x1cc4910: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc4910u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4914: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CC4914u;
    {
        const bool branch_taken_0x1cc4914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4914u;
        // 0x1cc4918: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4914) {
            ctx->pc = 0x1CC4894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4894;
        }
    }
    ctx->pc = 0x1CC491Cu;
    // 0x1cc491c: 0x0  nop
    ctx->pc = 0x1cc491cu;
    // NOP
    // 0x1cc4920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc4924: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc4924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc4928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc4928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc492c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc492cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4930: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc4930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc4934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc4934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc4938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc493c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc493cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4940: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc4940u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4944: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC4944u;
    SET_GPR_U32(ctx, 31, 0x1CC494Cu);
    ctx->pc = 0x1CC4948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4944u;
    // 0x1cc4948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC4944u, 0x1CC494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC494Cu;
label_1cc494c:
    // 0x1cc494c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4950: 0xc73091c  jal         func_1CC2470
    ctx->pc = 0x1CC4950u;
    SET_GPR_U32(ctx, 31, 0x1CC4958u);
    ctx->pc = 0x1CC4954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4950u;
    // 0x1cc4954: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2470u, 0x1CC4950u, 0x1CC4958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4958u;
label_1cc4958:
    // 0x1cc4958: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cc4958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cc495c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc495cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc4960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4964: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4964u;
        // 0x1cc4968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC496Cu;
    // 0x1cc496c: 0x0  nop
    ctx->pc = 0x1cc496cu;
    // NOP
    ctx->pc = 0x1cc4970u;
}
