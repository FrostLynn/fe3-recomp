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

// Function: sub_01CC2F40
// Address: 0x1cc2f40 - 0x1cc3050
void sub_01CC2F40_0x1cc2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2F40_0x1cc2f40");
#endif

    switch (ctx->pc) {
        case 0x1cc2f5cu: goto label_1cc2f5c;
        case 0x1cc2f64u: goto label_1cc2f64;
        case 0x1cc2f78u: goto label_1cc2f78;
        case 0x1cc2f7cu: goto label_1cc2f7c;
        case 0x1cc2fd4u: goto label_1cc2fd4;
        case 0x1cc2fe4u: goto label_1cc2fe4;
        case 0x1cc2ff8u: goto label_1cc2ff8;
        case 0x1cc300cu: goto label_1cc300c;
        case 0x1cc301cu: goto label_1cc301c;
        default: break;
    }

    ctx->pc = 0x1cc2f40u;

    // 0x1cc2f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc2f44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc2f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc2f48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc2f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc2f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc2f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2f50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc2f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc2f54: 0xc730912  jal         func_1CC2448
    ctx->pc = 0x1CC2F54u;
    SET_GPR_U32(ctx, 31, 0x1CC2F5Cu);
    ctx->pc = 0x1CC2F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2F54u;
    // 0x1cc2f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2448u, 0x1CC2F54u, 0x1CC2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2F5Cu;
label_1cc2f5c:
    // 0x1cc2f5c: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC2F5Cu;
    SET_GPR_U32(ctx, 31, 0x1CC2F64u);
    ctx->pc = 0x1CC2F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2F5Cu;
    // 0x1cc2f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC2F5Cu, 0x1CC2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2F64u;
label_1cc2f64:
    // 0x1cc2f64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc2f64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc2f68: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC2F68u;
    {
        const bool branch_taken_0x1cc2f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CC2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2F68u;
        // 0x1cc2f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2f68) {
            ctx->pc = 0x1CC2F8Cu;
            goto label_1cc2f8c;
        }
    }
    ctx->pc = 0x1CC2F70u;
    // 0x1cc2f70: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC2F70u;
    SET_GPR_U32(ctx, 31, 0x1CC2F78u);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC2F70u, 0x1CC2F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2F78u;
label_1cc2f78:
    // 0x1cc2f78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cc2f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cc2f7c:
    // 0x1cc2f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc2f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc2f80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc2f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc2f84: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC2F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2F84u;
        // 0x1cc2f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC2F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC2F8Cu;
label_1cc2f8c:
    // 0x1cc2f8c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CC2F8Cu;
    {
        const bool branch_taken_0x1cc2f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2F8Cu;
        // 0x1cc2f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2f8c) {
            ctx->pc = 0x1CC2F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc2f7c;
        }
    }
    ctx->pc = 0x1CC2F94u;
    // 0x1cc2f94: 0x0  nop
    ctx->pc = 0x1cc2f94u;
    // NOP
    // 0x1cc2f98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc2f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cc2f9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc2f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc2fa0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cc2fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cc2fa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cc2fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cc2fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc2fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2fac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc2facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc2fb0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cc2fb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2fb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc2fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cc2fb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc2fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cc2fbc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1cc2fbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1cc2fc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cc2fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cc2fc4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cc2fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc2fc8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cc2fc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2fcc: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC2FCCu;
    SET_GPR_U32(ctx, 31, 0x1CC2FD4u);
    ctx->pc = 0x1CC2FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2FCCu;
    // 0x1cc2fd0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC2FCCu, 0x1CC2FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2FD4u;
label_1cc2fd4:
    // 0x1cc2fd4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc2fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc2fd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cc2fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2fdc: 0xc73091a  jal         func_1CC2468
    ctx->pc = 0x1CC2FDCu;
    SET_GPR_U32(ctx, 31, 0x1CC2FE4u);
    ctx->pc = 0x1CC2FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2FDCu;
    // 0x1cc2fe0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2468u, 0x1CC2FDCu, 0x1CC2FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2FE4u;
label_1cc2fe4:
    // 0x1cc2fe4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cc2fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cc2fe8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cc2fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc2fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2ff0: 0xc73091c  jal         func_1CC2470
    ctx->pc = 0x1CC2FF0u;
    SET_GPR_U32(ctx, 31, 0x1CC2FF8u);
    ctx->pc = 0x1CC2FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2FF0u;
    // 0x1cc2ff4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2470u, 0x1CC2FF0u, 0x1CC2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2FF8u;
label_1cc2ff8:
    // 0x1cc2ff8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1cc2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1cc2ffc: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1cc2ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1cc3000: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc3000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3004: 0xc73091e  jal         func_1CC2478
    ctx->pc = 0x1CC3004u;
    SET_GPR_U32(ctx, 31, 0x1CC300Cu);
    ctx->pc = 0x1CC3008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3004u;
    // 0x1cc3008: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2478u, 0x1CC3004u, 0x1CC300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC300Cu;
label_1cc300c:
    // 0x1cc300c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc300cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc3010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc3010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3014: 0xc730912  jal         func_1CC2448
    ctx->pc = 0x1CC3014u;
    SET_GPR_U32(ctx, 31, 0x1CC301Cu);
    ctx->pc = 0x1CC3018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3014u;
    // 0x1cc3018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2448u, 0x1CC3014u, 0x1CC301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC301Cu;
label_1cc301c:
    // 0x1cc301c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1cc301cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cc3020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc3020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3024: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cc3024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc302c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc302cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3030: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc3030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc3034: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc3034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc3038: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc3038u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc303c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cc303cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc3040: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cc3040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc3044: 0x8730920  j           func_1CC2480
    ctx->pc = 0x1CC3044u;
    ctx->pc = 0x1CC3048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3044u;
    // 0x1cc3048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2480u;
    sub_01CC2480_0x1cc2480(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC304Cu;
    // 0x1cc304c: 0x0  nop
    ctx->pc = 0x1cc304cu;
    // NOP
    ctx->pc = 0x1cc3050u;
}
