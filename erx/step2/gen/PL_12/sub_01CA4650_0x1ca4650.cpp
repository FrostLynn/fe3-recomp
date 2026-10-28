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

// Function: sub_01CA4650
// Address: 0x1ca4650 - 0x1ca4738
void sub_01CA4650_0x1ca4650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4650_0x1ca4650");
#endif

    switch (ctx->pc) {
        case 0x1ca4664u: goto label_1ca4664;
        case 0x1ca4678u: goto label_1ca4678;
        case 0x1ca467cu: goto label_1ca467c;
        case 0x1ca4698u: goto label_1ca4698;
        case 0x1ca46a4u: goto label_1ca46a4;
        case 0x1ca46e4u: goto label_1ca46e4;
        case 0x1ca4710u: goto label_1ca4710;
        case 0x1ca471cu: goto label_1ca471c;
        case 0x1ca4728u: goto label_1ca4728;
        default: break;
    }

    ctx->pc = 0x1ca4650u;

    // 0x1ca4650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4658: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca4658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca465c: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA465Cu;
    SET_GPR_U32(ctx, 31, 0x1CA4664u);
    ctx->pc = 0x1CA4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA465Cu;
    // 0x1ca4660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA465Cu, 0x1CA4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4664u;
label_1ca4664:
    // 0x1ca4664: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca4664u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4668: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA4668u;
    {
        const bool branch_taken_0x1ca4668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4668u;
        // 0x1ca466c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4668) {
            ctx->pc = 0x1CA468Cu;
            goto label_1ca468c;
        }
    }
    ctx->pc = 0x1CA4670u;
    // 0x1ca4670: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA4670u;
    SET_GPR_U32(ctx, 31, 0x1CA4678u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA4670u, 0x1CA4678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4678u;
label_1ca4678:
    // 0x1ca4678: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ca4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ca467c:
    // 0x1ca467c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca467cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4680: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca4680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4684: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4684u;
        // 0x1ca4688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA468Cu;
label_1ca468c:
    // 0x1ca468c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca468cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca4690: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA4690u;
    SET_GPR_U32(ctx, 31, 0x1CA4698u);
    ctx->pc = 0x1CA4694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4690u;
    // 0x1ca4694: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA4690u, 0x1CA4698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4698u;
label_1ca4698:
    // 0x1ca4698: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1ca4698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1ca469c: 0xc7289e4  jal         func_1CA2790
    ctx->pc = 0x1CA469Cu;
    SET_GPR_U32(ctx, 31, 0x1CA46A4u);
    ctx->pc = 0x1CA46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA469Cu;
    // 0x1ca46a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2790u, 0x1CA469Cu, 0x1CA46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA46A4u;
label_1ca46a4:
    // 0x1ca46a4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CA46A4u;
    {
        const bool branch_taken_0x1ca46a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA46A4u;
        // 0x1ca46a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca46a4) {
            ctx->pc = 0x1CA467Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca467c;
        }
    }
    ctx->pc = 0x1CA46ACu;
    // 0x1ca46ac: 0x0  nop
    ctx->pc = 0x1ca46acu;
    // NOP
    // 0x1ca46b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca46b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca46b4: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1ca46b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1ca46b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ca46b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ca46bc: 0x25eecfc8  addiu       $t6, $t7, -0x3038
    ctx->pc = 0x1ca46bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954952));
    // 0x1ca46c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ca46c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ca46c4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1ca46c4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CACFCCu));
    // 0x1ca46c8: 0x8dedcfc8  lw          $t5, -0x3038($t7)
    ctx->pc = 0x1ca46c8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CACFC8u));
    // 0x1ca46cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca46ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca46d0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1ca46d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1ca46d4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1ca46d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1ca46d8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ca46d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ca46dc: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA46DCu;
    SET_GPR_U32(ctx, 31, 0x1CA46E4u);
    ctx->pc = 0x1CA46E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA46DCu;
    // 0x1ca46e0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA46DCu, 0x1CA46E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA46E4u;
label_1ca46e4:
    // 0x1ca46e4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1ca46e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ca46e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca46e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca46ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca46ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca46f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca46f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca46f4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ca46f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ca46f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca46f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca46fc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1ca46fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1ca4700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4704: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ca4704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ca4708: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA4708u;
    SET_GPR_U32(ctx, 31, 0x1CA4710u);
    ctx->pc = 0x1CA470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4708u;
    // 0x1ca470c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA4708u, 0x1CA4710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4710u;
label_1ca4710:
    // 0x1ca4710: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca4710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca4714: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA4714u;
    SET_GPR_U32(ctx, 31, 0x1CA471Cu);
    ctx->pc = 0x1CA4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4714u;
    // 0x1ca4718: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA4714u, 0x1CA471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA471Cu;
label_1ca471c:
    // 0x1ca471c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca471cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4720: 0xc7289e6  jal         func_1CA2798
    ctx->pc = 0x1CA4720u;
    SET_GPR_U32(ctx, 31, 0x1CA4728u);
    ctx->pc = 0x1CA4724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4720u;
    // 0x1ca4724: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2798u, 0x1CA4720u, 0x1CA4728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4728u;
label_1ca4728:
    // 0x1ca4728: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ca4728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca472c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ca472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca4730: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4730u;
        // 0x1ca4734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4738u;
}
