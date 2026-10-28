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

// Function: sub_01CA3420
// Address: 0x1ca3420 - 0x1ca3500
void sub_01CA3420_0x1ca3420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3420_0x1ca3420");
#endif

    switch (ctx->pc) {
        case 0x1ca3434u: goto label_1ca3434;
        case 0x1ca3448u: goto label_1ca3448;
        case 0x1ca344cu: goto label_1ca344c;
        case 0x1ca3468u: goto label_1ca3468;
        case 0x1ca3474u: goto label_1ca3474;
        case 0x1ca34a4u: goto label_1ca34a4;
        case 0x1ca34d0u: goto label_1ca34d0;
        case 0x1ca34dcu: goto label_1ca34dc;
        default: break;
    }

    ctx->pc = 0x1ca3420u;

    // 0x1ca3420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca3420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca3424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca3424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca3428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca3428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca342c: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA342Cu;
    SET_GPR_U32(ctx, 31, 0x1CA3434u);
    ctx->pc = 0x1CA3430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA342Cu;
    // 0x1ca3430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA342Cu, 0x1CA3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3434u;
label_1ca3434:
    // 0x1ca3434: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca3434u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca3438: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA3438u;
    {
        const bool branch_taken_0x1ca3438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3438u;
        // 0x1ca343c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3438) {
            ctx->pc = 0x1CA345Cu;
            goto label_1ca345c;
        }
    }
    ctx->pc = 0x1CA3440u;
    // 0x1ca3440: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA3440u;
    SET_GPR_U32(ctx, 31, 0x1CA3448u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA3440u, 0x1CA3448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3448u;
label_1ca3448:
    // 0x1ca3448: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ca3448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ca344c:
    // 0x1ca344c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca344cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca3450: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca3450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca3454: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA3454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3454u;
        // 0x1ca3458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA3454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA345Cu;
label_1ca345c:
    // 0x1ca345c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca345cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca3460: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA3460u;
    SET_GPR_U32(ctx, 31, 0x1CA3468u);
    ctx->pc = 0x1CA3464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3460u;
    // 0x1ca3464: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA3460u, 0x1CA3468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3468u;
label_1ca3468:
    // 0x1ca3468: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1ca3468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1ca346c: 0xc7289e4  jal         func_1CA2790
    ctx->pc = 0x1CA346Cu;
    SET_GPR_U32(ctx, 31, 0x1CA3474u);
    ctx->pc = 0x1CA3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA346Cu;
    // 0x1ca3470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2790u, 0x1CA346Cu, 0x1CA3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3474u;
label_1ca3474:
    // 0x1ca3474: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CA3474u;
    {
        const bool branch_taken_0x1ca3474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3474u;
        // 0x1ca3478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3474) {
            ctx->pc = 0x1CA344Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca344c;
        }
    }
    ctx->pc = 0x1CA347Cu;
    // 0x1ca347c: 0x0  nop
    ctx->pc = 0x1ca347cu;
    // NOP
    // 0x1ca3480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca3480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca3484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca3484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca3488: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca3488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca348c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca3490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca3490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3494: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ca3494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3498: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ca3498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca349c: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA349Cu;
    SET_GPR_U32(ctx, 31, 0x1CA34A4u);
    ctx->pc = 0x1CA34A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA349Cu;
    // 0x1ca34a0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA349Cu, 0x1CA34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA34A4u;
label_1ca34a4:
    // 0x1ca34a4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1ca34a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ca34a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca34a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca34ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca34acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca34b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca34b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca34b4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ca34b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ca34b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca34b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca34bc: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1ca34bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1ca34c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca34c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca34c4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ca34c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ca34c8: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA34C8u;
    SET_GPR_U32(ctx, 31, 0x1CA34D0u);
    ctx->pc = 0x1CA34CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA34C8u;
    // 0x1ca34cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA34C8u, 0x1CA34D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA34D0u;
label_1ca34d0:
    // 0x1ca34d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca34d4: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA34D4u;
    SET_GPR_U32(ctx, 31, 0x1CA34DCu);
    ctx->pc = 0x1CA34D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA34D4u;
    // 0x1ca34d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA34D4u, 0x1CA34DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA34DCu;
label_1ca34dc:
    // 0x1ca34dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca34dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca34e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca34e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca34e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca34e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca34e8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1ca34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1ca34ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca34ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca34f0: 0x87289e6  j           func_1CA2798
    ctx->pc = 0x1CA34F0u;
    ctx->pc = 0x1CA34F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA34F0u;
    // 0x1ca34f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2798u;
    sub_01CA2798_0x1ca2798(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA34F8u;
    // 0x1ca34f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA34F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA34F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA3500u;
}
