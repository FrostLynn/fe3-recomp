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

// Function: sub_01CA3650
// Address: 0x1ca3650 - 0x1ca3718
void sub_01CA3650_0x1ca3650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3650_0x1ca3650");
#endif

    switch (ctx->pc) {
        case 0x1ca366cu: goto label_1ca366c;
        case 0x1ca367cu: goto label_1ca367c;
        case 0x1ca3688u: goto label_1ca3688;
        case 0x1ca3698u: goto label_1ca3698;
        case 0x1ca36b0u: goto label_1ca36b0;
        case 0x1ca36dcu: goto label_1ca36dc;
        default: break;
    }

    ctx->pc = 0x1ca3650u;

    // 0x1ca3650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca3650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca3654: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca3654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca3658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca3658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca365c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ca365cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ca3660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca3660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3664: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA3664u;
    SET_GPR_U32(ctx, 31, 0x1CA366Cu);
    ctx->pc = 0x1CA3668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3664u;
    // 0x1ca3668: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA3664u, 0x1CA366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA366Cu;
label_1ca366c:
    // 0x1ca366c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1ca366cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1ca3670: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1ca3670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1ca3674: 0xc728c8c  jal         func_1CA3230
    ctx->pc = 0x1CA3674u;
    SET_GPR_U32(ctx, 31, 0x1CA367Cu);
    ctx->pc = 0x1CA3678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3674u;
    // 0x1ca3678: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA3230u, 0x1CA3674u, 0x1CA367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA367Cu;
label_1ca367c:
    // 0x1ca367c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ca367cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca3680: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA3680u;
    SET_GPR_U32(ctx, 31, 0x1CA3688u);
    ctx->pc = 0x1CA3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3680u;
    // 0x1ca3684: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA3680u, 0x1CA3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3688u;
label_1ca3688:
    // 0x1ca3688: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1ca3688u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1ca368c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1ca368cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1ca3690: 0xc728c8c  jal         func_1CA3230
    ctx->pc = 0x1CA3690u;
    SET_GPR_U32(ctx, 31, 0x1CA3698u);
    ctx->pc = 0x1CA3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3690u;
    // 0x1ca3694: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA3230u, 0x1CA3690u, 0x1CA3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3698u;
label_1ca3698:
    // 0x1ca3698: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1ca3698u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ca369c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CA369Cu;
    {
        const bool branch_taken_0x1ca369c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca369c) {
            ctx->pc = 0x1CA36A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA369Cu;
            // 0x1ca36a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA3704u;
            goto label_1ca3704;
        }
    }
    ctx->pc = 0x1CA36A4u;
    // 0x1ca36a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ca36a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca36a8: 0xc7289e8  jal         func_1CA27A0
    ctx->pc = 0x1CA36A8u;
    SET_GPR_U32(ctx, 31, 0x1CA36B0u);
    ctx->pc = 0x1CA36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA36A8u;
    // 0x1ca36ac: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA27A0u, 0x1CA36A8u, 0x1CA36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA36B0u;
label_1ca36b0:
    // 0x1ca36b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca36b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca36b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca36b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca36b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca36b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca36bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca36bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca36c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca36c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca36c4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ca36c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca36c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ca36c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ca36cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CA36CCu;
    {
        const bool branch_taken_0x1ca36cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA36CCu;
        // 0x1ca36d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca36cc) {
            ctx->pc = 0x1CA3700u;
            goto label_1ca3700;
        }
    }
    ctx->pc = 0x1CA36D4u;
    // 0x1ca36d4: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA36D4u;
    SET_GPR_U32(ctx, 31, 0x1CA36DCu);
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA36D4u, 0x1CA36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA36DCu;
label_1ca36dc:
    // 0x1ca36dc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca36dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca36e0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1ca36e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca36e4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1ca36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1ca36e8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1ca36e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1ca36ec: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1ca36ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca36f0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA36F0u;
    {
        const bool branch_taken_0x1ca36f0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA36F0u;
        // 0x1ca36f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca36f0) {
            ctx->pc = 0x1CA3704u;
            goto label_1ca3704;
        }
    }
    ctx->pc = 0x1CA36F8u;
    // 0x1ca36f8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1ca36f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca36fc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1ca36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1ca3700:
    // 0x1ca3700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca3700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca3704:
    // 0x1ca3704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca3704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3708: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca3708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca370c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA370Cu;
        // 0x1ca3710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA3714u;
    // 0x1ca3714: 0x0  nop
    ctx->pc = 0x1ca3714u;
    // NOP
    ctx->pc = 0x1ca3718u;
}
