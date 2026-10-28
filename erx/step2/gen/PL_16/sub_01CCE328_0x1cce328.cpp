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

// Function: sub_01CCE328
// Address: 0x1cce328 - 0x1cce3f0
void sub_01CCE328_0x1cce328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCE328_0x1cce328");
#endif

    switch (ctx->pc) {
        case 0x1cce344u: goto label_1cce344;
        case 0x1cce354u: goto label_1cce354;
        case 0x1cce360u: goto label_1cce360;
        case 0x1cce370u: goto label_1cce370;
        case 0x1cce388u: goto label_1cce388;
        case 0x1cce3b4u: goto label_1cce3b4;
        default: break;
    }

    ctx->pc = 0x1cce328u;

    // 0x1cce328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cce328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cce32c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cce32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cce330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce334: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cce334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cce338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cce338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce33c: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE33Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE344u);
    ctx->pc = 0x1CCE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE33Cu;
    // 0x1cce340: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE33Cu, 0x1CCE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE344u;
label_1cce344:
    // 0x1cce344: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cce344u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cce348: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cce348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cce34c: 0xc7337c2  jal         func_1CCDF08
    ctx->pc = 0x1CCE34Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE354u);
    ctx->pc = 0x1CCE350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE34Cu;
    // 0x1cce350: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF08u, 0x1CCE34Cu, 0x1CCE354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE354u;
label_1cce354:
    // 0x1cce354: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cce354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cce358: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE358u;
    SET_GPR_U32(ctx, 31, 0x1CCE360u);
    ctx->pc = 0x1CCE35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE358u;
    // 0x1cce35c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE358u, 0x1CCE360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE360u;
label_1cce360:
    // 0x1cce360: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cce360u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cce364: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cce364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cce368: 0xc7337c2  jal         func_1CCDF08
    ctx->pc = 0x1CCE368u;
    SET_GPR_U32(ctx, 31, 0x1CCE370u);
    ctx->pc = 0x1CCE36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE368u;
    // 0x1cce36c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF08u, 0x1CCE368u, 0x1CCE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE370u;
label_1cce370:
    // 0x1cce370: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1cce370u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cce374: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CCE374u;
    {
        const bool branch_taken_0x1cce374 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cce374) {
            ctx->pc = 0x1CCE378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCE374u;
            // 0x1cce378: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE3DCu;
            goto label_1cce3dc;
        }
    }
    ctx->pc = 0x1CCE37Cu;
    // 0x1cce37c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cce37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cce380: 0xc733528  jal         func_1CCD4A0
    ctx->pc = 0x1CCE380u;
    SET_GPR_U32(ctx, 31, 0x1CCE388u);
    ctx->pc = 0x1CCE384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE380u;
    // 0x1cce384: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD4A0u, 0x1CCE380u, 0x1CCE388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE388u;
label_1cce388:
    // 0x1cce388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cce388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce38c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cce38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce390: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cce390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cce394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cce394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce398: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cce398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce39c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cce39cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cce3a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cce3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cce3a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CCE3A4u;
    {
        const bool branch_taken_0x1cce3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE3A4u;
        // 0x1cce3a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce3a4) {
            ctx->pc = 0x1CCE3D8u;
            goto label_1cce3d8;
        }
    }
    ctx->pc = 0x1CCE3ACu;
    // 0x1cce3ac: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCE3ACu;
    SET_GPR_U32(ctx, 31, 0x1CCE3B4u);
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCE3ACu, 0x1CCE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE3B4u;
label_1cce3b4:
    // 0x1cce3b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cce3b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce3b8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1cce3b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cce3bc: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1cce3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1cce3c0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1cce3c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1cce3c4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cce3c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cce3c8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCE3C8u;
    {
        const bool branch_taken_0x1cce3c8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CCE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE3C8u;
        // 0x1cce3cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce3c8) {
            ctx->pc = 0x1CCE3DCu;
            goto label_1cce3dc;
        }
    }
    ctx->pc = 0x1CCE3D0u;
    // 0x1cce3d0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1cce3d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cce3d4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1cce3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1cce3d8:
    // 0x1cce3d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cce3dc:
    // 0x1cce3dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cce3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce3e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cce3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE3E4u;
        // 0x1cce3e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE3ECu;
    // 0x1cce3ec: 0x0  nop
    ctx->pc = 0x1cce3ecu;
    // NOP
    ctx->pc = 0x1cce3f0u;
}
