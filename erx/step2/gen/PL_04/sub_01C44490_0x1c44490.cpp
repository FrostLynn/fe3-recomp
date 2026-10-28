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

// Function: sub_01C44490
// Address: 0x1c44490 - 0x1c445bc
void sub_01C44490_0x1c44490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44490_0x1c44490");
#endif

    switch (ctx->pc) {
        case 0x1c444acu: goto label_1c444ac;
        case 0x1c444b4u: goto label_1c444b4;
        case 0x1c444c8u: goto label_1c444c8;
        case 0x1c444ccu: goto label_1c444cc;
        case 0x1c44508u: goto label_1c44508;
        case 0x1c44548u: goto label_1c44548;
        case 0x1c4455cu: goto label_1c4455c;
        case 0x1c44568u: goto label_1c44568;
        case 0x1c44574u: goto label_1c44574;
        case 0x1c44588u: goto label_1c44588;
        case 0x1c445a0u: goto label_1c445a0;
        default: break;
    }

    ctx->pc = 0x1c44490u;

    // 0x1c44490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44494: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c44494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c44498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c44498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4449c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4449cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c444a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c444a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c444a4: 0xc710910  jal         func_1C42440
    ctx->pc = 0x1C444A4u;
    SET_GPR_U32(ctx, 31, 0x1C444ACu);
    ctx->pc = 0x1C444A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C444A4u;
    // 0x1c444a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42440u, 0x1C444A4u, 0x1C444ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C444ACu;
label_1c444ac:
    // 0x1c444ac: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C444ACu;
    SET_GPR_U32(ctx, 31, 0x1C444B4u);
    ctx->pc = 0x1C444B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C444ACu;
    // 0x1c444b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C444ACu, 0x1C444B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C444B4u;
label_1c444b4:
    // 0x1c444b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c444b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c444b8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C444B8u;
    {
        const bool branch_taken_0x1c444b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C444BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C444B8u;
        // 0x1c444bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c444b8) {
            ctx->pc = 0x1C444DCu;
            goto label_1c444dc;
        }
    }
    ctx->pc = 0x1C444C0u;
    // 0x1c444c0: 0xc710914  jal         func_1C42450
    ctx->pc = 0x1C444C0u;
    SET_GPR_U32(ctx, 31, 0x1C444C8u);
    ctx->pc = 0x1C42450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42450u, 0x1C444C0u, 0x1C444C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C444C8u;
label_1c444c8:
    // 0x1c444c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c444c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c444cc:
    // 0x1c444cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c444ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c444d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c444d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c444d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C444D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C444D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C444D4u;
        // 0x1c444d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C444D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C444DCu;
label_1c444dc:
    // 0x1c444dc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C444DCu;
    {
        const bool branch_taken_0x1c444dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C444E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C444DCu;
        // 0x1c444e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c444dc) {
            ctx->pc = 0x1C444CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c444cc;
        }
    }
    ctx->pc = 0x1C444E4u;
    // 0x1c444e4: 0x0  nop
    ctx->pc = 0x1c444e4u;
    // NOP
    // 0x1c444e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c444e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c444ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c444ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c444f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c444f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c444f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c444f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c444f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c444f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c444fc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c444fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c44500: 0xc710918  jal         func_1C42460
    ctx->pc = 0x1C44500u;
    SET_GPR_U32(ctx, 31, 0x1C44508u);
    ctx->pc = 0x1C44504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44500u;
    // 0x1c44504: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42460u, 0x1C44500u, 0x1C44508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44508u;
label_1c44508:
    // 0x1c44508: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c44508u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4450c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c4450cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44510: 0x25cefff5  addiu       $t6, $t6, -0xB
    ctx->pc = 0x1c44510u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967285));
    // 0x1c44514: 0x2dcf0015  sltiu       $t7, $t6, 0x15
    ctx->pc = 0x1c44514u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1c44518: 0x11e00028  beqz        $t7, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C44518u;
    {
        const bool branch_taken_0x1c44518 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44518u;
        // 0x1c4451c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44518) {
            ctx->pc = 0x1C445BCu;
            return;
        }
    }
    ctx->pc = 0x1C44520u;
    // 0x1c44520: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1c44520u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c44524: 0x3c0e01c4  lui         $t6, 0x1C4
    ctx->pc = 0x1c44524u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)452 << 16));
    // 0x1c44528: 0x25ce5c8c  addiu       $t6, $t6, 0x5C8C
    ctx->pc = 0x1c44528u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 23692));
    // 0x1c4452c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c4452cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c44530: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c44530u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c44534: 0x1a00008  jr          $t5
    ctx->pc = 0x1C44534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4453Cu: goto label_1c4453c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44534u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C4453Cu;
label_1c4453c:
    // 0x1c4453c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4453cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c44540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44544: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x1c44544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1c44548:
    // 0x1c44548: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c44548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4454c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c4454cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44550: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c44550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c44554: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C44554u;
    SET_GPR_U32(ctx, 31, 0x1C4455Cu);
    ctx->pc = 0x1C44558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44554u;
    // 0x1c44558: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C44554u, 0x1C4455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4455Cu;
label_1c4455c:
    // 0x1c4455c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4455cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44560: 0xc71091a  jal         func_1C42468
    ctx->pc = 0x1C44560u;
    SET_GPR_U32(ctx, 31, 0x1C44568u);
    ctx->pc = 0x1C44564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44560u;
    // 0x1c44564: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42468u, 0x1C44560u, 0x1C44568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44568u;
label_1c44568:
    // 0x1c44568: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c44568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c4456c: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C4456Cu;
    SET_GPR_U32(ctx, 31, 0x1C44574u);
    ctx->pc = 0x1C44570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4456Cu;
    // 0x1c44570: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C4456Cu, 0x1C44574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44574u;
label_1c44574:
    // 0x1c44574: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c44574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c44578: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c44578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c4457c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c4457cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c44580: 0xc71091c  jal         func_1C42470
    ctx->pc = 0x1C44580u;
    SET_GPR_U32(ctx, 31, 0x1C44588u);
    ctx->pc = 0x1C44584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44580u;
    // 0x1c44584: 0x240500af  addiu       $a1, $zero, 0xAF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42470u, 0x1C44580u, 0x1C44588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44588u;
label_1c44588:
    // 0x1c44588: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c44588u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4458c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c4458cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c44590: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c44590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c44594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44598: 0xc710910  jal         func_1C42440
    ctx->pc = 0x1C44598u;
    SET_GPR_U32(ctx, 31, 0x1C445A0u);
    ctx->pc = 0x1C4459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44598u;
    // 0x1c4459c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42440u, 0x1C44598u, 0x1C445A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C445A0u;
label_1c445a0:
    // 0x1c445a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c445a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c445a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c445a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c445a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c445a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c445ac: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c445acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c445b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c445b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c445b4: 0x871091e  j           func_1C42478
    ctx->pc = 0x1C445B4u;
    ctx->pc = 0x1C445B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C445B4u;
    // 0x1c445b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42478u;
    sub_01C42478_0x1c42478(rdram, ctx, runtime); return;
    ctx->pc = 0x1C445BCu;
}
