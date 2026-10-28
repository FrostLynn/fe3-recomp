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

// Function: sub_01DE3788
// Address: 0x1de3788 - 0x1de3880
void sub_01DE3788_0x1de3788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3788_0x1de3788");
#endif

    switch (ctx->pc) {
        case 0x1de37c4u: goto label_1de37c4;
        case 0x1de37d8u: goto label_1de37d8;
        case 0x1de37ecu: goto label_1de37ec;
        case 0x1de3800u: goto label_1de3800;
        case 0x1de3824u: goto label_1de3824;
        case 0x1de3840u: goto label_1de3840;
        default: break;
    }

    ctx->pc = 0x1de3788u;

    // 0x1de3788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de3788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de378c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de378cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de3790: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1de3790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1de3794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de3794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de3798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de379c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de37a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de37a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de37a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1de37a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1de37a8: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DE37A8u;
    {
        const bool branch_taken_0x1de37a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE37A8u;
        // 0x1de37ac: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de37a8) {
            ctx->pc = 0x1DE3830u;
            goto label_1de3830;
        }
    }
    ctx->pc = 0x1DE37B0u;
    // 0x1de37b0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de37b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de37b4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de37b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de37b8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de37b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de37bc: 0xc778dc8  jal         func_1DE3720
    ctx->pc = 0x1DE37BCu;
    SET_GPR_U32(ctx, 31, 0x1DE37C4u);
    ctx->pc = 0x1DE37C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE37BCu;
    // 0x1de37c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3720u, 0x1DE37BCu, 0x1DE37C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE37C4u;
label_1de37c4:
    // 0x1de37c4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de37c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de37c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1de37c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de37cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de37ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de37d0: 0xc778dca  jal         func_1DE3728
    ctx->pc = 0x1DE37D0u;
    SET_GPR_U32(ctx, 31, 0x1DE37D8u);
    ctx->pc = 0x1DE37D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE37D0u;
    // 0x1de37d4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3728u, 0x1DE37D0u, 0x1DE37D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE37D8u;
label_1de37d8:
    // 0x1de37d8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de37d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de37dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1de37dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de37e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de37e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de37e4: 0xc778dcc  jal         func_1DE3730
    ctx->pc = 0x1DE37E4u;
    SET_GPR_U32(ctx, 31, 0x1DE37ECu);
    ctx->pc = 0x1DE37E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE37E4u;
    // 0x1de37e8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3730u, 0x1DE37E4u, 0x1DE37ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE37ECu;
label_1de37ec:
    // 0x1de37ec: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de37ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de37f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de37f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de37f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de37f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de37f8: 0xc778dce  jal         func_1DE3738
    ctx->pc = 0x1DE37F8u;
    SET_GPR_U32(ctx, 31, 0x1DE3800u);
    ctx->pc = 0x1DE37FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE37F8u;
    // 0x1de37fc: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3738u, 0x1DE37F8u, 0x1DE3800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3800u;
label_1de3800:
    // 0x1de3800: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3800u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3804: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1de3804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3808: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1de3808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de380c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de380cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3810: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1de3810u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de3814: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1de3814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3818: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1de3818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de381c: 0xc778dd0  jal         func_1DE3740
    ctx->pc = 0x1DE381Cu;
    SET_GPR_U32(ctx, 31, 0x1DE3824u);
    ctx->pc = 0x1DE3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE381Cu;
    // 0x1de3820: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3740u, 0x1DE381Cu, 0x1DE3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3824u;
label_1de3824:
    // 0x1de3824: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de3824u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de3828: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1de3828u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1de382c: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de382cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1de3830:
    // 0x1de3830: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3830u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3834: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1de3834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de3838: 0xc778dd2  jal         func_1DE3748
    ctx->pc = 0x1DE3838u;
    SET_GPR_U32(ctx, 31, 0x1DE3840u);
    ctx->pc = 0x1DE383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3838u;
    // 0x1de383c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3748u, 0x1DE3838u, 0x1DE3840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3840u;
label_1de3840:
    // 0x1de3840: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de3840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1de3844: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1de3844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1de3848: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE3848u;
    {
        const bool branch_taken_0x1de3848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3848u;
        // 0x1de384c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3848) {
            ctx->pc = 0x1DE3858u;
            goto label_1de3858;
        }
    }
    ctx->pc = 0x1DE3850u;
    // 0x1de3850: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de3850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de3854: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1de3854u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de3858:
    // 0x1de3858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de3858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de385c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1de385cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3860: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de3860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de3864: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de3864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de3868: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de3868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de386c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1de386cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de3870: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1de3870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de3874: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3874u;
        // 0x1de3878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE387Cu;
    // 0x1de387c: 0x0  nop
    ctx->pc = 0x1de387cu;
    // NOP
    ctx->pc = 0x1de3880u;
}
