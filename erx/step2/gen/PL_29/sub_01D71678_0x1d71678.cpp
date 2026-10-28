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

// Function: sub_01D71678
// Address: 0x1d71678 - 0x1d71790
void sub_01D71678_0x1d71678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71678_0x1d71678");
#endif

    switch (ctx->pc) {
        case 0x1d71694u: goto label_1d71694;
        case 0x1d716a4u: goto label_1d716a4;
        case 0x1d716b0u: goto label_1d716b0;
        case 0x1d716c0u: goto label_1d716c0;
        case 0x1d716d0u: goto label_1d716d0;
        case 0x1d716d8u: goto label_1d716d8;
        case 0x1d716ecu: goto label_1d716ec;
        case 0x1d716f4u: goto label_1d716f4;
        case 0x1d716f8u: goto label_1d716f8;
        case 0x1d7172cu: goto label_1d7172c;
        case 0x1d71738u: goto label_1d71738;
        case 0x1d71744u: goto label_1d71744;
        case 0x1d7174cu: goto label_1d7174c;
        case 0x1d7175cu: goto label_1d7175c;
        default: break;
    }

    ctx->pc = 0x1d71678u;

    // 0x1d71678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d71678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7167c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7167cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d71680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d71680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d71684: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d71684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d71688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d71688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7168c: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D7168Cu;
    SET_GPR_U32(ctx, 31, 0x1D71694u);
    ctx->pc = 0x1D71690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7168Cu;
    // 0x1d71690: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D7168Cu, 0x1D71694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71694u;
label_1d71694:
    // 0x1d71694: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d71694u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d71698: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d71698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d7169c: 0xc75c2ba  jal         func_1D70AE8
    ctx->pc = 0x1D7169Cu;
    SET_GPR_U32(ctx, 31, 0x1D716A4u);
    ctx->pc = 0x1D716A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7169Cu;
    // 0x1d716a0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70AE8u, 0x1D7169Cu, 0x1D716A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D716A4u;
label_1d716a4:
    // 0x1d716a4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d716a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d716a8: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D716A8u;
    SET_GPR_U32(ctx, 31, 0x1D716B0u);
    ctx->pc = 0x1D716ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D716A8u;
    // 0x1d716ac: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D716A8u, 0x1D716B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D716B0u;
label_1d716b0:
    // 0x1d716b0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d716b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d716b4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d716b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d716b8: 0xc75c2ba  jal         func_1D70AE8
    ctx->pc = 0x1D716B8u;
    SET_GPR_U32(ctx, 31, 0x1D716C0u);
    ctx->pc = 0x1D716BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D716B8u;
    // 0x1d716bc: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70AE8u, 0x1D716B8u, 0x1D716C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D716C0u;
label_1d716c0:
    // 0x1d716c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d716c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d716c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d716c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d716c8: 0xc75c006  jal         func_1D70018
    ctx->pc = 0x1D716C8u;
    SET_GPR_U32(ctx, 31, 0x1D716D0u);
    ctx->pc = 0x1D716CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D716C8u;
    // 0x1d716cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70018u, 0x1D716C8u, 0x1D716D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D716D0u;
label_1d716d0:
    // 0x1d716d0: 0xc75c008  jal         func_1D70020
    ctx->pc = 0x1D716D0u;
    SET_GPR_U32(ctx, 31, 0x1D716D8u);
    ctx->pc = 0x1D716D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D716D0u;
    // 0x1d716d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70020u, 0x1D716D0u, 0x1D716D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D716D8u;
label_1d716d8:
    // 0x1d716d8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d716d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d716dc: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D716DCu;
    {
        const bool branch_taken_0x1d716dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D716E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D716DCu;
        // 0x1d716e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d716dc) {
            ctx->pc = 0x1D71708u;
            goto label_1d71708;
        }
    }
    ctx->pc = 0x1D716E4u;
    // 0x1d716e4: 0xc75c020  jal         func_1D70080
    ctx->pc = 0x1D716E4u;
    SET_GPR_U32(ctx, 31, 0x1D716ECu);
    ctx->pc = 0x1D70080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70080u, 0x1D716E4u, 0x1D716ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D716ECu;
