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

// Function: sub_01CF1610
// Address: 0x1cf1610 - 0x1cf16f8
void sub_01CF1610_0x1cf1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1610_0x1cf1610");
#endif

    switch (ctx->pc) {
        case 0x1cf1624u: goto label_1cf1624;
        case 0x1cf1638u: goto label_1cf1638;
        case 0x1cf163cu: goto label_1cf163c;
        case 0x1cf1658u: goto label_1cf1658;
        case 0x1cf1664u: goto label_1cf1664;
        case 0x1cf16a4u: goto label_1cf16a4;
        case 0x1cf16d0u: goto label_1cf16d0;
        case 0x1cf16dcu: goto label_1cf16dc;
        case 0x1cf16e8u: goto label_1cf16e8;
        default: break;
    }

    ctx->pc = 0x1cf1610u;

    // 0x1cf1610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf161c: 0xc73bd54  jal         func_1CEF550
    ctx->pc = 0x1CF161Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1624u);
    ctx->pc = 0x1CF1620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF161Cu;
    // 0x1cf1620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF550u, 0x1CF161Cu, 0x1CF1624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1624u;
label_1cf1624:
    // 0x1cf1624: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf1624u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1628: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF1628u;
    {
        const bool branch_taken_0x1cf1628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CF162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1628u;
        // 0x1cf162c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1628) {
            ctx->pc = 0x1CF164Cu;
            goto label_1cf164c;
        }
    }
    ctx->pc = 0x1CF1630u;
    // 0x1cf1630: 0xc73bd56  jal         func_1CEF558
    ctx->pc = 0x1CF1630u;
    SET_GPR_U32(ctx, 31, 0x1CF1638u);
    ctx->pc = 0x1CEF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF558u, 0x1CF1630u, 0x1CF1638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1638u;
label_1cf1638:
    // 0x1cf1638: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cf1638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cf163c:
    // 0x1cf163c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf163cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1640: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1644: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1644u;
        // 0x1cf1648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF164Cu;
label_1cf164c:
    // 0x1cf164c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf1650: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1650u;
    SET_GPR_U32(ctx, 31, 0x1CF1658u);
    ctx->pc = 0x1CF1654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1650u;
    // 0x1cf1654: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1650u, 0x1CF1658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1658u;
label_1cf1658:
    // 0x1cf1658: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cf1658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cf165c: 0xc73bd66  jal         func_1CEF598
    ctx->pc = 0x1CF165Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1664u);
    ctx->pc = 0x1CF1660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF165Cu;
    // 0x1cf1660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF598u, 0x1CF165Cu, 0x1CF1664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1664u;
label_1cf1664:
    // 0x1cf1664: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CF1664u;
    {
        const bool branch_taken_0x1cf1664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1664u;
        // 0x1cf1668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1664) {
            ctx->pc = 0x1CF163Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf163c;
        }
    }
    ctx->pc = 0x1CF166Cu;
    // 0x1cf166c: 0x0  nop
    ctx->pc = 0x1cf166cu;
    // NOP
    // 0x1cf1670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf1670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf1674: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1cf1674u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1cf1678: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cf1678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cf167c: 0x25eed0f0  addiu       $t6, $t7, -0x2F10
    ctx->pc = 0x1cf167cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955248));
    // 0x1cf1680: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cf1680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cf1684: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cf1684u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CFD0F4u));
    // 0x1cf1688: 0x8dedd0f0  lw          $t5, -0x2F10($t7)
    ctx->pc = 0x1cf1688u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CFD0F0u));
    // 0x1cf168c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf168cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1690: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cf1690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cf1694: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cf1694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cf1698: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cf1698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cf169c: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF169Cu;
    SET_GPR_U32(ctx, 31, 0x1CF16A4u);
    ctx->pc = 0x1CF16A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF169Cu;
    // 0x1cf16a0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF169Cu, 0x1CF16A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF16A4u;
label_1cf16a4:
    // 0x1cf16a4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cf16a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cf16a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf16a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf16ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf16acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf16b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf16b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf16b4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cf16b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cf16b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cf16b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf16bc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cf16bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cf16c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf16c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf16c4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cf16c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cf16c8: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF16C8u;
    SET_GPR_U32(ctx, 31, 0x1CF16D0u);
    ctx->pc = 0x1CF16CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF16C8u;
    // 0x1cf16cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF16C8u, 0x1CF16D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF16D0u;
label_1cf16d0:
    // 0x1cf16d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf16d4: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF16D4u;
    SET_GPR_U32(ctx, 31, 0x1CF16DCu);
    ctx->pc = 0x1CF16D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF16D4u;
    // 0x1cf16d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF16D4u, 0x1CF16DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF16DCu;
label_1cf16dc:
    // 0x1cf16dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf16dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf16e0: 0xc73bd68  jal         func_1CEF5A0
    ctx->pc = 0x1CF16E0u;
    SET_GPR_U32(ctx, 31, 0x1CF16E8u);
    ctx->pc = 0x1CF16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF16E0u;
    // 0x1cf16e4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF5A0u, 0x1CF16E0u, 0x1CF16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF16E8u;
label_1cf16e8:
    // 0x1cf16e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cf16e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf16ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cf16ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf16f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF16F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF16F0u;
        // 0x1cf16f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF16F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF16F8u;
}
