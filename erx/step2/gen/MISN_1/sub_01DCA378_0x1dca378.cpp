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

// Function: sub_01DCA378
// Address: 0x1dca378 - 0x1dca470
void sub_01DCA378_0x1dca378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCA378_0x1dca378");
#endif

    switch (ctx->pc) {
        case 0x1dca3b4u: goto label_1dca3b4;
        case 0x1dca3c8u: goto label_1dca3c8;
        case 0x1dca3dcu: goto label_1dca3dc;
        case 0x1dca3f0u: goto label_1dca3f0;
        case 0x1dca414u: goto label_1dca414;
        case 0x1dca430u: goto label_1dca430;
        default: break;
    }

    ctx->pc = 0x1dca378u;

    // 0x1dca378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dca378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dca37c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dca37cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dca380: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dca380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dca384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dca384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dca388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dca388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dca38c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dca38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dca390: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dca390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dca394: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dca394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dca398: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DCA398u;
    {
        const bool branch_taken_0x1dca398 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA398u;
        // 0x1dca39c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca398) {
            ctx->pc = 0x1DCA420u;
            goto label_1dca420;
        }
    }
    ctx->pc = 0x1DCA3A0u;
    // 0x1dca3a0: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dca3a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca3a4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dca3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dca3a8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dca3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dca3ac: 0xc7728c8  jal         func_1DCA320
    ctx->pc = 0x1DCA3ACu;
    SET_GPR_U32(ctx, 31, 0x1DCA3B4u);
    ctx->pc = 0x1DCA3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA3ACu;
    // 0x1dca3b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCA320u, 0x1DCA3ACu, 0x1DCA3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA3B4u;
label_1dca3b4:
    // 0x1dca3b4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dca3b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca3b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dca3b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca3bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dca3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca3c0: 0xc7728ca  jal         func_1DCA328
    ctx->pc = 0x1DCA3C0u;
    SET_GPR_U32(ctx, 31, 0x1DCA3C8u);
    ctx->pc = 0x1DCA3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA3C0u;
    // 0x1dca3c4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCA328u, 0x1DCA3C0u, 0x1DCA3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA3C8u;
label_1dca3c8:
    // 0x1dca3c8: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dca3c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca3cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dca3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca3d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dca3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca3d4: 0xc7728cc  jal         func_1DCA330
    ctx->pc = 0x1DCA3D4u;
    SET_GPR_U32(ctx, 31, 0x1DCA3DCu);
    ctx->pc = 0x1DCA3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA3D4u;
    // 0x1dca3d8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCA330u, 0x1DCA3D4u, 0x1DCA3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA3DCu;
label_1dca3dc:
    // 0x1dca3dc: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dca3dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca3e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dca3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca3e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dca3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca3e8: 0xc7728ce  jal         func_1DCA338
    ctx->pc = 0x1DCA3E8u;
    SET_GPR_U32(ctx, 31, 0x1DCA3F0u);
    ctx->pc = 0x1DCA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA3E8u;
    // 0x1dca3ec: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCA338u, 0x1DCA3E8u, 0x1DCA3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA3F0u;
label_1dca3f0:
    // 0x1dca3f0: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dca3f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca3f4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dca3f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca3f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dca3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca3fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dca3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca400: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dca400u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dca404: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dca404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca408: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dca408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca40c: 0xc7728d0  jal         func_1DCA340
    ctx->pc = 0x1DCA40Cu;
    SET_GPR_U32(ctx, 31, 0x1DCA414u);
    ctx->pc = 0x1DCA410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA40Cu;
    // 0x1dca410: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCA340u, 0x1DCA40Cu, 0x1DCA414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA414u;
label_1dca414:
    // 0x1dca414: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dca414u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dca418: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dca418u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dca41c: 0xaf8f8014  sw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dca41cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), GPR_U32(ctx, 15));
label_1dca420:
    // 0x1dca420: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dca420u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca424: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dca424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dca428: 0xc7728d2  jal         func_1DCA348
    ctx->pc = 0x1DCA428u;
    SET_GPR_U32(ctx, 31, 0x1DCA430u);
    ctx->pc = 0x1DCA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA428u;
    // 0x1dca42c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCA348u, 0x1DCA428u, 0x1DCA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA430u;
label_1dca430:
    // 0x1dca430: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dca430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dca434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dca434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dca438: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCA438u;
    {
        const bool branch_taken_0x1dca438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA438u;
        // 0x1dca43c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca438) {
            ctx->pc = 0x1DCA448u;
            goto label_1dca448;
        }
    }
    ctx->pc = 0x1DCA440u;
    // 0x1dca440: 0xaf808014  sw          $zero, -0x7FEC($gp)
    ctx->pc = 0x1dca440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), GPR_U32(ctx, 0));
    // 0x1dca444: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dca444u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dca448:
    // 0x1dca448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dca448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dca44c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dca44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca450: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dca450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dca454: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dca454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dca458: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dca458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dca45c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dca45cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dca460: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dca460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dca464: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA464u;
        // 0x1dca468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCA46Cu;
    // 0x1dca46c: 0x0  nop
    ctx->pc = 0x1dca46cu;
    // NOP
    ctx->pc = 0x1dca470u;
}
