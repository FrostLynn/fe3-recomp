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

// Function: sub_01C99810
// Address: 0x1c99810 - 0x1c998f0
void sub_01C99810_0x1c99810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99810_0x1c99810");
#endif

    switch (ctx->pc) {
        case 0x1c99824u: goto label_1c99824;
        case 0x1c99838u: goto label_1c99838;
        case 0x1c9983cu: goto label_1c9983c;
        case 0x1c99858u: goto label_1c99858;
        case 0x1c99864u: goto label_1c99864;
        case 0x1c99894u: goto label_1c99894;
        case 0x1c998c0u: goto label_1c998c0;
        case 0x1c998ccu: goto label_1c998cc;
        default: break;
    }

    ctx->pc = 0x1c99810u;

    // 0x1c99810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c99810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c99814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c99814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c99818: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c99818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9981c: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9981Cu;
    SET_GPR_U32(ctx, 31, 0x1C99824u);
    ctx->pc = 0x1C99820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9981Cu;
    // 0x1c99820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9981Cu, 0x1C99824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99824u;
label_1c99824:
    // 0x1c99824: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c99824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c99828: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C99828u;
    {
        const bool branch_taken_0x1c99828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99828u;
        // 0x1c9982c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99828) {
            ctx->pc = 0x1C9984Cu;
            goto label_1c9984c;
        }
    }
    ctx->pc = 0x1C99830u;
    // 0x1c99830: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C99830u;
    SET_GPR_U32(ctx, 31, 0x1C99838u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C99830u, 0x1C99838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99838u;
label_1c99838:
    // 0x1c99838: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c99838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9983c:
    // 0x1c9983c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9983cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c99840: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c99840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c99844: 0x3e00008  jr          $ra
    ctx->pc = 0x1C99844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C99848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99844u;
        // 0x1c99848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C99844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9984Cu;
label_1c9984c:
    // 0x1c9984c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9984cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c99850: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C99850u;
    SET_GPR_U32(ctx, 31, 0x1C99858u);
    ctx->pc = 0x1C99854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99850u;
    // 0x1c99854: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C99850u, 0x1C99858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99858u;
label_1c99858:
    // 0x1c99858: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c99858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c9985c: 0xc7262e4  jal         func_1C98B90
    ctx->pc = 0x1C9985Cu;
    SET_GPR_U32(ctx, 31, 0x1C99864u);
    ctx->pc = 0x1C99860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9985Cu;
    // 0x1c99860: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B90u, 0x1C9985Cu, 0x1C99864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99864u;
label_1c99864:
    // 0x1c99864: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C99864u;
    {
        const bool branch_taken_0x1c99864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99864u;
        // 0x1c99868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99864) {
            ctx->pc = 0x1C9983Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9983c;
        }
    }
    ctx->pc = 0x1C9986Cu;
    // 0x1c9986c: 0x0  nop
    ctx->pc = 0x1c9986cu;
    // NOP
    // 0x1c99870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c99870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c99874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c99874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c99878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c99878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9987c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9987cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c99880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c99880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99884: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c99884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99888: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c99888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c9988c: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9988Cu;
    SET_GPR_U32(ctx, 31, 0x1C99894u);
    ctx->pc = 0x1C99890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9988Cu;
    // 0x1c99890: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9988Cu, 0x1C99894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99894u;
label_1c99894:
    // 0x1c99894: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c99894u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c99898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c99898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9989c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9989cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c998a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c998a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c998a4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c998a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c998a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c998a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c998ac: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c998acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c998b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c998b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c998b4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c998b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c998b8: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C998B8u;
    SET_GPR_U32(ctx, 31, 0x1C998C0u);
    ctx->pc = 0x1C998BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C998B8u;
    // 0x1c998bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C998B8u, 0x1C998C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C998C0u;
label_1c998c0:
    // 0x1c998c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c998c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c998c4: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C998C4u;
    SET_GPR_U32(ctx, 31, 0x1C998CCu);
    ctx->pc = 0x1C998C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C998C4u;
    // 0x1c998c8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C998C4u, 0x1C998CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C998CCu;
label_1c998cc:
    // 0x1c998cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c998ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c998d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c998d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c998d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c998d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c998d8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c998d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c998dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c998dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c998e0: 0x87262e6  j           func_1C98B98
    ctx->pc = 0x1C998E0u;
    ctx->pc = 0x1C998E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C998E0u;
    // 0x1c998e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B98u;
    sub_01C98B98_0x1c98b98(rdram, ctx, runtime); return;
    ctx->pc = 0x1C998E8u;
    // 0x1c998e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C998E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C998E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C998F0u;
}
