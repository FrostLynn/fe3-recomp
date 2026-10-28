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

// Function: sub_01C117D8
// Address: 0x1c117d8 - 0x1c118c0
void sub_01C117D8_0x1c117d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C117D8_0x1c117d8");
#endif

    switch (ctx->pc) {
        case 0x1c117ecu: goto label_1c117ec;
        case 0x1c11800u: goto label_1c11800;
        case 0x1c11804u: goto label_1c11804;
        case 0x1c11820u: goto label_1c11820;
        case 0x1c1182cu: goto label_1c1182c;
        case 0x1c1186cu: goto label_1c1186c;
        case 0x1c11898u: goto label_1c11898;
        case 0x1c118a4u: goto label_1c118a4;
        case 0x1c118b0u: goto label_1c118b0;
        default: break;
    }

    ctx->pc = 0x1c117d8u;

    // 0x1c117d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c117d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c117dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c117dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c117e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c117e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c117e4: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C117E4u;
    SET_GPR_U32(ctx, 31, 0x1C117ECu);
    ctx->pc = 0x1C117E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C117E4u;
    // 0x1c117e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C117E4u, 0x1C117ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C117ECu;
label_1c117ec:
    // 0x1c117ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c117ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c117f0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C117F0u;
    {
        const bool branch_taken_0x1c117f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C117F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C117F0u;
        // 0x1c117f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c117f0) {
            ctx->pc = 0x1C11814u;
            goto label_1c11814;
        }
    }
    ctx->pc = 0x1C117F8u;
    // 0x1c117f8: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C117F8u;
    SET_GPR_U32(ctx, 31, 0x1C11800u);
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C117F8u, 0x1C11800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11800u;
label_1c11800:
    // 0x1c11800: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c11800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c11804:
    // 0x1c11804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11808: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c11808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1180c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1180Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1180Cu;
        // 0x1c11810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1180Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11814u;
label_1c11814:
    // 0x1c11814: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c11814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c11818: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11818u;
    SET_GPR_U32(ctx, 31, 0x1C11820u);
    ctx->pc = 0x1C1181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11818u;
    // 0x1c1181c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11818u, 0x1C11820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11820u;
label_1c11820:
    // 0x1c11820: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c11820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c11824: 0xc703de4  jal         func_1C0F790
    ctx->pc = 0x1C11824u;
    SET_GPR_U32(ctx, 31, 0x1C1182Cu);
    ctx->pc = 0x1C11828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11824u;
    // 0x1c11828: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F790u, 0x1C11824u, 0x1C1182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1182Cu;
label_1c1182c:
    // 0x1c1182c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C1182Cu;
    {
        const bool branch_taken_0x1c1182c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1182Cu;
        // 0x1c11830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1182c) {
            ctx->pc = 0x1C11804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11804;
        }
    }
    ctx->pc = 0x1C11834u;
    // 0x1c11834: 0x0  nop
    ctx->pc = 0x1c11834u;
    // NOP
    // 0x1c11838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c11838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1183c: 0x3c0f01c2  lui         $t7, 0x1C2
    ctx->pc = 0x1c1183cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)450 << 16));
    // 0x1c11840: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c11840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c11844: 0x25eef080  addiu       $t6, $t7, -0xF80
    ctx->pc = 0x1c11844u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963328));
    // 0x1c11848: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c11848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c1184c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c1184cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C1F084u));
    // 0x1c11850: 0x8dedf080  lw          $t5, -0xF80($t7)
    ctx->pc = 0x1c11850u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C1F080u));
    // 0x1c11854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c11854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11858: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c11858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c1185c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c1185cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c11860: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c11860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c11864: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11864u;
    SET_GPR_U32(ctx, 31, 0x1C1186Cu);
    ctx->pc = 0x1C11868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11864u;
    // 0x1c11868: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11864u, 0x1C1186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1186Cu;
label_1c1186c:
    // 0x1c1186c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c1186cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c11870: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c11870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11874: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c11874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11878: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c11878u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1187c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c1187cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c11880: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c11880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11884: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c11884u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c11888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1188c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c1188cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c11890: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C11890u;
    SET_GPR_U32(ctx, 31, 0x1C11898u);
    ctx->pc = 0x1C11894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11890u;
    // 0x1c11894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C11890u, 0x1C11898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11898u;
label_1c11898:
    // 0x1c11898: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c11898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c1189c: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C1189Cu;
    SET_GPR_U32(ctx, 31, 0x1C118A4u);
    ctx->pc = 0x1C118A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1189Cu;
    // 0x1c118a0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C1189Cu, 0x1C118A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C118A4u;
label_1c118a4:
    // 0x1c118a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c118a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c118a8: 0xc703de6  jal         func_1C0F798
    ctx->pc = 0x1C118A8u;
    SET_GPR_U32(ctx, 31, 0x1C118B0u);
    ctx->pc = 0x1C118ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C118A8u;
    // 0x1c118ac: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F798u, 0x1C118A8u, 0x1C118B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C118B0u;
label_1c118b0:
    // 0x1c118b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c118b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c118b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c118b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c118b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C118B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C118BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C118B8u;
        // 0x1c118bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C118B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C118C0u;
}
