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

// Function: sub_01D9E6F8
// Address: 0x1d9e6f8 - 0x1d9e7f8
void sub_01D9E6F8_0x1d9e6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9E6F8_0x1d9e6f8");
#endif

    switch (ctx->pc) {
        case 0x1d9e714u: goto label_1d9e714;
        case 0x1d9e71cu: goto label_1d9e71c;
        case 0x1d9e730u: goto label_1d9e730;
        case 0x1d9e734u: goto label_1d9e734;
        case 0x1d9e770u: goto label_1d9e770;
        case 0x1d9e798u: goto label_1d9e798;
        case 0x1d9e7a4u: goto label_1d9e7a4;
        case 0x1d9e7b0u: goto label_1d9e7b0;
        case 0x1d9e7c4u: goto label_1d9e7c4;
        case 0x1d9e7dcu: goto label_1d9e7dc;
        default: break;
    }

    ctx->pc = 0x1d9e6f8u;

    // 0x1d9e6f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9e6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9e6fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9e6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9e700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9e704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e708: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9e708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9e70c: 0xc767250  jal         func_1D9C940
    ctx->pc = 0x1D9E70Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E714u);
    ctx->pc = 0x1D9E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E70Cu;
    // 0x1d9e710: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C940u, 0x1D9E70Cu, 0x1D9E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E714u;
label_1d9e714:
    // 0x1d9e714: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9E714u;
    SET_GPR_U32(ctx, 31, 0x1D9E71Cu);
    ctx->pc = 0x1D9E718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E714u;
    // 0x1d9e718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9E714u, 0x1D9E71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E71Cu;
label_1d9e71c:
    // 0x1d9e71c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9e71cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e720: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9E720u;
    {
        const bool branch_taken_0x1d9e720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E720u;
        // 0x1d9e724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e720) {
            ctx->pc = 0x1D9E744u;
            goto label_1d9e744;
        }
    }
    ctx->pc = 0x1D9E728u;
    // 0x1d9e728: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9E728u;
    SET_GPR_U32(ctx, 31, 0x1D9E730u);
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9E728u, 0x1D9E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E730u;
label_1d9e730:
    // 0x1d9e730: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d9e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9e734:
    // 0x1d9e734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e738: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9e738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e73c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E73Cu;
        // 0x1d9e740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E744u;
label_1d9e744:
    // 0x1d9e744: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9E744u;
    {
        const bool branch_taken_0x1d9e744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E744u;
        // 0x1d9e748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e744) {
            ctx->pc = 0x1D9E734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9e734;
        }
    }
    ctx->pc = 0x1D9E74Cu;
    // 0x1d9e74c: 0x0  nop
    ctx->pc = 0x1d9e74cu;
    // NOP
    // 0x1d9e750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9e754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9e758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9e758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9e75c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9e760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9e760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e764: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9e764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9e768: 0xc767258  jal         func_1D9C960
    ctx->pc = 0x1D9E768u;
    SET_GPR_U32(ctx, 31, 0x1D9E770u);
    ctx->pc = 0x1D9E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E768u;
    // 0x1d9e76c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C960u, 0x1D9E768u, 0x1D9E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E770u;
label_1d9e770:
    // 0x1d9e770: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d9e770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d9e774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9e774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e778: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9e778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e77c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9e77cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e780: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d9e780u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9e784: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9e784u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e788: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d9e788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9e78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e790: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9E790u;
    SET_GPR_U32(ctx, 31, 0x1D9E798u);
    ctx->pc = 0x1D9E794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E790u;
    // 0x1d9e794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9E790u, 0x1D9E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E798u;
label_1d9e798:
    // 0x1d9e798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e79c: 0xc76725a  jal         func_1D9C968
    ctx->pc = 0x1D9E79Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E7A4u);
    ctx->pc = 0x1D9E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E79Cu;
    // 0x1d9e7a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C968u, 0x1D9E79Cu, 0x1D9E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E7A4u;
label_1d9e7a4:
    // 0x1d9e7a4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9e7a8: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9E7A8u;
    SET_GPR_U32(ctx, 31, 0x1D9E7B0u);
    ctx->pc = 0x1D9E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E7A8u;
    // 0x1d9e7ac: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9E7A8u, 0x1D9E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E7B0u;
label_1d9e7b0:
    // 0x1d9e7b0: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d9e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d9e7b4: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d9e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d9e7b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9e7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9e7bc: 0xc76725c  jal         func_1D9C970
    ctx->pc = 0x1D9E7BCu;
    SET_GPR_U32(ctx, 31, 0x1D9E7C4u);
    ctx->pc = 0x1D9E7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E7BCu;
    // 0x1d9e7c0: 0x2405010e  addiu       $a1, $zero, 0x10E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C970u, 0x1D9E7BCu, 0x1D9E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E7C4u;
label_1d9e7c4:
    // 0x1d9e7c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9e7c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e7c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9e7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9e7cc: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d9e7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d9e7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e7d4: 0xc767250  jal         func_1D9C940
    ctx->pc = 0x1D9E7D4u;
    SET_GPR_U32(ctx, 31, 0x1D9E7DCu);
    ctx->pc = 0x1D9E7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E7D4u;
    // 0x1d9e7d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C940u, 0x1D9E7D4u, 0x1D9E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E7DCu;
label_1d9e7dc:
    // 0x1d9e7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e7e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9e7e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e7e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e7e8: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x1d9e7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x1d9e7ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9e7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9e7f0: 0x876725e  j           func_1D9C978
    ctx->pc = 0x1D9E7F0u;
    ctx->pc = 0x1D9E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E7F0u;
    // 0x1d9e7f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C978u;
    sub_01D9C978_0x1d9c978(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9E7F8u;
}
