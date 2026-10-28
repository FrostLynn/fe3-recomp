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

// Function: sub_01C30410
// Address: 0x1c30410 - 0x1c304f0
void sub_01C30410_0x1c30410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30410_0x1c30410");
#endif

    switch (ctx->pc) {
        case 0x1c30424u: goto label_1c30424;
        case 0x1c30438u: goto label_1c30438;
        case 0x1c3043cu: goto label_1c3043c;
        case 0x1c30458u: goto label_1c30458;
        case 0x1c30464u: goto label_1c30464;
        case 0x1c30494u: goto label_1c30494;
        case 0x1c304c0u: goto label_1c304c0;
        case 0x1c304ccu: goto label_1c304cc;
        default: break;
    }

    ctx->pc = 0x1c30410u;

    // 0x1c30410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c30410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c30414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c30414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c30418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c30418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c3041c: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C3041Cu;
    SET_GPR_U32(ctx, 31, 0x1C30424u);
    ctx->pc = 0x1C30420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3041Cu;
    // 0x1c30420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C3041Cu, 0x1C30424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30424u;
label_1c30424:
    // 0x1c30424: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c30424u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c30428: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C30428u;
    {
        const bool branch_taken_0x1c30428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C3042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30428u;
        // 0x1c3042c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30428) {
            ctx->pc = 0x1C3044Cu;
            goto label_1c3044c;
        }
    }
    ctx->pc = 0x1C30430u;
    // 0x1c30430: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C30430u;
    SET_GPR_U32(ctx, 31, 0x1C30438u);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C30430u, 0x1C30438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30438u;
label_1c30438:
    // 0x1c30438: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c30438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c3043c:
    // 0x1c3043c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3043cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30440: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c30440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c30444: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30444u;
        // 0x1c30448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3044Cu;
label_1c3044c:
    // 0x1c3044c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c3044cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c30450: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30450u;
    SET_GPR_U32(ctx, 31, 0x1C30458u);
    ctx->pc = 0x1C30454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30450u;
    // 0x1c30454: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30450u, 0x1C30458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30458u;
label_1c30458:
    // 0x1c30458: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c30458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c3045c: 0xc70bde4  jal         func_1C2F790
    ctx->pc = 0x1C3045Cu;
    SET_GPR_U32(ctx, 31, 0x1C30464u);
    ctx->pc = 0x1C30460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3045Cu;
    // 0x1c30460: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F790u, 0x1C3045Cu, 0x1C30464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30464u;
label_1c30464:
    // 0x1c30464: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C30464u;
    {
        const bool branch_taken_0x1c30464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30464u;
        // 0x1c30468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30464) {
            ctx->pc = 0x1C3043Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3043c;
        }
    }
    ctx->pc = 0x1C3046Cu;
    // 0x1c3046c: 0x0  nop
    ctx->pc = 0x1c3046cu;
    // NOP
    // 0x1c30470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c30470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c30474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c30474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c30478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c30478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c3047c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c3047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c30480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c30480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30484: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c30484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30488: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c30488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c3048c: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C3048Cu;
    SET_GPR_U32(ctx, 31, 0x1C30494u);
    ctx->pc = 0x1C30490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3048Cu;
    // 0x1c30490: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C3048Cu, 0x1C30494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30494u;
label_1c30494:
    // 0x1c30494: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c30494u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c30498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c30498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3049c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3049cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c304a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c304a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c304a4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c304a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c304a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c304a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c304ac: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c304acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c304b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c304b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c304b4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c304b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c304b8: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C304B8u;
    SET_GPR_U32(ctx, 31, 0x1C304C0u);
    ctx->pc = 0x1C304BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C304B8u;
    // 0x1c304bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C304B8u, 0x1C304C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C304C0u;
label_1c304c0:
    // 0x1c304c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c304c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c304c4: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C304C4u;
    SET_GPR_U32(ctx, 31, 0x1C304CCu);
    ctx->pc = 0x1C304C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C304C4u;
    // 0x1c304c8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C304C4u, 0x1C304CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C304CCu;
label_1c304cc:
    // 0x1c304cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c304ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c304d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c304d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c304d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c304d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c304d8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c304d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c304dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c304dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c304e0: 0x870bde6  j           func_1C2F798
    ctx->pc = 0x1C304E0u;
    ctx->pc = 0x1C304E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C304E0u;
    // 0x1c304e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F798u;
    sub_01C2F798_0x1c2f798(rdram, ctx, runtime); return;
    ctx->pc = 0x1C304E8u;
    // 0x1c304e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C304E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C304E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C304F0u;
}
