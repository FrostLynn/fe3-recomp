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

// Function: sub_01C51658
// Address: 0x1c51658 - 0x1c51758
void sub_01C51658_0x1c51658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51658_0x1c51658");
#endif

    switch (ctx->pc) {
        case 0x1c51674u: goto label_1c51674;
        case 0x1c5167cu: goto label_1c5167c;
        case 0x1c51690u: goto label_1c51690;
        case 0x1c51694u: goto label_1c51694;
        case 0x1c516d0u: goto label_1c516d0;
        case 0x1c516f8u: goto label_1c516f8;
        case 0x1c51704u: goto label_1c51704;
        case 0x1c51710u: goto label_1c51710;
        case 0x1c51724u: goto label_1c51724;
        case 0x1c5173cu: goto label_1c5173c;
        default: break;
    }

    ctx->pc = 0x1c51658u;

    // 0x1c51658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5165c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5165cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c51660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c51664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c5166c: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C5166Cu;
    SET_GPR_U32(ctx, 31, 0x1C51674u);
    ctx->pc = 0x1C51670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5166Cu;
    // 0x1c51670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C5166Cu, 0x1C51674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51674u;
label_1c51674:
    // 0x1c51674: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C51674u;
    SET_GPR_U32(ctx, 31, 0x1C5167Cu);
    ctx->pc = 0x1C51678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51674u;
    // 0x1c51678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C51674u, 0x1C5167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5167Cu;
label_1c5167c:
    // 0x1c5167c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c5167cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51680: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C51680u;
    {
        const bool branch_taken_0x1c51680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C51684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51680u;
        // 0x1c51684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51680) {
            ctx->pc = 0x1C516A4u;
            goto label_1c516a4;
        }
    }
    ctx->pc = 0x1C51688u;
    // 0x1c51688: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C51688u;
    SET_GPR_U32(ctx, 31, 0x1C51690u);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C51688u, 0x1C51690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51690u;
label_1c51690:
    // 0x1c51690: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c51690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c51694:
    // 0x1c51694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51698: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c51698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5169c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C516A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5169Cu;
        // 0x1c516a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5169Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C516A4u;
label_1c516a4:
    // 0x1c516a4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C516A4u;
    {
        const bool branch_taken_0x1c516a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C516A4u;
        // 0x1c516a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c516a4) {
            ctx->pc = 0x1C51694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51694;
        }
    }
    ctx->pc = 0x1C516ACu;
    // 0x1c516ac: 0x0  nop
    ctx->pc = 0x1c516acu;
    // NOP
    // 0x1c516b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c516b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c516b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c516b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c516b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c516b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c516bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c516bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c516c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c516c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c516c4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c516c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c516c8: 0xc713e64  jal         func_1C4F990
    ctx->pc = 0x1C516C8u;
    SET_GPR_U32(ctx, 31, 0x1C516D0u);
    ctx->pc = 0x1C516CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C516C8u;
    // 0x1c516cc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F990u, 0x1C516C8u, 0x1C516D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C516D0u;
label_1c516d0:
    // 0x1c516d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c516d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c516d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c516d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c516d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c516d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c516dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c516dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c516e0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c516e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c516e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c516e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c516e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c516e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c516ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c516ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c516f0: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C516F0u;
    SET_GPR_U32(ctx, 31, 0x1C516F8u);
    ctx->pc = 0x1C516F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C516F0u;
    // 0x1c516f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C516F0u, 0x1C516F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C516F8u;
label_1c516f8:
    // 0x1c516f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c516f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c516fc: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C516FCu;
    SET_GPR_U32(ctx, 31, 0x1C51704u);
    ctx->pc = 0x1C51700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C516FCu;
    // 0x1c51700: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C516FCu, 0x1C51704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51704u;
label_1c51704:
    // 0x1c51704: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c51704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c51708: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51708u;
    SET_GPR_U32(ctx, 31, 0x1C51710u);
    ctx->pc = 0x1C5170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51708u;
    // 0x1c5170c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51708u, 0x1C51710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51710u;
label_1c51710:
    // 0x1c51710: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c51710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c51714: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c51714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c51718: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c51718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5171c: 0xc713e68  jal         func_1C4F9A0
    ctx->pc = 0x1C5171Cu;
    SET_GPR_U32(ctx, 31, 0x1C51724u);
    ctx->pc = 0x1C51720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5171Cu;
    // 0x1c51720: 0x240500b2  addiu       $a1, $zero, 0xB2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9A0u, 0x1C5171Cu, 0x1C51724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51724u;
label_1c51724:
    // 0x1c51724: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51724u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51728: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c51728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5172c: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c5172cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c51730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51734: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C51734u;
    SET_GPR_U32(ctx, 31, 0x1C5173Cu);
    ctx->pc = 0x1C51738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51734u;
    // 0x1c51738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C51734u, 0x1C5173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5173Cu;
label_1c5173c:
    // 0x1c5173c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c51740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51748: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1c51748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1c5174c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5174cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51750: 0x8713e6a  j           func_1C4F9A8
    ctx->pc = 0x1C51750u;
    ctx->pc = 0x1C51754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51750u;
    // 0x1c51754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A8u;
    sub_01C4F9A8_0x1c4f9a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C51758u;
}
