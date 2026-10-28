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

// Function: sub_01CA4740
// Address: 0x1ca4740 - 0x1ca4828
void sub_01CA4740_0x1ca4740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4740_0x1ca4740");
#endif

    switch (ctx->pc) {
        case 0x1ca4754u: goto label_1ca4754;
        case 0x1ca4768u: goto label_1ca4768;
        case 0x1ca476cu: goto label_1ca476c;
        case 0x1ca4788u: goto label_1ca4788;
        case 0x1ca4794u: goto label_1ca4794;
        case 0x1ca47d4u: goto label_1ca47d4;
        case 0x1ca4800u: goto label_1ca4800;
        case 0x1ca480cu: goto label_1ca480c;
        case 0x1ca4818u: goto label_1ca4818;
        default: break;
    }

    ctx->pc = 0x1ca4740u;

    // 0x1ca4740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4748: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca4748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca474c: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA474Cu;
    SET_GPR_U32(ctx, 31, 0x1CA4754u);
    ctx->pc = 0x1CA4750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA474Cu;
    // 0x1ca4750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA474Cu, 0x1CA4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4754u;
label_1ca4754:
    // 0x1ca4754: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca4754u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4758: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA4758u;
    {
        const bool branch_taken_0x1ca4758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4758u;
        // 0x1ca475c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4758) {
            ctx->pc = 0x1CA477Cu;
            goto label_1ca477c;
        }
    }
    ctx->pc = 0x1CA4760u;
    // 0x1ca4760: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA4760u;
    SET_GPR_U32(ctx, 31, 0x1CA4768u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA4760u, 0x1CA4768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4768u;
label_1ca4768:
    // 0x1ca4768: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ca4768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ca476c:
    // 0x1ca476c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca476cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4770: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca4770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4774: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4774u;
        // 0x1ca4778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA477Cu;
label_1ca477c:
    // 0x1ca477c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca477cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca4780: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA4780u;
    SET_GPR_U32(ctx, 31, 0x1CA4788u);
    ctx->pc = 0x1CA4784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4780u;
    // 0x1ca4784: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA4780u, 0x1CA4788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4788u;
label_1ca4788:
    // 0x1ca4788: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1ca4788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1ca478c: 0xc7289e4  jal         func_1CA2790
    ctx->pc = 0x1CA478Cu;
    SET_GPR_U32(ctx, 31, 0x1CA4794u);
    ctx->pc = 0x1CA4790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA478Cu;
    // 0x1ca4790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2790u, 0x1CA478Cu, 0x1CA4794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4794u;
label_1ca4794:
    // 0x1ca4794: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CA4794u;
    {
        const bool branch_taken_0x1ca4794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4794u;
        // 0x1ca4798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4794) {
            ctx->pc = 0x1CA476Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca476c;
        }
    }
    ctx->pc = 0x1CA479Cu;
    // 0x1ca479c: 0x0  nop
    ctx->pc = 0x1ca479cu;
    // NOP
    // 0x1ca47a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca47a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca47a4: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1ca47a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1ca47a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ca47a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ca47ac: 0x25eecfd0  addiu       $t6, $t7, -0x3030
    ctx->pc = 0x1ca47acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954960));
    // 0x1ca47b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ca47b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ca47b4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1ca47b4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CACFD4u));
    // 0x1ca47b8: 0x8dedcfd0  lw          $t5, -0x3030($t7)
    ctx->pc = 0x1ca47b8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CACFD0u));
    // 0x1ca47bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca47bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca47c0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1ca47c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1ca47c4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1ca47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1ca47c8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ca47c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ca47cc: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA47CCu;
    SET_GPR_U32(ctx, 31, 0x1CA47D4u);
    ctx->pc = 0x1CA47D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA47CCu;
    // 0x1ca47d0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA47CCu, 0x1CA47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA47D4u;
label_1ca47d4:
    // 0x1ca47d4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1ca47d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ca47d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca47d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca47dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca47dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca47e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca47e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca47e4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ca47e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ca47e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca47e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca47ec: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1ca47ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1ca47f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca47f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca47f4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ca47f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ca47f8: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA47F8u;
    SET_GPR_U32(ctx, 31, 0x1CA4800u);
    ctx->pc = 0x1CA47FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA47F8u;
    // 0x1ca47fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA47F8u, 0x1CA4800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4800u;
label_1ca4800:
    // 0x1ca4800: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca4800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca4804: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA4804u;
    SET_GPR_U32(ctx, 31, 0x1CA480Cu);
    ctx->pc = 0x1CA4808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4804u;
    // 0x1ca4808: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA4804u, 0x1CA480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA480Cu;
label_1ca480c:
    // 0x1ca480c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca480cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4810: 0xc7289e6  jal         func_1CA2798
    ctx->pc = 0x1CA4810u;
    SET_GPR_U32(ctx, 31, 0x1CA4818u);
    ctx->pc = 0x1CA4814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4810u;
    // 0x1ca4814: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2798u, 0x1CA4810u, 0x1CA4818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4818u;
label_1ca4818:
    // 0x1ca4818: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ca4818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca481c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ca481cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca4820: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4820u;
        // 0x1ca4824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4828u;
}
