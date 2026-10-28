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

// Function: sub_01D352E0
// Address: 0x1d352e0 - 0x1d353e0
void sub_01D352E0_0x1d352e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D352E0_0x1d352e0");
#endif

    switch (ctx->pc) {
        case 0x1d352fcu: goto label_1d352fc;
        case 0x1d35304u: goto label_1d35304;
        case 0x1d35318u: goto label_1d35318;
        case 0x1d3531cu: goto label_1d3531c;
        case 0x1d35358u: goto label_1d35358;
        case 0x1d35380u: goto label_1d35380;
        case 0x1d3538cu: goto label_1d3538c;
        case 0x1d35398u: goto label_1d35398;
        case 0x1d353acu: goto label_1d353ac;
        case 0x1d353c4u: goto label_1d353c4;
        default: break;
    }

    ctx->pc = 0x1d352e0u;

    // 0x1d352e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d352e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d352e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d352e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d352e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d352e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d352ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d352ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d352f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d352f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d352f4: 0xc74cd50  jal         func_1D33540
    ctx->pc = 0x1D352F4u;
    SET_GPR_U32(ctx, 31, 0x1D352FCu);
    ctx->pc = 0x1D352F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D352F4u;
    // 0x1d352f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33540u, 0x1D352F4u, 0x1D352FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D352FCu;
label_1d352fc:
    // 0x1d352fc: 0xc74cd52  jal         func_1D33548
    ctx->pc = 0x1D352FCu;
    SET_GPR_U32(ctx, 31, 0x1D35304u);
    ctx->pc = 0x1D35300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D352FCu;
    // 0x1d35300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33548u, 0x1D352FCu, 0x1D35304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35304u;
label_1d35304:
    // 0x1d35304: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d35304u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d35308: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D35308u;
    {
        const bool branch_taken_0x1d35308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35308u;
        // 0x1d3530c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35308) {
            ctx->pc = 0x1D3532Cu;
            goto label_1d3532c;
        }
    }
    ctx->pc = 0x1D35310u;
    // 0x1d35310: 0xc74cd54  jal         func_1D33550
    ctx->pc = 0x1D35310u;
    SET_GPR_U32(ctx, 31, 0x1D35318u);
    ctx->pc = 0x1D33550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33550u, 0x1D35310u, 0x1D35318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35318u;
label_1d35318:
    // 0x1d35318: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d35318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3531c:
    // 0x1d3531c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3531cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35320: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d35320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d35324: 0x3e00008  jr          $ra
    ctx->pc = 0x1D35324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D35328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35324u;
        // 0x1d35328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D35324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3532Cu;
label_1d3532c:
    // 0x1d3532c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3532Cu;
    {
        const bool branch_taken_0x1d3532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3532Cu;
        // 0x1d35330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3532c) {
            ctx->pc = 0x1D3531Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3531c;
        }
    }
    ctx->pc = 0x1D35334u;
    // 0x1d35334: 0x0  nop
    ctx->pc = 0x1d35334u;
    // NOP
    // 0x1d35338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d35338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3533c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d35340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d35340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d35344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d35344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d35348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d35348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3534c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3534cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d35350: 0xc74cd58  jal         func_1D33560
    ctx->pc = 0x1D35350u;
    SET_GPR_U32(ctx, 31, 0x1D35358u);
    ctx->pc = 0x1D35354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35350u;
    // 0x1d35354: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33560u, 0x1D35350u, 0x1D35358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35358u;
label_1d35358:
    // 0x1d35358: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d35358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d3535c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3535cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35360: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d35360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d35364: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d35364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35368: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d35368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3536c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3536cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35370: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d35370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d35374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35378: 0xc74cd62  jal         func_1D33588
    ctx->pc = 0x1D35378u;
    SET_GPR_U32(ctx, 31, 0x1D35380u);
    ctx->pc = 0x1D3537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35378u;
    // 0x1d3537c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33588u, 0x1D35378u, 0x1D35380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35380u;
label_1d35380:
    // 0x1d35380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35384: 0xc74cd5a  jal         func_1D33568
    ctx->pc = 0x1D35384u;
    SET_GPR_U32(ctx, 31, 0x1D3538Cu);
    ctx->pc = 0x1D35388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35384u;
    // 0x1d35388: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33568u, 0x1D35384u, 0x1D3538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3538Cu;
label_1d3538c:
    // 0x1d3538c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d35390: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D35390u;
    SET_GPR_U32(ctx, 31, 0x1D35398u);
    ctx->pc = 0x1D35394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35390u;
    // 0x1d35394: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D35390u, 0x1D35398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35398u;
label_1d35398:
    // 0x1d35398: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d35398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d3539c: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d3539cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d353a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d353a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d353a4: 0xc74cd5c  jal         func_1D33570
    ctx->pc = 0x1D353A4u;
    SET_GPR_U32(ctx, 31, 0x1D353ACu);
    ctx->pc = 0x1D353A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D353A4u;
    // 0x1d353a8: 0x240500ed  addiu       $a1, $zero, 0xED (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33570u, 0x1D353A4u, 0x1D353ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D353ACu;
label_1d353ac:
    // 0x1d353ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d353acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d353b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d353b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d353b4: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d353b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d353b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d353b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d353bc: 0xc74cd50  jal         func_1D33540
    ctx->pc = 0x1D353BCu;
    SET_GPR_U32(ctx, 31, 0x1D353C4u);
    ctx->pc = 0x1D353C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D353BCu;
    // 0x1d353c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33540u, 0x1D353BCu, 0x1D353C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D353C4u;
label_1d353c4:
    // 0x1d353c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d353c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d353c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d353c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d353cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d353ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d353d0: 0x2405008b  addiu       $a1, $zero, 0x8B
    ctx->pc = 0x1d353d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x1d353d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d353d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d353d8: 0x874cd5e  j           func_1D33578
    ctx->pc = 0x1D353D8u;
    ctx->pc = 0x1D353DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D353D8u;
    // 0x1d353dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33578u;
    sub_01D33578_0x1d33578(rdram, ctx, runtime); return;
    ctx->pc = 0x1D353E0u;
}
