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

// Function: sub_01CB8548
// Address: 0x1cb8548 - 0x1cb867c
void sub_01CB8548_0x1cb8548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8548_0x1cb8548");
#endif

    switch (ctx->pc) {
        case 0x1cb8564u: goto label_1cb8564;
        case 0x1cb856cu: goto label_1cb856c;
        case 0x1cb8580u: goto label_1cb8580;
        case 0x1cb8588u: goto label_1cb8588;
        case 0x1cb858cu: goto label_1cb858c;
        case 0x1cb85c8u: goto label_1cb85c8;
        case 0x1cb8608u: goto label_1cb8608;
        case 0x1cb861cu: goto label_1cb861c;
        case 0x1cb8628u: goto label_1cb8628;
        case 0x1cb8634u: goto label_1cb8634;
        case 0x1cb8648u: goto label_1cb8648;
        case 0x1cb8660u: goto label_1cb8660;
        default: break;
    }

    ctx->pc = 0x1cb8548u;

    // 0x1cb8548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb854c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb854cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb8550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8558: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb8558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb855c: 0xc72d9d0  jal         func_1CB6740
    ctx->pc = 0x1CB855Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8564u);
    ctx->pc = 0x1CB8560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB855Cu;
    // 0x1cb8560: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6740u, 0x1CB855Cu, 0x1CB8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8564u;
label_1cb8564:
    // 0x1cb8564: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB8564u;
    SET_GPR_U32(ctx, 31, 0x1CB856Cu);
    ctx->pc = 0x1CB8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8564u;
    // 0x1cb8568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB8564u, 0x1CB856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB856Cu;
label_1cb856c:
    // 0x1cb856c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb856cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8570: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB8570u;
    {
        const bool branch_taken_0x1cb8570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8570u;
        // 0x1cb8574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8570) {
            ctx->pc = 0x1CB859Cu;
            goto label_1cb859c;
        }
    }
    ctx->pc = 0x1CB8578u;
    // 0x1cb8578: 0xc72d9ec  jal         func_1CB67B0
    ctx->pc = 0x1CB8578u;
    SET_GPR_U32(ctx, 31, 0x1CB8580u);
    ctx->pc = 0x1CB67B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB67B0u, 0x1CB8578u, 0x1CB8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8580u;
label_1cb8580:
    // 0x1cb8580: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB8580u;
    SET_GPR_U32(ctx, 31, 0x1CB8588u);
    ctx->pc = 0x1CB8584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8580u;
    // 0x1cb8584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB8580u, 0x1CB8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8588u;
label_1cb8588:
    // 0x1cb8588: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb8588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cb858c:
    // 0x1cb858c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb858cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8590: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb8590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8594: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8594u;
        // 0x1cb8598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB859Cu;
label_1cb859c:
    // 0x1cb859c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB859Cu;
    {
        const bool branch_taken_0x1cb859c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB859Cu;
        // 0x1cb85a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb859c) {
            ctx->pc = 0x1CB858Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb858c;
        }
    }
    ctx->pc = 0x1CB85A4u;
    // 0x1cb85a4: 0x0  nop
    ctx->pc = 0x1cb85a4u;
    // NOP
    // 0x1cb85a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb85a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb85ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb85acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb85b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb85b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb85b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb85b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb85b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb85b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb85bc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cb85bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb85c0: 0xc72d9d8  jal         func_1CB6760
    ctx->pc = 0x1CB85C0u;
    SET_GPR_U32(ctx, 31, 0x1CB85C8u);
    ctx->pc = 0x1CB85C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB85C0u;
    // 0x1cb85c4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6760u, 0x1CB85C0u, 0x1CB85C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB85C8u;
label_1cb85c8:
    // 0x1cb85c8: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1cb85c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cb85cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb85ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb85d0: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x1cb85d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1cb85d4: 0x2dcf0018  sltiu       $t7, $t6, 0x18
    ctx->pc = 0x1cb85d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1cb85d8: 0x11e00040  beqz        $t7, . + 4 + (0x40 << 2)
    ctx->pc = 0x1CB85D8u;
    {
        const bool branch_taken_0x1cb85d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB85D8u;
        // 0x1cb85dc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb85d8) {
            ctx->pc = 0x1CB86DCu;
            return;
        }
    }
    ctx->pc = 0x1CB85E0u;
    // 0x1cb85e0: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1cb85e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1cb85e4: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x1cb85e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x1cb85e8: 0x25ce9f90  addiu       $t6, $t6, -0x6070
    ctx->pc = 0x1cb85e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294942608));
    // 0x1cb85ec: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cb85ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cb85f0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cb85f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cb85f4: 0x1a00008  jr          $t5
    ctx->pc = 0x1CB85F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB85FCu: goto label_1cb85fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB85F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB85FCu;
label_1cb85fc:
    // 0x1cb85fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb85fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8604: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1cb8604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1cb8608:
    // 0x1cb8608: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb8608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb860c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb860cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8610: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cb8610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb8614: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB8614u;
    SET_GPR_U32(ctx, 31, 0x1CB861Cu);
    ctx->pc = 0x1CB8618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8614u;
    // 0x1cb8618: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB8614u, 0x1CB861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB861Cu;
label_1cb861c:
    // 0x1cb861c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb861cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8620: 0xc72d9da  jal         func_1CB6768
    ctx->pc = 0x1CB8620u;
    SET_GPR_U32(ctx, 31, 0x1CB8628u);
    ctx->pc = 0x1CB8624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8620u;
    // 0x1cb8624: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6768u, 0x1CB8620u, 0x1CB8628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8628u;
label_1cb8628:
    // 0x1cb8628: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb8628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb862c: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB862Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8634u);
    ctx->pc = 0x1CB8630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB862Cu;
    // 0x1cb8630: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB862Cu, 0x1CB8634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8634u;
label_1cb8634:
    // 0x1cb8634: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1cb8634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1cb8638: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1cb8638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1cb863c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cb863cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb8640: 0xc72d9dc  jal         func_1CB6770
    ctx->pc = 0x1CB8640u;
    SET_GPR_U32(ctx, 31, 0x1CB8648u);
    ctx->pc = 0x1CB8644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8640u;
    // 0x1cb8644: 0x240500cd  addiu       $a1, $zero, 0xCD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6770u, 0x1CB8640u, 0x1CB8648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8648u;
label_1cb8648:
    // 0x1cb8648: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb8648u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb864c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb864cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb8650: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1cb8650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1cb8654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8658: 0xc72d9d0  jal         func_1CB6740
    ctx->pc = 0x1CB8658u;
    SET_GPR_U32(ctx, 31, 0x1CB8660u);
    ctx->pc = 0x1CB865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8658u;
    // 0x1cb865c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6740u, 0x1CB8658u, 0x1CB8660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8660u;
label_1cb8660:
    // 0x1cb8660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb8664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb8668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb866c: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1cb866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1cb8670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb8670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb8674: 0x872d9de  j           func_1CB6778
    ctx->pc = 0x1CB8674u;
    ctx->pc = 0x1CB8678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8674u;
    // 0x1cb8678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6778u;
    sub_01CB6778_0x1cb6778(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB867Cu;
}
