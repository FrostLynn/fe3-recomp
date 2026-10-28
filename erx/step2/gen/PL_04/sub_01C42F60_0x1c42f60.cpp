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

// Function: sub_01C42F60
// Address: 0x1c42f60 - 0x1c43070
void sub_01C42F60_0x1c42f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42F60_0x1c42f60");
#endif

    switch (ctx->pc) {
        case 0x1c42f7cu: goto label_1c42f7c;
        case 0x1c42f84u: goto label_1c42f84;
        case 0x1c42f98u: goto label_1c42f98;
        case 0x1c42f9cu: goto label_1c42f9c;
        case 0x1c42ff4u: goto label_1c42ff4;
        case 0x1c43004u: goto label_1c43004;
        case 0x1c43018u: goto label_1c43018;
        case 0x1c4302cu: goto label_1c4302c;
        case 0x1c4303cu: goto label_1c4303c;
        default: break;
    }

    ctx->pc = 0x1c42f60u;

    // 0x1c42f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c42f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c42f64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c42f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c42f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c42f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c42f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c42f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42f70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c42f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c42f74: 0xc710910  jal         func_1C42440
    ctx->pc = 0x1C42F74u;
    SET_GPR_U32(ctx, 31, 0x1C42F7Cu);
    ctx->pc = 0x1C42F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42F74u;
    // 0x1c42f78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42440u, 0x1C42F74u, 0x1C42F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42F7Cu;
label_1c42f7c:
    // 0x1c42f7c: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C42F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C42F84u);
    ctx->pc = 0x1C42F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42F7Cu;
    // 0x1c42f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C42F7Cu, 0x1C42F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42F84u;
label_1c42f84:
    // 0x1c42f84: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c42f84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c42f88: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C42F88u;
    {
        const bool branch_taken_0x1c42f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C42F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42F88u;
        // 0x1c42f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42f88) {
            ctx->pc = 0x1C42FACu;
            goto label_1c42fac;
        }
    }
    ctx->pc = 0x1C42F90u;
    // 0x1c42f90: 0xc710914  jal         func_1C42450
    ctx->pc = 0x1C42F90u;
    SET_GPR_U32(ctx, 31, 0x1C42F98u);
    ctx->pc = 0x1C42450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42450u, 0x1C42F90u, 0x1C42F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42F98u;
label_1c42f98:
    // 0x1c42f98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c42f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c42f9c:
    // 0x1c42f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c42f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c42fa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c42fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c42fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C42FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C42FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42FA4u;
        // 0x1c42fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C42FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C42FACu;
label_1c42fac:
    // 0x1c42fac: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C42FACu;
    {
        const bool branch_taken_0x1c42fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C42FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42FACu;
        // 0x1c42fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42fac) {
            ctx->pc = 0x1C42F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c42f9c;
        }
    }
    ctx->pc = 0x1C42FB4u;
    // 0x1c42fb4: 0x0  nop
    ctx->pc = 0x1c42fb4u;
    // NOP
    // 0x1c42fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c42fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c42fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c42fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c42fc0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c42fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c42fc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c42fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c42fc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c42fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42fcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c42fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c42fd0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c42fd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42fd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c42fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c42fd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c42fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c42fdc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c42fdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c42fe0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c42fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c42fe4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c42fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c42fe8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c42fe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42fec: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C42FECu;
    SET_GPR_U32(ctx, 31, 0x1C42FF4u);
    ctx->pc = 0x1C42FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42FECu;
    // 0x1c42ff0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C42FECu, 0x1C42FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42FF4u;
label_1c42ff4:
    // 0x1c42ff4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c42ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c42ff8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c42ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42ffc: 0xc710918  jal         func_1C42460
    ctx->pc = 0x1C42FFCu;
    SET_GPR_U32(ctx, 31, 0x1C43004u);
    ctx->pc = 0x1C43000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42FFCu;
    // 0x1c43000: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42460u, 0x1C42FFCu, 0x1C43004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43004u;
label_1c43004:
    // 0x1c43004: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c43004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c43008: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c43008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4300c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43010: 0xc71091a  jal         func_1C42468
    ctx->pc = 0x1C43010u;
    SET_GPR_U32(ctx, 31, 0x1C43018u);
    ctx->pc = 0x1C43014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43010u;
    // 0x1c43014: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42468u, 0x1C43010u, 0x1C43018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43018u;
label_1c43018:
    // 0x1c43018: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c43018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c4301c: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c4301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c43020: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c43020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43024: 0xc71091c  jal         func_1C42470
    ctx->pc = 0x1C43024u;
    SET_GPR_U32(ctx, 31, 0x1C4302Cu);
    ctx->pc = 0x1C43028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43024u;
    // 0x1c43028: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42470u, 0x1C43024u, 0x1C4302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4302Cu;
label_1c4302c:
    // 0x1c4302c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c4302cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c43030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c43030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43034: 0xc710910  jal         func_1C42440
    ctx->pc = 0x1C43034u;
    SET_GPR_U32(ctx, 31, 0x1C4303Cu);
    ctx->pc = 0x1C43038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43034u;
    // 0x1c43038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42440u, 0x1C43034u, 0x1C4303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4303Cu;
label_1c4303c:
    // 0x1c4303c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c4303cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c43040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c43040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43044: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c43044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c43048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4304c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4304cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c43050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c43050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c43054: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c43054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c43058: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c43058u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4305c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c4305cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c43060: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c43060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c43064: 0x871091e  j           func_1C42478
    ctx->pc = 0x1C43064u;
    ctx->pc = 0x1C43068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43064u;
    // 0x1c43068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42478u;
    sub_01C42478_0x1c42478(rdram, ctx, runtime); return;
    ctx->pc = 0x1C4306Cu;
    // 0x1c4306c: 0x0  nop
    ctx->pc = 0x1c4306cu;
    // NOP
    ctx->pc = 0x1c43070u;
}
