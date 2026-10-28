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

// Function: sub_01CCDF28
// Address: 0x1ccdf28 - 0x1cce038
void sub_01CCDF28_0x1ccdf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDF28_0x1ccdf28");
#endif

    switch (ctx->pc) {
        case 0x1ccdf44u: goto label_1ccdf44;
        case 0x1ccdf4cu: goto label_1ccdf4c;
        case 0x1ccdf60u: goto label_1ccdf60;
        case 0x1ccdf64u: goto label_1ccdf64;
        case 0x1ccdfbcu: goto label_1ccdfbc;
        case 0x1ccdfccu: goto label_1ccdfcc;
        case 0x1ccdfe0u: goto label_1ccdfe0;
        case 0x1ccdff4u: goto label_1ccdff4;
        case 0x1cce004u: goto label_1cce004;
        default: break;
    }

    ctx->pc = 0x1ccdf28u;

    // 0x1ccdf28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccdf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccdf2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ccdf2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccdf30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccdf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccdf34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccdf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdf38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccdf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccdf3c: 0xc733510  jal         func_1CCD440
    ctx->pc = 0x1CCDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CCDF44u);
    ctx->pc = 0x1CCDF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDF3Cu;
    // 0x1ccdf40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD440u, 0x1CCDF3Cu, 0x1CCDF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDF44u;
label_1ccdf44:
    // 0x1ccdf44: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCDF44u;
    SET_GPR_U32(ctx, 31, 0x1CCDF4Cu);
    ctx->pc = 0x1CCDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDF44u;
    // 0x1ccdf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCDF44u, 0x1CCDF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDF4Cu;
label_1ccdf4c:
    // 0x1ccdf4c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccdf4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccdf50: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCDF50u;
    {
        const bool branch_taken_0x1ccdf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CCDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDF50u;
        // 0x1ccdf54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdf50) {
            ctx->pc = 0x1CCDF74u;
            goto label_1ccdf74;
        }
    }
    ctx->pc = 0x1CCDF58u;
    // 0x1ccdf58: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCDF58u;
    SET_GPR_U32(ctx, 31, 0x1CCDF60u);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCDF58u, 0x1CCDF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDF60u;
label_1ccdf60:
    // 0x1ccdf60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ccdf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ccdf64:
    // 0x1ccdf64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccdf64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccdf68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccdf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccdf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCDF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCDF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDF6Cu;
        // 0x1ccdf70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCDF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCDF74u;
label_1ccdf74:
    // 0x1ccdf74: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CCDF74u;
    {
        const bool branch_taken_0x1ccdf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDF74u;
        // 0x1ccdf78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdf74) {
            ctx->pc = 0x1CCDF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccdf64;
        }
    }
    ctx->pc = 0x1CCDF7Cu;
    // 0x1ccdf7c: 0x0  nop
    ctx->pc = 0x1ccdf7cu;
    // NOP
    // 0x1ccdf80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ccdf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ccdf84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccdf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccdf88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ccdf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ccdf8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ccdf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ccdf90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccdf90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdf94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccdf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccdf98: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ccdf98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdf9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ccdf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ccdfa0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ccdfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ccdfa4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1ccdfa4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1ccdfa8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ccdfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ccdfac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ccdfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ccdfb0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ccdfb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdfb4: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCDFB4u;
    SET_GPR_U32(ctx, 31, 0x1CCDFBCu);
    ctx->pc = 0x1CCDFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDFB4u;
    // 0x1ccdfb8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCDFB4u, 0x1CCDFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDFBCu;
label_1ccdfbc:
    // 0x1ccdfbc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccdfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccdfc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ccdfc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdfc4: 0xc733518  jal         func_1CCD460
    ctx->pc = 0x1CCDFC4u;
    SET_GPR_U32(ctx, 31, 0x1CCDFCCu);
    ctx->pc = 0x1CCDFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDFC4u;
    // 0x1ccdfc8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD460u, 0x1CCDFC4u, 0x1CCDFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDFCCu;
label_1ccdfcc:
    // 0x1ccdfcc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ccdfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ccdfd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ccdfd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdfd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccdfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdfd8: 0xc73351a  jal         func_1CCD468
    ctx->pc = 0x1CCDFD8u;
    SET_GPR_U32(ctx, 31, 0x1CCDFE0u);
    ctx->pc = 0x1CCDFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDFD8u;
    // 0x1ccdfdc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD468u, 0x1CCDFD8u, 0x1CCDFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDFE0u;
label_1ccdfe0:
    // 0x1ccdfe0: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1ccdfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1ccdfe4: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1ccdfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1ccdfe8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ccdfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdfec: 0xc73351c  jal         func_1CCD470
    ctx->pc = 0x1CCDFECu;
    SET_GPR_U32(ctx, 31, 0x1CCDFF4u);
    ctx->pc = 0x1CCDFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDFECu;
    // 0x1ccdff0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD470u, 0x1CCDFECu, 0x1CCDFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDFF4u;
label_1ccdff4:
    // 0x1ccdff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ccdff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccdff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccdff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdffc: 0xc733510  jal         func_1CCD440
    ctx->pc = 0x1CCDFFCu;
    SET_GPR_U32(ctx, 31, 0x1CCE004u);
    ctx->pc = 0x1CCE000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDFFCu;
    // 0x1cce000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD440u, 0x1CCDFFCu, 0x1CCE004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE004u;
label_1cce004:
    // 0x1cce004: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1cce004u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cce008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cce008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce00c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cce00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cce014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cce018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cce01c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cce01cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cce020: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cce020u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cce024: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cce024u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cce028: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cce028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cce02c: 0x873351e  j           func_1CCD478
    ctx->pc = 0x1CCE02Cu;
    ctx->pc = 0x1CCE030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE02Cu;
    // 0x1cce030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD478u;
    sub_01CCD478_0x1ccd478(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCE034u;
    // 0x1cce034: 0x0  nop
    ctx->pc = 0x1cce034u;
    // NOP
    ctx->pc = 0x1cce038u;
}
