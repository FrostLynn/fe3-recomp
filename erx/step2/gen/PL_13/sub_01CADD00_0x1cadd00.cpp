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

// Function: sub_01CADD00
// Address: 0x1cadd00 - 0x1cade2c
void sub_01CADD00_0x1cadd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CADD00_0x1cadd00");
#endif

    switch (ctx->pc) {
        case 0x1cadd1cu: goto label_1cadd1c;
        case 0x1cadd24u: goto label_1cadd24;
        case 0x1cadd38u: goto label_1cadd38;
        case 0x1cadd40u: goto label_1cadd40;
        case 0x1cadd44u: goto label_1cadd44;
        case 0x1cadd80u: goto label_1cadd80;
        case 0x1caddc0u: goto label_1caddc0;
        case 0x1caddd4u: goto label_1caddd4;
        case 0x1cadde0u: goto label_1cadde0;
        case 0x1caddecu: goto label_1caddec;
        case 0x1cade00u: goto label_1cade00;
        case 0x1cade10u: goto label_1cade10;
        default: break;
    }

    ctx->pc = 0x1cadd00u;

    // 0x1cadd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cadd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cadd04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cadd04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cadd08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cadd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cadd0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cadd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadd10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cadd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cadd14: 0xc72b446  jal         func_1CAD118
    ctx->pc = 0x1CADD14u;
    SET_GPR_U32(ctx, 31, 0x1CADD1Cu);
    ctx->pc = 0x1CADD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADD14u;
    // 0x1cadd18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD118u, 0x1CADD14u, 0x1CADD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADD1Cu;
label_1cadd1c:
    // 0x1cadd1c: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CADD1Cu;
    SET_GPR_U32(ctx, 31, 0x1CADD24u);
    ctx->pc = 0x1CADD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADD1Cu;
    // 0x1cadd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CADD1Cu, 0x1CADD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADD24u;
label_1cadd24:
    // 0x1cadd24: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cadd24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cadd28: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CADD28u;
    {
        const bool branch_taken_0x1cadd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CADD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADD28u;
        // 0x1cadd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadd28) {
            ctx->pc = 0x1CADD54u;
            goto label_1cadd54;
        }
    }
    ctx->pc = 0x1CADD30u;
    // 0x1cadd30: 0xc72b460  jal         func_1CAD180
    ctx->pc = 0x1CADD30u;
    SET_GPR_U32(ctx, 31, 0x1CADD38u);
    ctx->pc = 0x1CAD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD180u, 0x1CADD30u, 0x1CADD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADD38u;
label_1cadd38:
    // 0x1cadd38: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CADD38u;
    SET_GPR_U32(ctx, 31, 0x1CADD40u);
    ctx->pc = 0x1CADD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADD38u;
    // 0x1cadd3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CADD38u, 0x1CADD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADD40u;
label_1cadd40:
    // 0x1cadd40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cadd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cadd44:
    // 0x1cadd44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cadd44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cadd48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cadd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cadd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CADD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CADD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADD4Cu;
        // 0x1cadd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CADD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CADD54u;
label_1cadd54:
    // 0x1cadd54: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CADD54u;
    {
        const bool branch_taken_0x1cadd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADD54u;
        // 0x1cadd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadd54) {
            ctx->pc = 0x1CADD44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cadd44;
        }
    }
    ctx->pc = 0x1CADD5Cu;
    // 0x1cadd5c: 0x0  nop
    ctx->pc = 0x1cadd5cu;
    // NOP
    // 0x1cadd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cadd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cadd64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cadd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cadd68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cadd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cadd6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cadd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cadd70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cadd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadd74: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cadd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cadd78: 0xc72b44e  jal         func_1CAD138
    ctx->pc = 0x1CADD78u;
    SET_GPR_U32(ctx, 31, 0x1CADD80u);
    ctx->pc = 0x1CADD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADD78u;
    // 0x1cadd7c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD138u, 0x1CADD78u, 0x1CADD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADD80u;
label_1cadd80:
    // 0x1cadd80: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1cadd80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cadd84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cadd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadd88: 0x25cefff7  addiu       $t6, $t6, -0x9
    ctx->pc = 0x1cadd88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
    // 0x1cadd8c: 0x2dcf0017  sltiu       $t7, $t6, 0x17
    ctx->pc = 0x1cadd8cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1cadd90: 0x11e00032  beqz        $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CADD90u;
    {
        const bool branch_taken_0x1cadd90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADD90u;
        // 0x1cadd94: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadd90) {
            ctx->pc = 0x1CADE5Cu;
            return;
        }
    }
    ctx->pc = 0x1CADD98u;
    // 0x1cadd98: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1cadd98u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1cadd9c: 0x3c0e01cb  lui         $t6, 0x1CB
    ctx->pc = 0x1cadd9cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)459 << 16));
    // 0x1cadda0: 0x25cef528  addiu       $t6, $t6, -0xAD8
    ctx->pc = 0x1cadda0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964520));
    // 0x1cadda4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cadda4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cadda8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cadda8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1caddac: 0x1a00008  jr          $t5
    ctx->pc = 0x1CADDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CADDB4u: goto label_1caddb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CADDACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CADDB4u;
label_1caddb4:
    // 0x1caddb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caddb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caddb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1caddb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caddbc: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x1caddbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1caddc0:
    // 0x1caddc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1caddc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caddc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caddc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caddc8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1caddc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caddcc: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CADDCCu;
    SET_GPR_U32(ctx, 31, 0x1CADDD4u);
    ctx->pc = 0x1CADDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADDCCu;
    // 0x1caddd0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CADDCCu, 0x1CADDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADDD4u;
label_1caddd4:
    // 0x1caddd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caddd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caddd8: 0xc72b450  jal         func_1CAD140
    ctx->pc = 0x1CADDD8u;
    SET_GPR_U32(ctx, 31, 0x1CADDE0u);
    ctx->pc = 0x1CADDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADDD8u;
    // 0x1cadddc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD140u, 0x1CADDD8u, 0x1CADDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADDE0u;
label_1cadde0:
    // 0x1cadde0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cadde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cadde4: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CADDE4u;
    SET_GPR_U32(ctx, 31, 0x1CADDECu);
    ctx->pc = 0x1CADDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADDE4u;
    // 0x1cadde8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CADDE4u, 0x1CADDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADDECu;
label_1caddec:
    // 0x1caddec: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1caddecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1caddf0: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1caddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1caddf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1caddf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caddf8: 0xc72b452  jal         func_1CAD148
    ctx->pc = 0x1CADDF8u;
    SET_GPR_U32(ctx, 31, 0x1CADE00u);
    ctx->pc = 0x1CADDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADDF8u;
    // 0x1caddfc: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD148u, 0x1CADDF8u, 0x1CADE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADE00u;
label_1cade00:
    // 0x1cade00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cade00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cade04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cade04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade08: 0xc72b446  jal         func_1CAD118
    ctx->pc = 0x1CADE08u;
    SET_GPR_U32(ctx, 31, 0x1CADE10u);
    ctx->pc = 0x1CADE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADE08u;
    // 0x1cade0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD118u, 0x1CADE08u, 0x1CADE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADE10u;
label_1cade10:
    // 0x1cade10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cade10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cade14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cade18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cade18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cade1c: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x1cade1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1cade20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cade20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cade24: 0x872b454  j           func_1CAD150
    ctx->pc = 0x1CADE24u;
    ctx->pc = 0x1CADE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADE24u;
    // 0x1cade28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD150u;
    sub_01CAD150_0x1cad150(rdram, ctx, runtime); return;
    ctx->pc = 0x1CADE2Cu;
}
