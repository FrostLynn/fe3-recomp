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

// Function: sub_01CC3FE0
// Address: 0x1cc3fe0 - 0x1cc4150
void sub_01CC3FE0_0x1cc3fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC3FE0_0x1cc3fe0");
#endif

    switch (ctx->pc) {
        case 0x1cc4008u: goto label_1cc4008;
        case 0x1cc4028u: goto label_1cc4028;
        case 0x1cc4038u: goto label_1cc4038;
        case 0x1cc4040u: goto label_1cc4040;
        case 0x1cc4044u: goto label_1cc4044;
        case 0x1cc4084u: goto label_1cc4084;
        case 0x1cc40b0u: goto label_1cc40b0;
        case 0x1cc40bcu: goto label_1cc40bc;
        case 0x1cc40c8u: goto label_1cc40c8;
        case 0x1cc40e4u: goto label_1cc40e4;
        case 0x1cc40f8u: goto label_1cc40f8;
        case 0x1cc4104u: goto label_1cc4104;
        case 0x1cc4110u: goto label_1cc4110;
        case 0x1cc4128u: goto label_1cc4128;
        case 0x1cc4134u: goto label_1cc4134;
        default: break;
    }

    ctx->pc = 0x1cc3fe0u;

    // 0x1cc3fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc3fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc3fe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc3fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc3fe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3fec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc3fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc3ff0: 0x8c8e0018  lw          $t6, 0x18($a0)
    ctx->pc = 0x1cc3ff0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1cc3ff4: 0x19c00005  blez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC3FF4u;
    {
        const bool branch_taken_0x1cc3ff4 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x1CC3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3FF4u;
        // 0x1cc3ff8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3ff4) {
            ctx->pc = 0x1CC400Cu;
            goto label_1cc400c;
        }
    }
    ctx->pc = 0x1CC3FFCu;
    // 0x1cc3ffc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc3ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc4000: 0xc730912  jal         func_1CC2448
    ctx->pc = 0x1CC4000u;
    SET_GPR_U32(ctx, 31, 0x1CC4008u);
    ctx->pc = 0x1CC4004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4000u;
    // 0x1cc4004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2448u, 0x1CC4000u, 0x1CC4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4008u;
label_1cc4008:
    // 0x1cc4008: 0x8e2e0018  lw          $t6, 0x18($s1)
    ctx->pc = 0x1cc4008u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1cc400c:
    // 0x1cc400c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x1cc400cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc4010: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1cc4010u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1cc4014: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1cc4014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4018: 0xae2e0018  sw          $t6, 0x18($s1)
    ctx->pc = 0x1cc4018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 14));
    // 0x1cc401c: 0xa1f0039c  sb          $s0, 0x39C($t7)
    ctx->pc = 0x1cc401cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 924), (uint8_t)GPR_U32(ctx, 16));
    // 0x1cc4020: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC4020u;
    SET_GPR_U32(ctx, 31, 0x1CC4028u);
    ctx->pc = 0x1CC4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4020u;
    // 0x1cc4024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC4020u, 0x1CC4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4028u;
label_1cc4028:
    // 0x1cc4028: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CC4028u;
    {
        const bool branch_taken_0x1cc4028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CC402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4028u;
        // 0x1cc402c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4028) {
            ctx->pc = 0x1CC4058u;
            goto label_1cc4058;
        }
    }
    ctx->pc = 0x1CC4030u;
    // 0x1cc4030: 0xc73092e  jal         func_1CC24B8
    ctx->pc = 0x1CC4030u;
    SET_GPR_U32(ctx, 31, 0x1CC4038u);
    ctx->pc = 0x1CC24B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC24B8u, 0x1CC4030u, 0x1CC4038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4038u;
label_1cc4038:
    // 0x1cc4038: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC4038u;
    SET_GPR_U32(ctx, 31, 0x1CC4040u);
    ctx->pc = 0x1CC403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4038u;
    // 0x1cc403c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC4038u, 0x1CC4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4040u;
label_1cc4040:
    // 0x1cc4040: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cc4040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cc4044:
    // 0x1cc4044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc4048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc404c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc404cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc4050: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4050u;
        // 0x1cc4054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4058u;
label_1cc4058:
    // 0x1cc4058: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CC4058u;
    {
        const bool branch_taken_0x1cc4058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4058u;
        // 0x1cc405c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4058) {
            ctx->pc = 0x1CC4044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4044;
        }
    }
    ctx->pc = 0x1CC4060u;
    // 0x1cc4060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc4060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc4064: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cc4064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cc4068: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cc4068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cc406c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cc406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1cc4070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc4070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4074: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cc4074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cc4078: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cc4078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc407c: 0xc73091a  jal         func_1CC2468
    ctx->pc = 0x1CC407Cu;
    SET_GPR_U32(ctx, 31, 0x1CC4084u);
    ctx->pc = 0x1CC4080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC407Cu;
    // 0x1cc4080: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2468u, 0x1CC407Cu, 0x1CC4084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4084u;
