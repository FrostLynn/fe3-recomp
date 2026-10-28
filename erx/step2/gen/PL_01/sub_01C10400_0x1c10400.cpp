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

// Function: sub_01C10400
// Address: 0x1c10400 - 0x1c104e0
void sub_01C10400_0x1c10400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C10400_0x1c10400");
#endif

    switch (ctx->pc) {
        case 0x1c10414u: goto label_1c10414;
        case 0x1c10428u: goto label_1c10428;
        case 0x1c1042cu: goto label_1c1042c;
        case 0x1c10448u: goto label_1c10448;
        case 0x1c10454u: goto label_1c10454;
        case 0x1c10484u: goto label_1c10484;
        case 0x1c104b0u: goto label_1c104b0;
        case 0x1c104bcu: goto label_1c104bc;
        default: break;
    }

    ctx->pc = 0x1c10400u;

    // 0x1c10400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c10400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c10404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c10404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c10408: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c10408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1040c: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C1040Cu;
    SET_GPR_U32(ctx, 31, 0x1C10414u);
    ctx->pc = 0x1C10410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1040Cu;
    // 0x1c10410: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C1040Cu, 0x1C10414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10414u;
label_1c10414:
    // 0x1c10414: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c10414u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10418: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C10418u;
    {
        const bool branch_taken_0x1c10418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C1041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10418u;
        // 0x1c1041c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10418) {
            ctx->pc = 0x1C1043Cu;
            goto label_1c1043c;
        }
    }
    ctx->pc = 0x1C10420u;
    // 0x1c10420: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C10420u;
    SET_GPR_U32(ctx, 31, 0x1C10428u);
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C10420u, 0x1C10428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10428u;
label_1c10428:
    // 0x1c10428: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c10428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c1042c:
    // 0x1c1042c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1042cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c10430: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c10430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c10434: 0x3e00008  jr          $ra
    ctx->pc = 0x1C10434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10434u;
        // 0x1c10438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C10434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1043Cu;
label_1c1043c:
    // 0x1c1043c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c1043cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c10440: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C10440u;
    SET_GPR_U32(ctx, 31, 0x1C10448u);
    ctx->pc = 0x1C10444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10440u;
    // 0x1c10444: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C10440u, 0x1C10448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10448u;
label_1c10448:
    // 0x1c10448: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c10448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c1044c: 0xc703de4  jal         func_1C0F790
    ctx->pc = 0x1C1044Cu;
    SET_GPR_U32(ctx, 31, 0x1C10454u);
    ctx->pc = 0x1C10450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1044Cu;
    // 0x1c10450: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F790u, 0x1C1044Cu, 0x1C10454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10454u;
label_1c10454:
    // 0x1c10454: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C10454u;
    {
        const bool branch_taken_0x1c10454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10454u;
        // 0x1c10458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10454) {
            ctx->pc = 0x1C1042Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1042c;
        }
    }
    ctx->pc = 0x1C1045Cu;
    // 0x1c1045c: 0x0  nop
    ctx->pc = 0x1c1045cu;
    // NOP
    // 0x1c10460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c10460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c10464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c10464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c10468: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c10468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1046c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c10470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c10470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10474: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c10474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10478: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c10478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c1047c: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C1047Cu;
    SET_GPR_U32(ctx, 31, 0x1C10484u);
    ctx->pc = 0x1C10480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1047Cu;
    // 0x1c10480: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C1047Cu, 0x1C10484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10484u;
label_1c10484:
    // 0x1c10484: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c10484u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c10488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c10488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1048c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1048cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10490: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c10490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10494: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c10494u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c10498: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c10498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1049c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c1049cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c104a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c104a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c104a4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c104a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c104a8: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C104A8u;
    SET_GPR_U32(ctx, 31, 0x1C104B0u);
    ctx->pc = 0x1C104ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C104A8u;
    // 0x1c104ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C104A8u, 0x1C104B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C104B0u;
label_1c104b0:
    // 0x1c104b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c104b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c104b4: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C104B4u;
    SET_GPR_U32(ctx, 31, 0x1C104BCu);
    ctx->pc = 0x1C104B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C104B4u;
    // 0x1c104b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C104B4u, 0x1C104BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C104BCu;
label_1c104bc:
    // 0x1c104bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c104bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c104c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c104c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c104c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c104c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c104c8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c104c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c104cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c104ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c104d0: 0x8703de6  j           func_1C0F798
    ctx->pc = 0x1C104D0u;
    ctx->pc = 0x1C104D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C104D0u;
    // 0x1c104d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F798u;
    sub_01C0F798_0x1c0f798(rdram, ctx, runtime); return;
    ctx->pc = 0x1C104D8u;
    // 0x1c104d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C104D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C104D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C104E0u;
}
