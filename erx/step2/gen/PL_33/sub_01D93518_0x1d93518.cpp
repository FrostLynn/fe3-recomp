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

// Function: sub_01D93518
// Address: 0x1d93518 - 0x1d935f8
void sub_01D93518_0x1d93518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93518_0x1d93518");
#endif

    switch (ctx->pc) {
        case 0x1d9352cu: goto label_1d9352c;
        case 0x1d93540u: goto label_1d93540;
        case 0x1d93544u: goto label_1d93544;
        case 0x1d93560u: goto label_1d93560;
        case 0x1d9356cu: goto label_1d9356c;
        case 0x1d9359cu: goto label_1d9359c;
        case 0x1d935c8u: goto label_1d935c8;
        case 0x1d935d4u: goto label_1d935d4;
        default: break;
    }

    ctx->pc = 0x1d93518u;

    // 0x1d93518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d93518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9351c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9351cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d93520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d93520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d93524: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D93524u;
    SET_GPR_U32(ctx, 31, 0x1D9352Cu);
    ctx->pc = 0x1D93528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93524u;
    // 0x1d93528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D93524u, 0x1D9352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9352Cu;
label_1d9352c:
    // 0x1d9352c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9352cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d93530: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D93530u;
    {
        const bool branch_taken_0x1d93530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D93534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93530u;
        // 0x1d93534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93530) {
            ctx->pc = 0x1D93554u;
            goto label_1d93554;
        }
    }
    ctx->pc = 0x1D93538u;
    // 0x1d93538: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D93538u;
    SET_GPR_U32(ctx, 31, 0x1D93540u);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D93538u, 0x1D93540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93540u;
label_1d93540:
    // 0x1d93540: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d93540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d93544:
    // 0x1d93544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d93544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93548: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d93548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9354c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9354Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9354Cu;
        // 0x1d93550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9354Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D93554u;
label_1d93554:
    // 0x1d93554: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d93554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d93558: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D93558u;
    SET_GPR_U32(ctx, 31, 0x1D93560u);
    ctx->pc = 0x1D9355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93558u;
    // 0x1d9355c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D93558u, 0x1D93560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93560u;
label_1d93560:
    // 0x1d93560: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d93560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d93564: 0xc764a24  jal         func_1D92890
    ctx->pc = 0x1D93564u;
    SET_GPR_U32(ctx, 31, 0x1D9356Cu);
    ctx->pc = 0x1D93568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93564u;
    // 0x1d93568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92890u, 0x1D93564u, 0x1D9356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9356Cu;
label_1d9356c:
    // 0x1d9356c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D9356Cu;
    {
        const bool branch_taken_0x1d9356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9356Cu;
        // 0x1d93570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9356c) {
            ctx->pc = 0x1D93544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d93544;
        }
    }
    ctx->pc = 0x1D93574u;
    // 0x1d93574: 0x0  nop
    ctx->pc = 0x1d93574u;
    // NOP
    // 0x1d93578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d93578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9357c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9357cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d93580: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d93580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d93584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d93584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d93588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d93588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9358c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9358cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93590: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d93590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d93594: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D93594u;
    SET_GPR_U32(ctx, 31, 0x1D9359Cu);
    ctx->pc = 0x1D93598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93594u;
    // 0x1d93598: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D93594u, 0x1D9359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9359Cu;
label_1d9359c:
    // 0x1d9359c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d9359cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d935a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d935a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d935a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d935a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d935a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d935a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d935ac: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d935acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d935b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d935b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d935b4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d935b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d935b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d935b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d935bc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d935bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d935c0: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D935C0u;
    SET_GPR_U32(ctx, 31, 0x1D935C8u);
    ctx->pc = 0x1D935C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D935C0u;
    // 0x1d935c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D935C0u, 0x1D935C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D935C8u;
label_1d935c8:
    // 0x1d935c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d935c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d935cc: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D935CCu;
    SET_GPR_U32(ctx, 31, 0x1D935D4u);
    ctx->pc = 0x1D935D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D935CCu;
    // 0x1d935d0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D935CCu, 0x1D935D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D935D4u;
label_1d935d4:
    // 0x1d935d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d935d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d935d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d935d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d935dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d935dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d935e0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d935e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d935e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d935e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d935e8: 0x8764a26  j           func_1D92898
    ctx->pc = 0x1D935E8u;
    ctx->pc = 0x1D935ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D935E8u;
    // 0x1d935ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92898u;
    sub_01D92898_0x1d92898(rdram, ctx, runtime); return;
    ctx->pc = 0x1D935F0u;
    // 0x1d935f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D935F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D935F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D935F8u;
}
