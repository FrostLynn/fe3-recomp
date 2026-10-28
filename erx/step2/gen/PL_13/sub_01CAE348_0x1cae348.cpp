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

// Function: sub_01CAE348
// Address: 0x1cae348 - 0x1cae430
void sub_01CAE348_0x1cae348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE348_0x1cae348");
#endif

    switch (ctx->pc) {
        case 0x1cae35cu: goto label_1cae35c;
        case 0x1cae370u: goto label_1cae370;
        case 0x1cae374u: goto label_1cae374;
        case 0x1cae390u: goto label_1cae390;
        case 0x1cae39cu: goto label_1cae39c;
        case 0x1cae3dcu: goto label_1cae3dc;
        case 0x1cae408u: goto label_1cae408;
        case 0x1cae414u: goto label_1cae414;
        case 0x1cae420u: goto label_1cae420;
        default: break;
    }

    ctx->pc = 0x1cae348u;

    // 0x1cae348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae350: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cae350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cae354: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CAE354u;
    SET_GPR_U32(ctx, 31, 0x1CAE35Cu);
    ctx->pc = 0x1CAE358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE354u;
    // 0x1cae358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CAE354u, 0x1CAE35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE35Cu;
label_1cae35c:
    // 0x1cae35c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cae35cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae360: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAE360u;
    {
        const bool branch_taken_0x1cae360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CAE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE360u;
        // 0x1cae364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae360) {
            ctx->pc = 0x1CAE384u;
            goto label_1cae384;
        }
    }
    ctx->pc = 0x1CAE368u;
    // 0x1cae368: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CAE368u;
    SET_GPR_U32(ctx, 31, 0x1CAE370u);
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CAE368u, 0x1CAE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE370u;
label_1cae370:
    // 0x1cae370: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cae370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cae374:
    // 0x1cae374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cae378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae37c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE37Cu;
        // 0x1cae380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE384u;
label_1cae384:
    // 0x1cae384: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cae384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cae388: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE388u;
    SET_GPR_U32(ctx, 31, 0x1CAE390u);
    ctx->pc = 0x1CAE38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE388u;
    // 0x1cae38c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE388u, 0x1CAE390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE390u;
label_1cae390:
    // 0x1cae390: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cae390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cae394: 0xc72b45a  jal         func_1CAD168
    ctx->pc = 0x1CAE394u;
    SET_GPR_U32(ctx, 31, 0x1CAE39Cu);
    ctx->pc = 0x1CAE398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE394u;
    // 0x1cae398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD168u, 0x1CAE394u, 0x1CAE39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE39Cu;
label_1cae39c:
    // 0x1cae39c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CAE39Cu;
    {
        const bool branch_taken_0x1cae39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE39Cu;
        // 0x1cae3a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae39c) {
            ctx->pc = 0x1CAE374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae374;
        }
    }
    ctx->pc = 0x1CAE3A4u;
    // 0x1cae3a4: 0x0  nop
    ctx->pc = 0x1cae3a4u;
    // NOP
    // 0x1cae3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cae3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cae3ac: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1cae3acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1cae3b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cae3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cae3b4: 0x25ee6678  addiu       $t6, $t7, 0x6678
    ctx->pc = 0x1cae3b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 26232));
    // 0x1cae3b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cae3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cae3bc: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cae3bcu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CB667Cu));
    // 0x1cae3c0: 0x8ded6678  lw          $t5, 0x6678($t7)
    ctx->pc = 0x1cae3c0u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CB6678u));
    // 0x1cae3c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae3c8: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cae3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cae3cc: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cae3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cae3d0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cae3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cae3d4: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE3D4u;
    SET_GPR_U32(ctx, 31, 0x1CAE3DCu);
    ctx->pc = 0x1CAE3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE3D4u;
    // 0x1cae3d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE3D4u, 0x1CAE3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE3DCu;
label_1cae3dc:
    // 0x1cae3dc: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cae3dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cae3e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cae3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae3e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae3e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae3e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cae3e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae3ec: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cae3ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cae3f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cae3f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae3f4: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cae3f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cae3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae3fc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cae3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cae400: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE400u;
    SET_GPR_U32(ctx, 31, 0x1CAE408u);
    ctx->pc = 0x1CAE404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE400u;
    // 0x1cae404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE400u, 0x1CAE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE408u;
label_1cae408:
    // 0x1cae408: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cae408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cae40c: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE40Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE414u);
    ctx->pc = 0x1CAE410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE40Cu;
    // 0x1cae410: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE40Cu, 0x1CAE414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE414u;
label_1cae414:
    // 0x1cae414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cae414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae418: 0xc72b45c  jal         func_1CAD170
    ctx->pc = 0x1CAE418u;
    SET_GPR_U32(ctx, 31, 0x1CAE420u);
    ctx->pc = 0x1CAE41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE418u;
    // 0x1cae41c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD170u, 0x1CAE418u, 0x1CAE420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE420u;
label_1cae420:
    // 0x1cae420: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cae420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae424: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cae424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cae428: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE428u;
        // 0x1cae42c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE430u;
}
