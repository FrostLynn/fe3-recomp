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

// Function: sub_01D89830
// Address: 0x1d89830 - 0x1d898f8
void sub_01D89830_0x1d89830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89830_0x1d89830");
#endif

    switch (ctx->pc) {
        case 0x1d8984cu: goto label_1d8984c;
        case 0x1d8985cu: goto label_1d8985c;
        case 0x1d89868u: goto label_1d89868;
        case 0x1d89878u: goto label_1d89878;
        case 0x1d89890u: goto label_1d89890;
        case 0x1d898bcu: goto label_1d898bc;
        default: break;
    }

    ctx->pc = 0x1d89830u;

    // 0x1d89830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d89830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d89834: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d89834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d89838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d89838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8983c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d8983cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d89840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d89840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89844: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D89844u;
    SET_GPR_U32(ctx, 31, 0x1D8984Cu);
    ctx->pc = 0x1D89848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89844u;
    // 0x1d89848: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D89844u, 0x1D8984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8984Cu;
label_1d8984c:
    // 0x1d8984c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d8984cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d89850: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d89850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d89854: 0xc762504  jal         func_1D89410
    ctx->pc = 0x1D89854u;
    SET_GPR_U32(ctx, 31, 0x1D8985Cu);
    ctx->pc = 0x1D89858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89854u;
    // 0x1d89858: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89410u, 0x1D89854u, 0x1D8985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8985Cu;
label_1d8985c:
    // 0x1d8985c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d8985cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d89860: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D89860u;
    SET_GPR_U32(ctx, 31, 0x1D89868u);
    ctx->pc = 0x1D89864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89860u;
    // 0x1d89864: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D89860u, 0x1D89868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89868u;
label_1d89868:
    // 0x1d89868: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d89868u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d8986c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d8986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d89870: 0xc762504  jal         func_1D89410
    ctx->pc = 0x1D89870u;
    SET_GPR_U32(ctx, 31, 0x1D89878u);
    ctx->pc = 0x1D89874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89870u;
    // 0x1d89874: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89410u, 0x1D89870u, 0x1D89878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89878u;
label_1d89878:
    // 0x1d89878: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d89878u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d8987c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D8987Cu;
    {
        const bool branch_taken_0x1d8987c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8987c) {
            ctx->pc = 0x1D89880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8987Cu;
            // 0x1d89880: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D898E4u;
            goto label_1d898e4;
        }
    }
    ctx->pc = 0x1D89884u;
    // 0x1d89884: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d89884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d89888: 0xc762268  jal         func_1D889A0
    ctx->pc = 0x1D89888u;
    SET_GPR_U32(ctx, 31, 0x1D89890u);
    ctx->pc = 0x1D8988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89888u;
    // 0x1d8988c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D889A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D889A0u, 0x1D89888u, 0x1D89890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89890u;
label_1d89890:
    // 0x1d89890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d89890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d89894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89898: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d89898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8989c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8989cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d898a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d898a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d898a4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d898a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d898a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d898a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d898ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D898ACu;
    {
        const bool branch_taken_0x1d898ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D898B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D898ACu;
        // 0x1d898b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d898ac) {
            ctx->pc = 0x1D898E0u;
            goto label_1d898e0;
        }
    }
    ctx->pc = 0x1D898B4u;
    // 0x1d898b4: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D898B4u;
    SET_GPR_U32(ctx, 31, 0x1D898BCu);
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D898B4u, 0x1D898BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D898BCu;
label_1d898bc:
    // 0x1d898bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d898bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d898c0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d898c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d898c4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d898c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d898c8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d898c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d898cc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d898ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d898d0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D898D0u;
    {
        const bool branch_taken_0x1d898d0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D898D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D898D0u;
        // 0x1d898d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d898d0) {
            ctx->pc = 0x1D898E4u;
            goto label_1d898e4;
        }
    }
    ctx->pc = 0x1D898D8u;
    // 0x1d898d8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d898d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d898dc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d898dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d898e0:
    // 0x1d898e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d898e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d898e4:
    // 0x1d898e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d898e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d898e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d898e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d898ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D898ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D898F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D898ECu;
        // 0x1d898f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D898ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D898F4u;
    // 0x1d898f4: 0x0  nop
    ctx->pc = 0x1d898f4u;
    // NOP
    ctx->pc = 0x1d898f8u;
}
