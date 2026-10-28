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

// Function: sub_01CA42F8
// Address: 0x1ca42f8 - 0x1ca4428
void sub_01CA42F8_0x1ca42f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA42F8_0x1ca42f8");
#endif

    switch (ctx->pc) {
        case 0x1ca4314u: goto label_1ca4314;
        case 0x1ca431cu: goto label_1ca431c;
        case 0x1ca4330u: goto label_1ca4330;
        case 0x1ca4334u: goto label_1ca4334;
        case 0x1ca4370u: goto label_1ca4370;
        case 0x1ca43d0u: goto label_1ca43d0;
        case 0x1ca43dcu: goto label_1ca43dc;
        case 0x1ca43e8u: goto label_1ca43e8;
        case 0x1ca43fcu: goto label_1ca43fc;
        case 0x1ca440cu: goto label_1ca440c;
        default: break;
    }

    ctx->pc = 0x1ca42f8u;

    // 0x1ca42f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca42f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca42fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca42fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca4300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca4304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca4308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca430c: 0xc7289d0  jal         func_1CA2740
    ctx->pc = 0x1CA430Cu;
    SET_GPR_U32(ctx, 31, 0x1CA4314u);
    ctx->pc = 0x1CA4310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA430Cu;
    // 0x1ca4310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2740u, 0x1CA430Cu, 0x1CA4314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4314u;
label_1ca4314:
    // 0x1ca4314: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA4314u;
    SET_GPR_U32(ctx, 31, 0x1CA431Cu);
    ctx->pc = 0x1CA4318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4314u;
    // 0x1ca4318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA4314u, 0x1CA431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA431Cu;
label_1ca431c:
    // 0x1ca431c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca431cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4320: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA4320u;
    {
        const bool branch_taken_0x1ca4320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4320u;
        // 0x1ca4324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4320) {
            ctx->pc = 0x1CA4344u;
            goto label_1ca4344;
        }
    }
    ctx->pc = 0x1CA4328u;
    // 0x1ca4328: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA4328u;
    SET_GPR_U32(ctx, 31, 0x1CA4330u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA4328u, 0x1CA4330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4330u;
label_1ca4330:
    // 0x1ca4330: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ca4330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ca4334:
    // 0x1ca4334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca4334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4338: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca4338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca433c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA433Cu;
        // 0x1ca4340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA433Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4344u;
label_1ca4344:
    // 0x1ca4344: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CA4344u;
    {
        const bool branch_taken_0x1ca4344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4344u;
        // 0x1ca4348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4344) {
            ctx->pc = 0x1CA4334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4334;
        }
    }
    ctx->pc = 0x1CA434Cu;
    // 0x1ca434c: 0x0  nop
    ctx->pc = 0x1ca434cu;
    // NOP
    // 0x1ca4350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca4350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca4354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4358: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca4358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca435c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca4360: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca4360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4364: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ca4364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ca4368: 0xc7289d8  jal         func_1CA2760
    ctx->pc = 0x1CA4368u;
    SET_GPR_U32(ctx, 31, 0x1CA4370u);
    ctx->pc = 0x1CA436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4368u;
    // 0x1ca436c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2760u, 0x1CA4368u, 0x1CA4370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4370u;
label_1ca4370:
    // 0x1ca4370: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ca4370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ca4374: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ca4374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4378: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1ca4378u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ca437c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca437cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca4380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4384: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x1ca4384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1ca4388: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca4388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca438c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca438cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4390: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ca4390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca4394: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1ca4394u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ca4398: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA4398u;
    {
        const bool branch_taken_0x1ca4398 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CA439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4398u;
        // 0x1ca439c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4398) {
            ctx->pc = 0x1CA43C8u;
            goto label_1ca43c8;
        }
    }
    ctx->pc = 0x1CA43A0u;
    // 0x1ca43a0: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1ca43a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1ca43a4: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA43A4u;
    {
        const bool branch_taken_0x1ca43a4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA43A4u;
        // 0x1ca43a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca43a4) {
            ctx->pc = 0x1CA43C8u;
            goto label_1ca43c8;
        }
    }
    ctx->pc = 0x1CA43ACu;
    // 0x1ca43ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca43acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca43b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca43b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca43b4: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x1ca43b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1ca43b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca43b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca43bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca43bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca43c0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ca43c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca43c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca43c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca43c8:
    // 0x1ca43c8: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA43C8u;
    SET_GPR_U32(ctx, 31, 0x1CA43D0u);
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA43C8u, 0x1CA43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA43D0u;
label_1ca43d0:
    // 0x1ca43d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca43d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca43d4: 0xc7289da  jal         func_1CA2768
    ctx->pc = 0x1CA43D4u;
    SET_GPR_U32(ctx, 31, 0x1CA43DCu);
    ctx->pc = 0x1CA43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA43D4u;
    // 0x1ca43d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2768u, 0x1CA43D4u, 0x1CA43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA43DCu;
label_1ca43dc:
    // 0x1ca43dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca43dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca43e0: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA43E0u;
    SET_GPR_U32(ctx, 31, 0x1CA43E8u);
    ctx->pc = 0x1CA43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA43E0u;
    // 0x1ca43e4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA43E0u, 0x1CA43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA43E8u;
label_1ca43e8:
    // 0x1ca43e8: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1ca43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1ca43ec: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1ca43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1ca43f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ca43f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca43f4: 0xc7289dc  jal         func_1CA2770
    ctx->pc = 0x1CA43F4u;
    SET_GPR_U32(ctx, 31, 0x1CA43FCu);
    ctx->pc = 0x1CA43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA43F4u;
    // 0x1ca43f8: 0x240500c6  addiu       $a1, $zero, 0xC6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2770u, 0x1CA43F4u, 0x1CA43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA43FCu;
label_1ca43fc:
    // 0x1ca43fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca43fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca4400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4404: 0xc7289d0  jal         func_1CA2740
    ctx->pc = 0x1CA4404u;
    SET_GPR_U32(ctx, 31, 0x1CA440Cu);
    ctx->pc = 0x1CA4408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4404u;
    // 0x1ca4408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2740u, 0x1CA4404u, 0x1CA440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA440Cu;
label_1ca440c:
    // 0x1ca440c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca4410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca4414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4418: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1ca4418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ca441c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca4420: 0x87289de  j           func_1CA2778
    ctx->pc = 0x1CA4420u;
    ctx->pc = 0x1CA4424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4420u;
    // 0x1ca4424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2778u;
    sub_01CA2778_0x1ca2778(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA4428u;
}