label_1d716ec:
    // 0x1d716ec: 0xc75c00a  jal         func_1D70028
    ctx->pc = 0x1D716ECu;
    SET_GPR_U32(ctx, 31, 0x1D716F4u);
    ctx->pc = 0x1D716F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D716ECu;
    // 0x1d716f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70028u, 0x1D716ECu, 0x1D716F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D716F4u;
label_1d716f4:
    // 0x1d716f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d716f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d716f8:
    // 0x1d716f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d716f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d716fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d716fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d71700: 0x3e00008  jr          $ra
    ctx->pc = 0x1D71700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D71704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71700u;
        // 0x1d71704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71708u;
label_1d71708:
    // 0x1d71708: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D71708u;
    {
        const bool branch_taken_0x1d71708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71708u;
        // 0x1d7170c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71708) {
            ctx->pc = 0x1D716F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d716f8;
        }
    }
    ctx->pc = 0x1D71710u;
    // 0x1d71710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d71710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d71714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d71714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d71718: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d71718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7171c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7171cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d71720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d71720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71724: 0xc75c016  jal         func_1D70058
    ctx->pc = 0x1D71724u;
    SET_GPR_U32(ctx, 31, 0x1D7172Cu);
    ctx->pc = 0x1D71728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71724u;
    // 0x1d71728: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70058u, 0x1D71724u, 0x1D7172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7172Cu;
label_1d7172c:
    // 0x1d7172c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d7172cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d71730: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D71730u;
    SET_GPR_U32(ctx, 31, 0x1D71738u);
    ctx->pc = 0x1D71734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71730u;
    // 0x1d71734: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D71730u, 0x1D71738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71738u;
label_1d71738:
    // 0x1d71738: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d71738u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7173c: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1d7173cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d71740: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d71740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d71744:
    // 0x1d71744: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D71744u;
    SET_GPR_U32(ctx, 31, 0x1D7174Cu);
    ctx->pc = 0x1D71748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71744u;
    // 0x1d71748: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D71744u, 0x1D7174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7174Cu;
label_1d7174c:
    // 0x1d7174c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7174Cu;
    {
        const bool branch_taken_0x1d7174c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7174Cu;
        // 0x1d71750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7174c) {
            ctx->pc = 0x1D71760u;
            goto label_1d71760;
        }
    }
    ctx->pc = 0x1D71754u;
    // 0x1d71754: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D71754u;
    SET_GPR_U32(ctx, 31, 0x1D7175Cu);
    ctx->pc = 0x1D71758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71754u;
    // 0x1d71758: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D71754u, 0x1D7175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7175Cu;
label_1d7175c:
    // 0x1d7175c: 0xa0400952  sb          $zero, 0x952($v0)
    ctx->pc = 0x1d7175cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2386), (uint8_t)GPR_U32(ctx, 0));
label_1d71760:
    // 0x1d71760: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d71760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d71764: 0x2a0f0003  slti        $t7, $s0, 0x3
    ctx->pc = 0x1d71764u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d71768: 0x55e0fff6  bnel        $t7, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D71768u;
    {
        const bool branch_taken_0x1d71768 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d71768) {
            ctx->pc = 0x1D7176Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D71768u;
            // 0x1d7176c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D71744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d71744;
        }
    }
    ctx->pc = 0x1D71770u;
    // 0x1d71770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d71770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d71774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d71774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d71778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d71778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7177c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D71780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7177Cu;
        // 0x1d71780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7177Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71784u;
    // 0x1d71784: 0x0  nop
    ctx->pc = 0x1d71784u;
    // NOP
    // 0x1d71788: 0x3e00008  jr          $ra
    ctx->pc = 0x1D71788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71790u;
}
