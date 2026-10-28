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

// Function: sub_01DE0788
// Address: 0x1de0788 - 0x1de0880
void sub_01DE0788_0x1de0788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0788_0x1de0788");
#endif

    switch (ctx->pc) {
        case 0x1de07c4u: goto label_1de07c4;
        case 0x1de07d8u: goto label_1de07d8;
        case 0x1de07ecu: goto label_1de07ec;
        case 0x1de0800u: goto label_1de0800;
        case 0x1de0824u: goto label_1de0824;
        case 0x1de0840u: goto label_1de0840;
        default: break;
    }

    ctx->pc = 0x1de0788u;

    // 0x1de0788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de0788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de078c: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1de078cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1de0790: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1de0790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1de0794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de0794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de0798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de079c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de079cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de07a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de07a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de07a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1de07a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1de07a8: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DE07A8u;
    {
        const bool branch_taken_0x1de07a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE07A8u;
        // 0x1de07ac: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de07a8) {
            ctx->pc = 0x1DE0830u;
            goto label_1de0830;
        }
    }
    ctx->pc = 0x1DE07B0u;
    // 0x1de07b0: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de07b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de07b4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de07b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de07b8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de07b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de07bc: 0xc7781c6  jal         func_1DE0718
    ctx->pc = 0x1DE07BCu;
    SET_GPR_U32(ctx, 31, 0x1DE07C4u);
    ctx->pc = 0x1DE07C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE07BCu;
    // 0x1de07c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0718u, 0x1DE07BCu, 0x1DE07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE07C4u;
label_1de07c4:
    // 0x1de07c4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de07c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de07c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1de07c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de07cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de07ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de07d0: 0xc7781c8  jal         func_1DE0720
    ctx->pc = 0x1DE07D0u;
    SET_GPR_U32(ctx, 31, 0x1DE07D8u);
    ctx->pc = 0x1DE07D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE07D0u;
    // 0x1de07d4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0720u, 0x1DE07D0u, 0x1DE07D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE07D8u;
label_1de07d8:
    // 0x1de07d8: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de07d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de07dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1de07dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de07e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de07e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de07e4: 0xc7781ca  jal         func_1DE0728
    ctx->pc = 0x1DE07E4u;
    SET_GPR_U32(ctx, 31, 0x1DE07ECu);
    ctx->pc = 0x1DE07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE07E4u;
    // 0x1de07e8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0728u, 0x1DE07E4u, 0x1DE07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE07ECu;
label_1de07ec:
    // 0x1de07ec: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de07ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de07f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de07f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de07f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de07f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de07f8: 0xc7781cc  jal         func_1DE0730
    ctx->pc = 0x1DE07F8u;
    SET_GPR_U32(ctx, 31, 0x1DE0800u);
    ctx->pc = 0x1DE07FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE07F8u;
    // 0x1de07fc: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0730u, 0x1DE07F8u, 0x1DE0800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0800u;
label_1de0800:
    // 0x1de0800: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de0800u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0804: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1de0804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0808: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1de0808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de080c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de080cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0810: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1de0810u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de0814: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1de0814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0818: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1de0818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de081c: 0xc7781ce  jal         func_1DE0738
    ctx->pc = 0x1DE081Cu;
    SET_GPR_U32(ctx, 31, 0x1DE0824u);
    ctx->pc = 0x1DE0820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE081Cu;
    // 0x1de0820: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0738u, 0x1DE081Cu, 0x1DE0824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0824u;
label_1de0824:
    // 0x1de0824: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1de0824u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1de0828: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1de0828u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1de082c: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1de082cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
label_1de0830:
    // 0x1de0830: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de0830u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0834: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1de0834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de0838: 0xc7781d0  jal         func_1DE0740
    ctx->pc = 0x1DE0838u;
    SET_GPR_U32(ctx, 31, 0x1DE0840u);
    ctx->pc = 0x1DE083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0838u;
    // 0x1de083c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0740u, 0x1DE0838u, 0x1DE0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0840u;
label_1de0840:
    // 0x1de0840: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de0840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1de0844: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1de0844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1de0848: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE0848u;
    {
        const bool branch_taken_0x1de0848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0848u;
        // 0x1de084c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0848) {
            ctx->pc = 0x1DE0858u;
            goto label_1de0858;
        }
    }
    ctx->pc = 0x1DE0850u;
    // 0x1de0850: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1de0850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1de0854: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1de0854u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de0858:
    // 0x1de0858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de0858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de085c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1de085cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0860: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de0860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de0864: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de0864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de0868: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de0868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de086c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1de086cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de0870: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1de0870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de0874: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0874u;
        // 0x1de0878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE087Cu;
    // 0x1de087c: 0x0  nop
    ctx->pc = 0x1de087cu;
    // NOP
    ctx->pc = 0x1de0880u;
}
