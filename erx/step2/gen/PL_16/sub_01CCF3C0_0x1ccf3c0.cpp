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

// Function: sub_01CCF3C0
// Address: 0x1ccf3c0 - 0x1ccf4a8
void sub_01CCF3C0_0x1ccf3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF3C0_0x1ccf3c0");
#endif

    switch (ctx->pc) {
        case 0x1ccf3d4u: goto label_1ccf3d4;
        case 0x1ccf3e8u: goto label_1ccf3e8;
        case 0x1ccf3ecu: goto label_1ccf3ec;
        case 0x1ccf408u: goto label_1ccf408;
        case 0x1ccf414u: goto label_1ccf414;
        case 0x1ccf454u: goto label_1ccf454;
        case 0x1ccf480u: goto label_1ccf480;
        case 0x1ccf48cu: goto label_1ccf48c;
        case 0x1ccf498u: goto label_1ccf498;
        default: break;
    }

    ctx->pc = 0x1ccf3c0u;

    // 0x1ccf3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf3c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf3c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf3cc: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCF3CCu;
    SET_GPR_U32(ctx, 31, 0x1CCF3D4u);
    ctx->pc = 0x1CCF3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF3CCu;
    // 0x1ccf3d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCF3CCu, 0x1CCF3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF3D4u;
label_1ccf3d4:
    // 0x1ccf3d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccf3d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf3d8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCF3D8u;
    {
        const bool branch_taken_0x1ccf3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CCF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF3D8u;
        // 0x1ccf3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf3d8) {
            ctx->pc = 0x1CCF3FCu;
            goto label_1ccf3fc;
        }
    }
    ctx->pc = 0x1CCF3E0u;
    // 0x1ccf3e0: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCF3E0u;
    SET_GPR_U32(ctx, 31, 0x1CCF3E8u);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCF3E0u, 0x1CCF3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF3E8u;
label_1ccf3e8:
    // 0x1ccf3e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ccf3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ccf3ec:
    // 0x1ccf3ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf3f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF3F4u;
        // 0x1ccf3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF3FCu;
label_1ccf3fc:
    // 0x1ccf3fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccf3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccf400: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF400u;
    SET_GPR_U32(ctx, 31, 0x1CCF408u);
    ctx->pc = 0x1CCF404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF400u;
    // 0x1ccf404: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF400u, 0x1CCF408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF408u;
label_1ccf408:
    // 0x1ccf408: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1ccf408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1ccf40c: 0xc733524  jal         func_1CCD490
    ctx->pc = 0x1CCF40Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF414u);
    ctx->pc = 0x1CCF410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF40Cu;
    // 0x1ccf410: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD490u, 0x1CCF40Cu, 0x1CCF414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF414u;
label_1ccf414:
    // 0x1ccf414: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CCF414u;
    {
        const bool branch_taken_0x1ccf414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF414u;
        // 0x1ccf418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf414) {
            ctx->pc = 0x1CCF3ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf3ec;
        }
    }
    ctx->pc = 0x1CCF41Cu;
    // 0x1ccf41c: 0x0  nop
    ctx->pc = 0x1ccf41cu;
    // NOP
    // 0x1ccf420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccf420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccf424: 0x3c0f01ce  lui         $t7, 0x1CE
    ctx->pc = 0x1ccf424u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)462 << 16));
    // 0x1ccf428: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ccf428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ccf42c: 0x25eea170  addiu       $t6, $t7, -0x5E90
    ctx->pc = 0x1ccf42cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943088));
    // 0x1ccf430: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ccf430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ccf434: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1ccf434u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CDA174u));
    // 0x1ccf438: 0x8deda170  lw          $t5, -0x5E90($t7)
    ctx->pc = 0x1ccf438u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CDA170u));
    // 0x1ccf43c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf440: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1ccf440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1ccf444: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1ccf444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1ccf448: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ccf448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ccf44c: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF44Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF454u);
    ctx->pc = 0x1CCF450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF44Cu;
    // 0x1ccf450: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF44Cu, 0x1CCF454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF454u;
label_1ccf454:
    // 0x1ccf454: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1ccf454u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ccf458: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ccf458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf45c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf45cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf460: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ccf460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf464: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ccf464u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ccf468: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccf468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf46c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1ccf46cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1ccf470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf474: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ccf474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ccf478: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF478u;
    SET_GPR_U32(ctx, 31, 0x1CCF480u);
    ctx->pc = 0x1CCF47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF478u;
    // 0x1ccf47c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF478u, 0x1CCF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF480u;
label_1ccf480:
    // 0x1ccf480: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccf480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccf484: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF484u;
    SET_GPR_U32(ctx, 31, 0x1CCF48Cu);
    ctx->pc = 0x1CCF488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF484u;
    // 0x1ccf488: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF484u, 0x1CCF48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF48Cu;
label_1ccf48c:
    // 0x1ccf48c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ccf48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf490: 0xc733526  jal         func_1CCD498
    ctx->pc = 0x1CCF490u;
    SET_GPR_U32(ctx, 31, 0x1CCF498u);
    ctx->pc = 0x1CCF494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF490u;
    // 0x1ccf494: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD498u, 0x1CCF490u, 0x1CCF498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF498u;
label_1ccf498:
    // 0x1ccf498: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ccf498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf49c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ccf49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ccf4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF4A0u;
        // 0x1ccf4a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF4A8u;
}
