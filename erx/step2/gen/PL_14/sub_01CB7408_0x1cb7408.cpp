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

// Function: sub_01CB7408
// Address: 0x1cb7408 - 0x1cb74e8
void sub_01CB7408_0x1cb7408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7408_0x1cb7408");
#endif

    switch (ctx->pc) {
        case 0x1cb741cu: goto label_1cb741c;
        case 0x1cb7430u: goto label_1cb7430;
        case 0x1cb7434u: goto label_1cb7434;
        case 0x1cb7450u: goto label_1cb7450;
        case 0x1cb745cu: goto label_1cb745c;
        case 0x1cb748cu: goto label_1cb748c;
        case 0x1cb74b8u: goto label_1cb74b8;
        case 0x1cb74c4u: goto label_1cb74c4;
        default: break;
    }

    ctx->pc = 0x1cb7408u;

    // 0x1cb7408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb7408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb740c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb7410: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb7410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb7414: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB7414u;
    SET_GPR_U32(ctx, 31, 0x1CB741Cu);
    ctx->pc = 0x1CB7418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7414u;
    // 0x1cb7418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB7414u, 0x1CB741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB741Cu;
label_1cb741c:
    // 0x1cb741c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb741cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb7420: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB7420u;
    {
        const bool branch_taken_0x1cb7420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7420u;
        // 0x1cb7424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7420) {
            ctx->pc = 0x1CB7444u;
            goto label_1cb7444;
        }
    }
    ctx->pc = 0x1CB7428u;
    // 0x1cb7428: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB7428u;
    SET_GPR_U32(ctx, 31, 0x1CB7430u);
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB7428u, 0x1CB7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7430u;
label_1cb7430:
    // 0x1cb7430: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb7430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cb7434:
    // 0x1cb7434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb7434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7438: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb7438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb743c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB743Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB743Cu;
        // 0x1cb7440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB743Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB7444u;
label_1cb7444:
    // 0x1cb7444: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb7444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb7448: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB7448u;
    SET_GPR_U32(ctx, 31, 0x1CB7450u);
    ctx->pc = 0x1CB744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7448u;
    // 0x1cb744c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB7448u, 0x1CB7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7450u;
label_1cb7450:
    // 0x1cb7450: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cb7450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cb7454: 0xc72d9e4  jal         func_1CB6790
    ctx->pc = 0x1CB7454u;
    SET_GPR_U32(ctx, 31, 0x1CB745Cu);
    ctx->pc = 0x1CB7458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7454u;
    // 0x1cb7458: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6790u, 0x1CB7454u, 0x1CB745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB745Cu;
label_1cb745c:
    // 0x1cb745c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CB745Cu;
    {
        const bool branch_taken_0x1cb745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB745Cu;
        // 0x1cb7460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb745c) {
            ctx->pc = 0x1CB7434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb7434;
        }
    }
    ctx->pc = 0x1CB7464u;
    // 0x1cb7464: 0x0  nop
    ctx->pc = 0x1cb7464u;
    // NOP
    // 0x1cb7468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb7468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb746c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb7470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb7470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb7474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb7474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb7478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb7478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb747c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb747cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7480: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cb7480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb7484: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB7484u;
    SET_GPR_U32(ctx, 31, 0x1CB748Cu);
    ctx->pc = 0x1CB7488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7484u;
    // 0x1cb7488: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB7484u, 0x1CB748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB748Cu;
label_1cb748c:
    // 0x1cb748c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cb748cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cb7490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb7494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb7498: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb7498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb749c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cb749cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cb74a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb74a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb74a4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1cb74a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1cb74a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cb74a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb74ac: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cb74acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cb74b0: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB74B0u;
    SET_GPR_U32(ctx, 31, 0x1CB74B8u);
    ctx->pc = 0x1CB74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB74B0u;
    // 0x1cb74b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB74B0u, 0x1CB74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB74B8u;
label_1cb74b8:
    // 0x1cb74b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb74b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb74bc: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB74BCu;
    SET_GPR_U32(ctx, 31, 0x1CB74C4u);
    ctx->pc = 0x1CB74C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB74BCu;
    // 0x1cb74c0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB74BCu, 0x1CB74C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB74C4u;
label_1cb74c4:
    // 0x1cb74c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cb74c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb74c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb74c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb74cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb74ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb74d0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cb74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cb74d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb74d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb74d8: 0x872d9e6  j           func_1CB6798
    ctx->pc = 0x1CB74D8u;
    ctx->pc = 0x1CB74DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB74D8u;
    // 0x1cb74dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6798u;
    sub_01CB6798_0x1cb6798(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB74E0u;
    // 0x1cb74e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB74E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB74E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB74E8u;
}
