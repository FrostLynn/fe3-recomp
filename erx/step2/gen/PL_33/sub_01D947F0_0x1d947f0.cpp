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

// Function: sub_01D947F0
// Address: 0x1d947f0 - 0x1d948d8
void sub_01D947F0_0x1d947f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D947F0_0x1d947f0");
#endif

    switch (ctx->pc) {
        case 0x1d94804u: goto label_1d94804;
        case 0x1d94818u: goto label_1d94818;
        case 0x1d9481cu: goto label_1d9481c;
        case 0x1d94838u: goto label_1d94838;
        case 0x1d94844u: goto label_1d94844;
        case 0x1d94884u: goto label_1d94884;
        case 0x1d948b0u: goto label_1d948b0;
        case 0x1d948bcu: goto label_1d948bc;
        case 0x1d948c8u: goto label_1d948c8;
        default: break;
    }

    ctx->pc = 0x1d947f0u;

    // 0x1d947f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d947f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d947f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d947f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d947f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d947f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d947fc: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D947FCu;
    SET_GPR_U32(ctx, 31, 0x1D94804u);
    ctx->pc = 0x1D94800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D947FCu;
    // 0x1d94800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D947FCu, 0x1D94804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94804u;
label_1d94804:
    // 0x1d94804: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d94804u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94808: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D94808u;
    {
        const bool branch_taken_0x1d94808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94808u;
        // 0x1d9480c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94808) {
            ctx->pc = 0x1D9482Cu;
            goto label_1d9482c;
        }
    }
    ctx->pc = 0x1D94810u;
    // 0x1d94810: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D94810u;
    SET_GPR_U32(ctx, 31, 0x1D94818u);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D94810u, 0x1D94818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94818u;
label_1d94818:
    // 0x1d94818: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d94818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9481c:
    // 0x1d9481c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9481cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94820: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94824: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94824u;
        // 0x1d94828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9482Cu;
label_1d9482c:
    // 0x1d9482c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9482cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d94830: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94830u;
    SET_GPR_U32(ctx, 31, 0x1D94838u);
    ctx->pc = 0x1D94834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94830u;
    // 0x1d94834: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94830u, 0x1D94838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94838u;
label_1d94838:
    // 0x1d94838: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d94838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d9483c: 0xc764a24  jal         func_1D92890
    ctx->pc = 0x1D9483Cu;
    SET_GPR_U32(ctx, 31, 0x1D94844u);
    ctx->pc = 0x1D94840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9483Cu;
    // 0x1d94840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92890u, 0x1D9483Cu, 0x1D94844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94844u;
label_1d94844:
    // 0x1d94844: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D94844u;
    {
        const bool branch_taken_0x1d94844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94844u;
        // 0x1d94848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94844) {
            ctx->pc = 0x1D9481Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9481c;
        }
    }
    ctx->pc = 0x1D9484Cu;
    // 0x1d9484c: 0x0  nop
    ctx->pc = 0x1d9484cu;
    // NOP
    // 0x1d94850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d94850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d94854: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x1d94854u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x1d94858: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d94858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d9485c: 0x25eec8a0  addiu       $t6, $t7, -0x3760
    ctx->pc = 0x1d9485cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953120));
    // 0x1d94860: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d94860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d94864: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d94864u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D9C8A4u));
    // 0x1d94868: 0x8dedc8a0  lw          $t5, -0x3760($t7)
    ctx->pc = 0x1d94868u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D9C8A0u));
    // 0x1d9486c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9486cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94870: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d94870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d94874: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d94874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d94878: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d94878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d9487c: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D9487Cu;
    SET_GPR_U32(ctx, 31, 0x1D94884u);
    ctx->pc = 0x1D94880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9487Cu;
    // 0x1d94880: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D9487Cu, 0x1D94884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94884u;
label_1d94884:
    // 0x1d94884: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d94884u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d94888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d94888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9488c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9488cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94890: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d94890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94894: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d94894u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d94898: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d94898u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9489c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d9489cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d948a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d948a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d948a4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d948a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d948a8: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D948A8u;
    SET_GPR_U32(ctx, 31, 0x1D948B0u);
    ctx->pc = 0x1D948ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D948A8u;
    // 0x1d948ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D948A8u, 0x1D948B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D948B0u;
label_1d948b0:
    // 0x1d948b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d948b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d948b4: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D948B4u;
    SET_GPR_U32(ctx, 31, 0x1D948BCu);
    ctx->pc = 0x1D948B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D948B4u;
    // 0x1d948b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D948B4u, 0x1D948BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D948BCu;
label_1d948bc:
    // 0x1d948bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d948bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d948c0: 0xc764a26  jal         func_1D92898
    ctx->pc = 0x1D948C0u;
    SET_GPR_U32(ctx, 31, 0x1D948C8u);
    ctx->pc = 0x1D948C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D948C0u;
    // 0x1d948c4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92898u, 0x1D948C0u, 0x1D948C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D948C8u;
label_1d948c8:
    // 0x1d948c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d948c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d948cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d948ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d948d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D948D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D948D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D948D0u;
        // 0x1d948d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D948D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D948D8u;
}
