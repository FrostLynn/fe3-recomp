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

// Function: sub_01D944B0
// Address: 0x1d944b0 - 0x1d945b0
void sub_01D944B0_0x1d944b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D944B0_0x1d944b0");
#endif

    switch (ctx->pc) {
        case 0x1d944ccu: goto label_1d944cc;
        case 0x1d944d4u: goto label_1d944d4;
        case 0x1d944e8u: goto label_1d944e8;
        case 0x1d944ecu: goto label_1d944ec;
        case 0x1d94528u: goto label_1d94528;
        case 0x1d94554u: goto label_1d94554;
        case 0x1d94560u: goto label_1d94560;
        case 0x1d9456cu: goto label_1d9456c;
        case 0x1d94580u: goto label_1d94580;
        case 0x1d94590u: goto label_1d94590;
        default: break;
    }

    ctx->pc = 0x1d944b0u;

    // 0x1d944b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d944b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d944b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d944b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d944b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d944b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d944bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d944bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d944c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d944c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d944c4: 0xc764a10  jal         func_1D92840
    ctx->pc = 0x1D944C4u;
    SET_GPR_U32(ctx, 31, 0x1D944CCu);
    ctx->pc = 0x1D944C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D944C4u;
    // 0x1d944c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92840u, 0x1D944C4u, 0x1D944CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D944CCu;
label_1d944cc:
    // 0x1d944cc: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D944CCu;
    SET_GPR_U32(ctx, 31, 0x1D944D4u);
    ctx->pc = 0x1D944D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D944CCu;
    // 0x1d944d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D944CCu, 0x1D944D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D944D4u;
label_1d944d4:
    // 0x1d944d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d944d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d944d8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D944D8u;
    {
        const bool branch_taken_0x1d944d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D944DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D944D8u;
        // 0x1d944dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d944d8) {
            ctx->pc = 0x1D944FCu;
            goto label_1d944fc;
        }
    }
    ctx->pc = 0x1D944E0u;
    // 0x1d944e0: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D944E0u;
    SET_GPR_U32(ctx, 31, 0x1D944E8u);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D944E0u, 0x1D944E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D944E8u;
label_1d944e8:
    // 0x1d944e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d944e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d944ec:
    // 0x1d944ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d944ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d944f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d944f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d944f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D944F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D944F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D944F4u;
        // 0x1d944f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D944F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D944FCu;
label_1d944fc:
    // 0x1d944fc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D944FCu;
    {
        const bool branch_taken_0x1d944fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D944FCu;
        // 0x1d94500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d944fc) {
            ctx->pc = 0x1D944ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d944ec;
        }
    }
    ctx->pc = 0x1D94504u;
    // 0x1d94504: 0x0  nop
    ctx->pc = 0x1d94504u;
    // NOP
    // 0x1d94508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d94508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9450c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d94510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d94514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d94514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d94518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9451c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9451cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d94520: 0xc764a18  jal         func_1D92860
    ctx->pc = 0x1D94520u;
    SET_GPR_U32(ctx, 31, 0x1D94528u);
    ctx->pc = 0x1D94524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94520u;
    // 0x1d94524: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92860u, 0x1D94520u, 0x1D94528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94528u;
label_1d94528:
    // 0x1d94528: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d94528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d9452c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9452cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d94530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94534: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d94534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d94538: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d94538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9453c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9453cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94540: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d94540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d94544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9454c: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D9454Cu;
    SET_GPR_U32(ctx, 31, 0x1D94554u);
    ctx->pc = 0x1D94550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9454Cu;
    // 0x1d94550: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D9454Cu, 0x1D94554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94554u;
label_1d94554:
    // 0x1d94554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94558: 0xc764a1a  jal         func_1D92868
    ctx->pc = 0x1D94558u;
    SET_GPR_U32(ctx, 31, 0x1D94560u);
    ctx->pc = 0x1D9455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94558u;
    // 0x1d9455c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92868u, 0x1D94558u, 0x1D94560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94560u;
label_1d94560:
    // 0x1d94560: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d94560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d94564: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94564u;
    SET_GPR_U32(ctx, 31, 0x1D9456Cu);
    ctx->pc = 0x1D94568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94564u;
    // 0x1d94568: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94564u, 0x1D9456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9456Cu;
label_1d9456c:
    // 0x1d9456c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d9456cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d94570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d94570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94574: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d94574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d94578: 0xc764a1c  jal         func_1D92870
    ctx->pc = 0x1D94578u;
    SET_GPR_U32(ctx, 31, 0x1D94580u);
    ctx->pc = 0x1D9457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94578u;
    // 0x1d9457c: 0x2405010a  addiu       $a1, $zero, 0x10A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92870u, 0x1D94578u, 0x1D94580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94580u;
label_1d94580:
    // 0x1d94580: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d94580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d94584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94588: 0xc764a10  jal         func_1D92840
    ctx->pc = 0x1D94588u;
    SET_GPR_U32(ctx, 31, 0x1D94590u);
    ctx->pc = 0x1D9458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94588u;
    // 0x1d9458c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92840u, 0x1D94588u, 0x1D94590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94590u;
label_1d94590:
    // 0x1d94590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d94594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9459c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1d9459cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1d945a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d945a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d945a4: 0x8764a1e  j           func_1D92878
    ctx->pc = 0x1D945A4u;
    ctx->pc = 0x1D945A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D945A4u;
    // 0x1d945a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92878u;
    sub_01D92878_0x1d92878(rdram, ctx, runtime); return;
    ctx->pc = 0x1D945ACu;
    // 0x1d945ac: 0x0  nop
    ctx->pc = 0x1d945acu;
    // NOP
    ctx->pc = 0x1d945b0u;
}