label_1cc4084:
    // 0x1cc4084: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cc4084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cc4088: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc4088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc408c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc408cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4090: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cc4090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc4094: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc4094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4098: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cc4098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc409c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc409cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc40a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc40a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc40a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc40a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc40a8: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC40A8u;
    SET_GPR_U32(ctx, 31, 0x1CC40B0u);
    ctx->pc = 0x1CC40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC40A8u;
    // 0x1cc40ac: 0x26520390  addiu       $s2, $s2, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC40A8u, 0x1CC40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC40B0u;
label_1cc40b0:
    // 0x1cc40b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc40b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc40b4: 0xc73091c  jal         func_1CC2470
    ctx->pc = 0x1CC40B4u;
    SET_GPR_U32(ctx, 31, 0x1CC40BCu);
    ctx->pc = 0x1CC40B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC40B4u;
    // 0x1cc40b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2470u, 0x1CC40B4u, 0x1CC40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC40BCu;
label_1cc40bc:
    // 0x1cc40bc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc40bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc40c0: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC40C0u;
    SET_GPR_U32(ctx, 31, 0x1CC40C8u);
    ctx->pc = 0x1CC40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC40C0u;
    // 0x1cc40c4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC40C0u, 0x1CC40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC40C8u;
label_1cc40c8:
    // 0x1cc40c8: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1cc40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1cc40cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cc40ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc40d0: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1cc40d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1cc40d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cc40d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc40d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cc40d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc40dc: 0xc73091e  jal         func_1CC2478
    ctx->pc = 0x1CC40DCu;
    SET_GPR_U32(ctx, 31, 0x1CC40E4u);
    ctx->pc = 0x1CC40E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC40DCu;
    // 0x1cc40e0: 0x240500cf  addiu       $a1, $zero, 0xCF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2478u, 0x1CC40DCu, 0x1CC40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC40E4u;
label_1cc40e4:
    // 0x1cc40e4: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x1cc40e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1cc40e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc40e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc40ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc40ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc40f0: 0xc730912  jal         func_1CC2448
    ctx->pc = 0x1CC40F0u;
    SET_GPR_U32(ctx, 31, 0x1CC40F8u);
    ctx->pc = 0x1CC40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC40F0u;
    // 0x1cc40f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2448u, 0x1CC40F0u, 0x1CC40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC40F8u;
label_1cc40f8:
    // 0x1cc40f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc40f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc40fc: 0xc730920  jal         func_1CC2480
    ctx->pc = 0x1CC40FCu;
    SET_GPR_U32(ctx, 31, 0x1CC4104u);
    ctx->pc = 0x1CC4100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC40FCu;
    // 0x1cc4100: 0x2405006d  addiu       $a1, $zero, 0x6D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2480u, 0x1CC40FCu, 0x1CC4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4104u;
label_1cc4104:
    // 0x1cc4104: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc4104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4108: 0xc730906  jal         func_1CC2418
    ctx->pc = 0x1CC4108u;
    SET_GPR_U32(ctx, 31, 0x1CC4110u);
    ctx->pc = 0x1CC410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4108u;
    // 0x1cc410c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2418u, 0x1CC4108u, 0x1CC4110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4110u;
label_1cc4110:
    // 0x1cc4110: 0x3c0f01cd  lui         $t7, 0x1CD
    ctx->pc = 0x1cc4110u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)461 << 16));
    // 0x1cc4114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc4114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4118: 0x25efd3b8  addiu       $t7, $t7, -0x2C48
    ctx->pc = 0x1cc4118u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955960));
    // 0x1cc411c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc411cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4120: 0xc730908  jal         func_1CC2420
    ctx->pc = 0x1CC4120u;
    SET_GPR_U32(ctx, 31, 0x1CC4128u);
    ctx->pc = 0x1CC4124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4120u;
    // 0x1cc4124: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2420u, 0x1CC4120u, 0x1CC4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4128u;
label_1cc4128:
    // 0x1cc4128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cc4128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc412c: 0xc730bb2  jal         func_1CC2EC8
    ctx->pc = 0x1CC412Cu;
    SET_GPR_U32(ctx, 31, 0x1CC4134u);
    ctx->pc = 0x1CC4130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC412Cu;
    // 0x1cc4130: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2EC8u, 0x1CC412Cu, 0x1CC4134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4134u;
label_1cc4134:
    // 0x1cc4134: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cc4134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc4138: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cc4138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc413c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cc413cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc4140: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cc4140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc4144: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4144u;
        // 0x1cc4148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC414Cu;
    // 0x1cc414c: 0x0  nop
    ctx->pc = 0x1cc414cu;
    // NOP
    ctx->pc = 0x1cc4150u;
}
