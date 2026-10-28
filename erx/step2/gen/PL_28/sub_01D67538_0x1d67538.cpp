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

// Function: sub_01D67538
// Address: 0x1d67538 - 0x1d67638
void sub_01D67538_0x1d67538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67538_0x1d67538");
#endif

    switch (ctx->pc) {
        case 0x1d67554u: goto label_1d67554;
        case 0x1d6755cu: goto label_1d6755c;
        case 0x1d67570u: goto label_1d67570;
        case 0x1d67574u: goto label_1d67574;
        case 0x1d675b0u: goto label_1d675b0;
        case 0x1d675d8u: goto label_1d675d8;
        case 0x1d675e4u: goto label_1d675e4;
        case 0x1d675f0u: goto label_1d675f0;
        case 0x1d67604u: goto label_1d67604;
        case 0x1d6761cu: goto label_1d6761c;
        default: break;
    }

    ctx->pc = 0x1d67538u;

    // 0x1d67538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6753c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6753cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d67540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d6754c: 0xc7599c6  jal         func_1D66718
    ctx->pc = 0x1D6754Cu;
    SET_GPR_U32(ctx, 31, 0x1D67554u);
    ctx->pc = 0x1D67550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6754Cu;
    // 0x1d67550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66718u, 0x1D6754Cu, 0x1D67554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67554u;
label_1d67554:
    // 0x1d67554: 0xc7599c8  jal         func_1D66720
    ctx->pc = 0x1D67554u;
    SET_GPR_U32(ctx, 31, 0x1D6755Cu);
    ctx->pc = 0x1D67558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67554u;
    // 0x1d67558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66720u, 0x1D67554u, 0x1D6755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6755Cu;
label_1d6755c:
    // 0x1d6755c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d6755cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67560: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D67560u;
    {
        const bool branch_taken_0x1d67560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D67564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67560u;
        // 0x1d67564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67560) {
            ctx->pc = 0x1D67584u;
            goto label_1d67584;
        }
    }
    ctx->pc = 0x1D67568u;
    // 0x1d67568: 0xc7599ca  jal         func_1D66728
    ctx->pc = 0x1D67568u;
    SET_GPR_U32(ctx, 31, 0x1D67570u);
    ctx->pc = 0x1D66728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66728u, 0x1D67568u, 0x1D67570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67570u;
label_1d67570:
    // 0x1d67570: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d67570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d67574:
    // 0x1d67574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67578: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6757c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6757Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6757Cu;
        // 0x1d67580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6757Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67584u;
label_1d67584:
    // 0x1d67584: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D67584u;
    {
        const bool branch_taken_0x1d67584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67584u;
        // 0x1d67588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67584) {
            ctx->pc = 0x1D67574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d67574;
        }
    }
    ctx->pc = 0x1D6758Cu;
    // 0x1d6758c: 0x0  nop
    ctx->pc = 0x1d6758cu;
    // NOP
    // 0x1d67590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d67590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d67594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d67598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6759c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d675a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d675a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d675a4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d675a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d675a8: 0xc7599ce  jal         func_1D66738
    ctx->pc = 0x1D675A8u;
    SET_GPR_U32(ctx, 31, 0x1D675B0u);
    ctx->pc = 0x1D675ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D675A8u;
    // 0x1d675ac: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66738u, 0x1D675A8u, 0x1D675B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D675B0u;
label_1d675b0:
    // 0x1d675b0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d675b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d675b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d675b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d675b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d675b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d675bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d675bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d675c0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d675c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d675c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d675c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d675c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d675c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d675cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d675ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d675d0: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D675D0u;
    SET_GPR_U32(ctx, 31, 0x1D675D8u);
    ctx->pc = 0x1D675D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D675D0u;
    // 0x1d675d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D675D0u, 0x1D675D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D675D8u;
label_1d675d8:
    // 0x1d675d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d675d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d675dc: 0xc7599d0  jal         func_1D66740
    ctx->pc = 0x1D675DCu;
    SET_GPR_U32(ctx, 31, 0x1D675E4u);
    ctx->pc = 0x1D675E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D675DCu;
    // 0x1d675e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66740u, 0x1D675DCu, 0x1D675E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D675E4u;
label_1d675e4:
    // 0x1d675e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d675e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d675e8: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D675E8u;
    SET_GPR_U32(ctx, 31, 0x1D675F0u);
    ctx->pc = 0x1D675ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D675E8u;
    // 0x1d675ec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D675E8u, 0x1D675F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D675F0u;
label_1d675f0:
    // 0x1d675f0: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d675f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d675f4: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d675f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d675f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d675f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d675fc: 0xc7599d2  jal         func_1D66748
    ctx->pc = 0x1D675FCu;
    SET_GPR_U32(ctx, 31, 0x1D67604u);
    ctx->pc = 0x1D67600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D675FCu;
    // 0x1d67600: 0x240500fc  addiu       $a1, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66748u, 0x1D675FCu, 0x1D67604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67604u;
label_1d67604:
    // 0x1d67604: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d67604u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67608: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d67608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6760c: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d6760cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d67610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67614: 0xc7599c6  jal         func_1D66718
    ctx->pc = 0x1D67614u;
    SET_GPR_U32(ctx, 31, 0x1D6761Cu);
    ctx->pc = 0x1D67618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67614u;
    // 0x1d67618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66718u, 0x1D67614u, 0x1D6761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6761Cu;
label_1d6761c:
    // 0x1d6761c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d67620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67628: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x1d67628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x1d6762c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d6762cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d67630: 0x87599d4  j           func_1D66750
    ctx->pc = 0x1D67630u;
    ctx->pc = 0x1D67634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67630u;
    // 0x1d67634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66750u;
    sub_01D66750_0x1d66750(rdram, ctx, runtime); return;
    ctx->pc = 0x1D67638u;
}
