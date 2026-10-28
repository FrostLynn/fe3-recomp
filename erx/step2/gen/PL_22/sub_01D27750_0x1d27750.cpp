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

// Function: sub_01D27750
// Address: 0x1d27750 - 0x1d27860
void sub_01D27750_0x1d27750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27750_0x1d27750");
#endif

    switch (ctx->pc) {
        case 0x1d2776cu: goto label_1d2776c;
        case 0x1d27774u: goto label_1d27774;
        case 0x1d27788u: goto label_1d27788;
        case 0x1d2778cu: goto label_1d2778c;
        case 0x1d277e4u: goto label_1d277e4;
        case 0x1d277f4u: goto label_1d277f4;
        case 0x1d27808u: goto label_1d27808;
        case 0x1d2781cu: goto label_1d2781c;
        case 0x1d2782cu: goto label_1d2782c;
        default: break;
    }

    ctx->pc = 0x1d27750u;

    // 0x1d27750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d27750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d27754: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d27754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d27758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d27758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d2775c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27760: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d27760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d27764: 0xc749b14  jal         func_1D26C50
    ctx->pc = 0x1D27764u;
    SET_GPR_U32(ctx, 31, 0x1D2776Cu);
    ctx->pc = 0x1D27768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27764u;
    // 0x1d27768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C50u, 0x1D27764u, 0x1D2776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2776Cu;
label_1d2776c:
    // 0x1d2776c: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D2776Cu;
    SET_GPR_U32(ctx, 31, 0x1D27774u);
    ctx->pc = 0x1D27770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2776Cu;
    // 0x1d27770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D2776Cu, 0x1D27774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27774u;
label_1d27774:
    // 0x1d27774: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d27774u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27778: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D27778u;
    {
        const bool branch_taken_0x1d27778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D2777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27778u;
        // 0x1d2777c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27778) {
            ctx->pc = 0x1D2779Cu;
            goto label_1d2779c;
        }
    }
    ctx->pc = 0x1D27780u;
    // 0x1d27780: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D27780u;
    SET_GPR_U32(ctx, 31, 0x1D27788u);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D27780u, 0x1D27788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27788u;
label_1d27788:
    // 0x1d27788: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d27788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d2778c:
    // 0x1d2778c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2778cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27790: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d27790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d27794: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27794u;
        // 0x1d27798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2779Cu;
label_1d2779c:
    // 0x1d2779c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D2779Cu;
    {
        const bool branch_taken_0x1d2779c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D277A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2779Cu;
        // 0x1d277a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2779c) {
            ctx->pc = 0x1D2778Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2778c;
        }
    }
    ctx->pc = 0x1D277A4u;
    // 0x1d277a4: 0x0  nop
    ctx->pc = 0x1d277a4u;
    // NOP
    // 0x1d277a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d277a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d277ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d277acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d277b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d277b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d277b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d277b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d277b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d277b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d277bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d277bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d277c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d277c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d277c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d277c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d277c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d277c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d277cc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d277ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d277d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d277d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d277d4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d277d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d277d8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d277d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d277dc: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D277DCu;
    SET_GPR_U32(ctx, 31, 0x1D277E4u);
    ctx->pc = 0x1D277E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D277DCu;
    // 0x1d277e0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D277DCu, 0x1D277E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D277E4u;
label_1d277e4:
    // 0x1d277e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d277e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d277e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d277e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d277ec: 0xc749b1c  jal         func_1D26C70
    ctx->pc = 0x1D277ECu;
    SET_GPR_U32(ctx, 31, 0x1D277F4u);
    ctx->pc = 0x1D277F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D277ECu;
    // 0x1d277f0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C70u, 0x1D277ECu, 0x1D277F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D277F4u;
label_1d277f4:
    // 0x1d277f4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d277f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d277f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d277f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d277fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d277fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27800: 0xc749b1e  jal         func_1D26C78
    ctx->pc = 0x1D27800u;
    SET_GPR_U32(ctx, 31, 0x1D27808u);
    ctx->pc = 0x1D27804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27800u;
    // 0x1d27804: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C78u, 0x1D27800u, 0x1D27808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27808u;
label_1d27808:
    // 0x1d27808: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d27808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d2780c: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d2780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d27810: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d27810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27814: 0xc749b20  jal         func_1D26C80
    ctx->pc = 0x1D27814u;
    SET_GPR_U32(ctx, 31, 0x1D2781Cu);
    ctx->pc = 0x1D27818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27814u;
    // 0x1d27818: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C80u, 0x1D27814u, 0x1D2781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2781Cu;
label_1d2781c:
    // 0x1d2781c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2781cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d27820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d27820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27824: 0xc749b14  jal         func_1D26C50
    ctx->pc = 0x1D27824u;
    SET_GPR_U32(ctx, 31, 0x1D2782Cu);
    ctx->pc = 0x1D27828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27824u;
    // 0x1d27828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C50u, 0x1D27824u, 0x1D2782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2782Cu;
label_1d2782c:
    // 0x1d2782c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d2782cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d27830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d27830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27834: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d27834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d27838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2783c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d2783cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d27840: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d27840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d27844: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d27844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d27848: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d27848u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2784c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d2784cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d27850: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d27850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d27854: 0x8749b22  j           func_1D26C88
    ctx->pc = 0x1D27854u;
    ctx->pc = 0x1D27858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27854u;
    // 0x1d27858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C88u;
    sub_01D26C88_0x1d26c88(rdram, ctx, runtime); return;
    ctx->pc = 0x1D2785Cu;
    // 0x1d2785c: 0x0  nop
    ctx->pc = 0x1d2785cu;
    // NOP
    ctx->pc = 0x1d27860u;
}
