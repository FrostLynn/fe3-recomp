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

// Function: sub_01C9A800
// Address: 0x1c9a800 - 0x1c9a908
void sub_01C9A800_0x1c9a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9A800_0x1c9a800");
#endif

    switch (ctx->pc) {
        case 0x1c9a81cu: goto label_1c9a81c;
        case 0x1c9a824u: goto label_1c9a824;
        case 0x1c9a838u: goto label_1c9a838;
        case 0x1c9a840u: goto label_1c9a840;
        case 0x1c9a844u: goto label_1c9a844;
        case 0x1c9a880u: goto label_1c9a880;
        case 0x1c9a8a8u: goto label_1c9a8a8;
        case 0x1c9a8b4u: goto label_1c9a8b4;
        case 0x1c9a8c0u: goto label_1c9a8c0;
        case 0x1c9a8d4u: goto label_1c9a8d4;
        case 0x1c9a8ecu: goto label_1c9a8ec;
        default: break;
    }

    ctx->pc = 0x1c9a800u;

    // 0x1c9a800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9a800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9a804: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9a804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9a808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a80c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9a80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a810: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9a810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9a814: 0xc7262d0  jal         func_1C98B40
    ctx->pc = 0x1C9A814u;
    SET_GPR_U32(ctx, 31, 0x1C9A81Cu);
    ctx->pc = 0x1C9A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A814u;
    // 0x1c9a818: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B40u, 0x1C9A814u, 0x1C9A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A81Cu;
label_1c9a81c:
    // 0x1c9a81c: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9A81Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A824u);
    ctx->pc = 0x1C9A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A81Cu;
    // 0x1c9a820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9A81Cu, 0x1C9A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A824u;
label_1c9a824:
    // 0x1c9a824: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9a824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a828: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9A828u;
    {
        const bool branch_taken_0x1c9a828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A828u;
        // 0x1c9a82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a828) {
            ctx->pc = 0x1C9A854u;
            goto label_1c9a854;
        }
    }
    ctx->pc = 0x1C9A830u;
    // 0x1c9a830: 0xc7262ec  jal         func_1C98BB0
    ctx->pc = 0x1C9A830u;
    SET_GPR_U32(ctx, 31, 0x1C9A838u);
    ctx->pc = 0x1C98BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98BB0u, 0x1C9A830u, 0x1C9A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A838u;
label_1c9a838:
    // 0x1c9a838: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9A838u;
    SET_GPR_U32(ctx, 31, 0x1C9A840u);
    ctx->pc = 0x1C9A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A838u;
    // 0x1c9a83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9A838u, 0x1C9A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A840u;
label_1c9a840:
    // 0x1c9a840: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9a844:
    // 0x1c9a844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9a844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a848: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9a848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9a84c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9A84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A84Cu;
        // 0x1c9a850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A854u;
label_1c9a854:
    // 0x1c9a854: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C9A854u;
    {
        const bool branch_taken_0x1c9a854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A854u;
        // 0x1c9a858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a854) {
            ctx->pc = 0x1C9A844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9a844;
        }
    }
    ctx->pc = 0x1C9A85Cu;
    // 0x1c9a85c: 0x0  nop
    ctx->pc = 0x1c9a85cu;
    // NOP
    // 0x1c9a860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9a860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9a864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9a86c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9a870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9a870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a874: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c9a874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c9a878: 0xc7262d8  jal         func_1C98B60
    ctx->pc = 0x1C9A878u;
    SET_GPR_U32(ctx, 31, 0x1C9A880u);
    ctx->pc = 0x1C9A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A878u;
    // 0x1c9a87c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B60u, 0x1C9A878u, 0x1C9A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A880u;
label_1c9a880:
    // 0x1c9a880: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c9a880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c9a884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9a884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9a888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a88c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9a88cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a890: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c9a890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9a894: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9a894u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a898: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9a898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9a89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a8a0: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9A8A0u;
    SET_GPR_U32(ctx, 31, 0x1C9A8A8u);
    ctx->pc = 0x1C9A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A8A0u;
    // 0x1c9a8a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9A8A0u, 0x1C9A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A8A8u;
label_1c9a8a8:
    // 0x1c9a8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a8ac: 0xc7262da  jal         func_1C98B68
    ctx->pc = 0x1C9A8ACu;
    SET_GPR_U32(ctx, 31, 0x1C9A8B4u);
    ctx->pc = 0x1C9A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A8ACu;
    // 0x1c9a8b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B68u, 0x1C9A8ACu, 0x1C9A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A8B4u;
label_1c9a8b4:
    // 0x1c9a8b4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9a8b8: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9A8B8u;
    SET_GPR_U32(ctx, 31, 0x1C9A8C0u);
    ctx->pc = 0x1C9A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A8B8u;
    // 0x1c9a8bc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9A8B8u, 0x1C9A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A8C0u;
label_1c9a8c0:
    // 0x1c9a8c0: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c9a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c9a8c4: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c9a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c9a8c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c9a8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9a8cc: 0xc7262dc  jal         func_1C98B70
    ctx->pc = 0x1C9A8CCu;
    SET_GPR_U32(ctx, 31, 0x1C9A8D4u);
    ctx->pc = 0x1C9A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A8CCu;
    // 0x1c9a8d0: 0x240500c4  addiu       $a1, $zero, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B70u, 0x1C9A8CCu, 0x1C9A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A8D4u;
label_1c9a8d4:
    // 0x1c9a8d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9a8d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a8d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9a8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9a8dc: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c9a8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c9a8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a8e4: 0xc7262d0  jal         func_1C98B40
    ctx->pc = 0x1C9A8E4u;
    SET_GPR_U32(ctx, 31, 0x1C9A8ECu);
    ctx->pc = 0x1C9A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A8E4u;
    // 0x1c9a8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B40u, 0x1C9A8E4u, 0x1C9A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A8ECu;
label_1c9a8ec:
    // 0x1c9a8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a8f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9a8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9a8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9a8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a8f8: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x1c9a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x1c9a8fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9a8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9a900: 0x87262de  j           func_1C98B78
    ctx->pc = 0x1C9A900u;
    ctx->pc = 0x1C9A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A900u;
    // 0x1c9a904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B78u;
    sub_01C98B78_0x1c98b78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9A908u;
}
