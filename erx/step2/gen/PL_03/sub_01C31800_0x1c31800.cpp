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

// Function: sub_01C31800
// Address: 0x1c31800 - 0x1c318e8
void sub_01C31800_0x1c31800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31800_0x1c31800");
#endif

    switch (ctx->pc) {
        case 0x1c31814u: goto label_1c31814;
        case 0x1c31828u: goto label_1c31828;
        case 0x1c3182cu: goto label_1c3182c;
        case 0x1c31848u: goto label_1c31848;
        case 0x1c31854u: goto label_1c31854;
        case 0x1c31894u: goto label_1c31894;
        case 0x1c318c0u: goto label_1c318c0;
        case 0x1c318ccu: goto label_1c318cc;
        case 0x1c318d8u: goto label_1c318d8;
        default: break;
    }

    ctx->pc = 0x1c31800u;

    // 0x1c31800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c31804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31808: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c31808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c3180c: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C3180Cu;
    SET_GPR_U32(ctx, 31, 0x1C31814u);
    ctx->pc = 0x1C31810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3180Cu;
    // 0x1c31810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C3180Cu, 0x1C31814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31814u;
label_1c31814:
    // 0x1c31814: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c31814u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31818: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C31818u;
    {
        const bool branch_taken_0x1c31818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C3181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31818u;
        // 0x1c3181c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31818) {
            ctx->pc = 0x1C3183Cu;
            goto label_1c3183c;
        }
    }
    ctx->pc = 0x1C31820u;
    // 0x1c31820: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C31820u;
    SET_GPR_U32(ctx, 31, 0x1C31828u);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C31820u, 0x1C31828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31828u;
label_1c31828:
    // 0x1c31828: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c31828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c3182c:
    // 0x1c3182c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3182cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31830: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c31830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31834: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31834u;
        // 0x1c31838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3183Cu;
label_1c3183c:
    // 0x1c3183c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c3183cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c31840: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31840u;
    SET_GPR_U32(ctx, 31, 0x1C31848u);
    ctx->pc = 0x1C31844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31840u;
    // 0x1c31844: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31840u, 0x1C31848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31848u;
label_1c31848:
    // 0x1c31848: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c31848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c3184c: 0xc70bde4  jal         func_1C2F790
    ctx->pc = 0x1C3184Cu;
    SET_GPR_U32(ctx, 31, 0x1C31854u);
    ctx->pc = 0x1C31850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3184Cu;
    // 0x1c31850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F790u, 0x1C3184Cu, 0x1C31854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31854u;
label_1c31854:
    // 0x1c31854: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C31854u;
    {
        const bool branch_taken_0x1c31854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31854u;
        // 0x1c31858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31854) {
            ctx->pc = 0x1C3182Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3182c;
        }
    }
    ctx->pc = 0x1C3185Cu;
    // 0x1c3185c: 0x0  nop
    ctx->pc = 0x1c3185cu;
    // NOP
    // 0x1c31860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c31860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c31864: 0x3c0f01c4  lui         $t7, 0x1C4
    ctx->pc = 0x1c31864u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)452 << 16));
    // 0x1c31868: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c31868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c3186c: 0x25ee2348  addiu       $t6, $t7, 0x2348
    ctx->pc = 0x1c3186cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 9032));
    // 0x1c31870: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c31870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c31874: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c31874u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C4234Cu));
    // 0x1c31878: 0x8ded2348  lw          $t5, 0x2348($t7)
    ctx->pc = 0x1c31878u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C42348u));
    // 0x1c3187c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3187cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31880: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c31880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c31884: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c31884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c31888: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c31888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c3188c: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C3188Cu;
    SET_GPR_U32(ctx, 31, 0x1C31894u);
    ctx->pc = 0x1C31890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3188Cu;
    // 0x1c31890: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C3188Cu, 0x1C31894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31894u;
label_1c31894:
    // 0x1c31894: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c31894u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c31898: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c31898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3189c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3189cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c318a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c318a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c318a4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c318a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c318a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c318a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c318ac: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c318acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c318b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c318b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c318b4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c318b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c318b8: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C318B8u;
    SET_GPR_U32(ctx, 31, 0x1C318C0u);
    ctx->pc = 0x1C318BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C318B8u;
    // 0x1c318bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C318B8u, 0x1C318C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C318C0u;
label_1c318c0:
    // 0x1c318c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c318c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c318c4: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C318C4u;
    SET_GPR_U32(ctx, 31, 0x1C318CCu);
    ctx->pc = 0x1C318C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C318C4u;
    // 0x1c318c8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C318C4u, 0x1C318CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C318CCu;
label_1c318cc:
    // 0x1c318cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c318ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c318d0: 0xc70bde6  jal         func_1C2F798
    ctx->pc = 0x1C318D0u;
    SET_GPR_U32(ctx, 31, 0x1C318D8u);
    ctx->pc = 0x1C318D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C318D0u;
    // 0x1c318d4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F798u, 0x1C318D0u, 0x1C318D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C318D8u;
label_1c318d8:
    // 0x1c318d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c318d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c318dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c318dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c318e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C318E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C318E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C318E0u;
        // 0x1c318e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C318E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C318E8u;
}
