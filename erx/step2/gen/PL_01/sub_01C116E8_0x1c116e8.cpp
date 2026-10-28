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

// Function: sub_01C116E8
// Address: 0x1c116e8 - 0x1c117d0
void sub_01C116E8_0x1c116e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C116E8_0x1c116e8");
#endif

    switch (ctx->pc) {
        case 0x1c116fcu: goto label_1c116fc;
        case 0x1c11710u: goto label_1c11710;
        case 0x1c11714u: goto label_1c11714;
        case 0x1c11730u: goto label_1c11730;
        case 0x1c1173cu: goto label_1c1173c;
        case 0x1c1177cu: goto label_1c1177c;
        case 0x1c117a8u: goto label_1c117a8;
        case 0x1c117b4u: goto label_1c117b4;
        case 0x1c117c0u: goto label_1c117c0;
        default: break;
    }

    ctx->pc = 0x1c116e8u;

    // 0x1c116e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c116e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c116ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c116ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c116f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c116f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c116f4: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C116F4u;
    SET_GPR_U32(ctx, 31, 0x1C116FCu);
    ctx->pc = 0x1C116F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C116F4u;
    // 0x1c116f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C116F4u, 0x1C116FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C116FCu;
label_1c116fc:
    // 0x1c116fc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c116fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11700: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C11700u;
    {
        const bool branch_taken_0x1c11700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C11704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11700u;
        // 0x1c11704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11700) {
            ctx->pc = 0x1C11724u;
            goto label_1c11724;
        }
    }
    ctx->pc = 0x1C11708u;
    // 0x1c11708: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C11708u;
    SET_GPR_U32(ctx, 31, 0x1C11710u);
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C11708u, 0x1C11710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11710u;
label_1c11710:
    // 0x1c11710: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c11710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c11714:
    // 0x1c11714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c11718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1171c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1171Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1171Cu;
        // 0x1c11720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1171Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11724u;
label_1c11724:
    // 0x1c11724: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c11724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c11728: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11728u;
    SET_GPR_U32(ctx, 31, 0x1C11730u);
    ctx->pc = 0x1C1172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11728u;
    // 0x1c1172c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11728u, 0x1C11730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11730u;
label_1c11730:
    // 0x1c11730: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c11730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c11734: 0xc703de4  jal         func_1C0F790
    ctx->pc = 0x1C11734u;
    SET_GPR_U32(ctx, 31, 0x1C1173Cu);
    ctx->pc = 0x1C11738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11734u;
    // 0x1c11738: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F790u, 0x1C11734u, 0x1C1173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1173Cu;
label_1c1173c:
    // 0x1c1173c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C1173Cu;
    {
        const bool branch_taken_0x1c1173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1173Cu;
        // 0x1c11740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1173c) {
            ctx->pc = 0x1C11714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11714;
        }
    }
    ctx->pc = 0x1C11744u;
    // 0x1c11744: 0x0  nop
    ctx->pc = 0x1c11744u;
    // NOP
    // 0x1c11748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c11748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1174c: 0x3c0f01c2  lui         $t7, 0x1C2
    ctx->pc = 0x1c1174cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)450 << 16));
    // 0x1c11750: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c11750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c11754: 0x25eef078  addiu       $t6, $t7, -0xF88
    ctx->pc = 0x1c11754u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963320));
    // 0x1c11758: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c11758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c1175c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c1175cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C1F07Cu));
    // 0x1c11760: 0x8dedf078  lw          $t5, -0xF88($t7)
    ctx->pc = 0x1c11760u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C1F078u));
    // 0x1c11764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c11764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11768: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c11768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c1176c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c1176cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c11770: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c11770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c11774: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11774u;
    SET_GPR_U32(ctx, 31, 0x1C1177Cu);
    ctx->pc = 0x1C11778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11774u;
    // 0x1c11778: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11774u, 0x1C1177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1177Cu;
label_1c1177c:
    // 0x1c1177c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c1177cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c11780: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c11780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c11784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11788: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c11788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1178c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c1178cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c11790: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c11790u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11794: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c11794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c11798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1179c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c1179cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c117a0: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C117A0u;
    SET_GPR_U32(ctx, 31, 0x1C117A8u);
    ctx->pc = 0x1C117A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C117A0u;
    // 0x1c117a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C117A0u, 0x1C117A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C117A8u;
label_1c117a8:
    // 0x1c117a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c117a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c117ac: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C117ACu;
    SET_GPR_U32(ctx, 31, 0x1C117B4u);
    ctx->pc = 0x1C117B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C117ACu;
    // 0x1c117b0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C117ACu, 0x1C117B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C117B4u;
label_1c117b4:
    // 0x1c117b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c117b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c117b8: 0xc703de6  jal         func_1C0F798
    ctx->pc = 0x1C117B8u;
    SET_GPR_U32(ctx, 31, 0x1C117C0u);
    ctx->pc = 0x1C117BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C117B8u;
    // 0x1c117bc: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F798u, 0x1C117B8u, 0x1C117C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C117C0u;
label_1c117c0:
    // 0x1c117c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c117c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c117c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c117c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c117c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C117C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C117CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C117C8u;
        // 0x1c117cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C117C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C117D0u;
}
