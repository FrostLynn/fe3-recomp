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

// Function: sub_01D7F4B8
// Address: 0x1d7f4b8 - 0x1d7f5e4
void sub_01D7F4B8_0x1d7f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F4B8_0x1d7f4b8");
#endif

    switch (ctx->pc) {
        case 0x1d7f4d4u: goto label_1d7f4d4;
        case 0x1d7f4dcu: goto label_1d7f4dc;
        case 0x1d7f4f0u: goto label_1d7f4f0;
        case 0x1d7f4f4u: goto label_1d7f4f4;
        case 0x1d7f530u: goto label_1d7f530;
        case 0x1d7f570u: goto label_1d7f570;
        case 0x1d7f584u: goto label_1d7f584;
        case 0x1d7f590u: goto label_1d7f590;
        case 0x1d7f59cu: goto label_1d7f59c;
        case 0x1d7f5b0u: goto label_1d7f5b0;
        case 0x1d7f5c8u: goto label_1d7f5c8;
        default: break;
    }

    ctx->pc = 0x1d7f4b8u;

    // 0x1d7f4b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f4bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d7f4bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7f4c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f4c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7f4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f4c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7f4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7f4cc: 0xc75f5d0  jal         func_1D7D740
    ctx->pc = 0x1D7F4CCu;
    SET_GPR_U32(ctx, 31, 0x1D7F4D4u);
    ctx->pc = 0x1D7F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F4CCu;
    // 0x1d7f4d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D740u, 0x1D7F4CCu, 0x1D7F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F4D4u;
label_1d7f4d4:
    // 0x1d7f4d4: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7F4D4u;
    SET_GPR_U32(ctx, 31, 0x1D7F4DCu);
    ctx->pc = 0x1D7F4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F4D4u;
    // 0x1d7f4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7F4D4u, 0x1D7F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F4DCu;
label_1d7f4dc:
    // 0x1d7f4dc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7f4dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f4e0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7F4E0u;
    {
        const bool branch_taken_0x1d7f4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F4E0u;
        // 0x1d7f4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f4e0) {
            ctx->pc = 0x1D7F504u;
            goto label_1d7f504;
        }
    }
    ctx->pc = 0x1D7F4E8u;
    // 0x1d7f4e8: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7F4E8u;
    SET_GPR_U32(ctx, 31, 0x1D7F4F0u);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7F4E8u, 0x1D7F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F4F0u;
label_1d7f4f0:
    // 0x1d7f4f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7f4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7f4f4:
    // 0x1d7f4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f4f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7f4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F4FCu;
        // 0x1d7f500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F504u;
label_1d7f504:
    // 0x1d7f504: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7F504u;
    {
        const bool branch_taken_0x1d7f504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F504u;
        // 0x1d7f508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f504) {
            ctx->pc = 0x1D7F4F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f4f4;
        }
    }
    ctx->pc = 0x1D7F50Cu;
    // 0x1d7f50c: 0x0  nop
    ctx->pc = 0x1d7f50cu;
    // NOP
    // 0x1d7f510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7f514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7f51c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7f520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7f520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f524: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d7f524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d7f528: 0xc75f5d8  jal         func_1D7D760
    ctx->pc = 0x1D7F528u;
    SET_GPR_U32(ctx, 31, 0x1D7F530u);
    ctx->pc = 0x1D7F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F528u;
    // 0x1d7f52c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D760u, 0x1D7F528u, 0x1D7F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F530u;
label_1d7f530:
    // 0x1d7f530: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d7f530u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d7f534: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d7f534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f538: 0x25cefff7  addiu       $t6, $t6, -0x9
    ctx->pc = 0x1d7f538u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
    // 0x1d7f53c: 0x2dcf0017  sltiu       $t7, $t6, 0x17
    ctx->pc = 0x1d7f53cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1d7f540: 0x11e00028  beqz        $t7, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D7F540u;
    {
        const bool branch_taken_0x1d7f540 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F540u;
        // 0x1d7f544: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f540) {
            ctx->pc = 0x1D7F5E4u;
            return;
        }
    }
    ctx->pc = 0x1D7F548u;
    // 0x1d7f548: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d7f548u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d7f54c: 0x3c0e01d8  lui         $t6, 0x1D8
    ctx->pc = 0x1d7f54cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)472 << 16));
    // 0x1d7f550: 0x25ce0b70  addiu       $t6, $t6, 0xB70
    ctx->pc = 0x1d7f550u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2928));
    // 0x1d7f554: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d7f554u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d7f558: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d7f558u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d7f55c: 0x1a00008  jr          $t5
    ctx->pc = 0x1D7F55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7F564u: goto label_1d7f564;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F55Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D7F564u;
label_1d7f564:
    // 0x1d7f564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7f568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f56c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1d7f56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1d7f570:
    // 0x1d7f570: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7f570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f574: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7f574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f578: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d7f578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f57c: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7F57Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F584u);
    ctx->pc = 0x1D7F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F57Cu;
    // 0x1d7f580: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7F57Cu, 0x1D7F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F584u;
label_1d7f584:
    // 0x1d7f584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f588: 0xc75f5da  jal         func_1D7D768
    ctx->pc = 0x1D7F588u;
    SET_GPR_U32(ctx, 31, 0x1D7F590u);
    ctx->pc = 0x1D7F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F588u;
    // 0x1d7f58c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D768u, 0x1D7F588u, 0x1D7F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F590u;
label_1d7f590:
    // 0x1d7f590: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7f594: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F594u;
    SET_GPR_U32(ctx, 31, 0x1D7F59Cu);
    ctx->pc = 0x1D7F598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F594u;
    // 0x1d7f598: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F594u, 0x1D7F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F59Cu;
label_1d7f59c:
    // 0x1d7f59c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d7f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d7f5a0: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d7f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d7f5a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d7f5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f5a8: 0xc75f5dc  jal         func_1D7D770
    ctx->pc = 0x1D7F5A8u;
    SET_GPR_U32(ctx, 31, 0x1D7F5B0u);
    ctx->pc = 0x1D7F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F5A8u;
    // 0x1d7f5ac: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D770u, 0x1D7F5A8u, 0x1D7F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F5B0u;
label_1d7f5b0:
    // 0x1d7f5b0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7f5b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f5b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d7f5b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7f5b8: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d7f5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d7f5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f5c0: 0xc75f5d0  jal         func_1D7D740
    ctx->pc = 0x1D7F5C0u;
    SET_GPR_U32(ctx, 31, 0x1D7F5C8u);
    ctx->pc = 0x1D7F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F5C0u;
    // 0x1d7f5c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D740u, 0x1D7F5C0u, 0x1D7F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F5C8u;
label_1d7f5c8:
    // 0x1d7f5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f5cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7f5ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f5d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f5d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f5d4: 0x240500a3  addiu       $a1, $zero, 0xA3
    ctx->pc = 0x1d7f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x1d7f5d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7f5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f5dc: 0x875f5de  j           func_1D7D778
    ctx->pc = 0x1D7F5DCu;
    ctx->pc = 0x1D7F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F5DCu;
    // 0x1d7f5e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D778u;
    sub_01D7D778_0x1d7d778(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7F5E4u;
}
