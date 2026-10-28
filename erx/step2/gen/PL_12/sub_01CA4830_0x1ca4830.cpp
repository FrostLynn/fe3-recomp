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

// Function: sub_01CA4830
// Address: 0x1ca4830 - 0x1ca49e0
void sub_01CA4830_0x1ca4830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4830_0x1ca4830");
#endif

    switch (ctx->pc) {
        case 0x1ca4854u: goto label_1ca4854;
        case 0x1ca486cu: goto label_1ca486c;
        case 0x1ca4870u: goto label_1ca4870;
        case 0x1ca4890u: goto label_1ca4890;
        case 0x1ca48a0u: goto label_1ca48a0;
        case 0x1ca48d8u: goto label_1ca48d8;
        case 0x1ca48dcu: goto label_1ca48dc;
        case 0x1ca4918u: goto label_1ca4918;
        case 0x1ca4928u: goto label_1ca4928;
        case 0x1ca496cu: goto label_1ca496c;
        case 0x1ca49bcu: goto label_1ca49bc;
        case 0x1ca49c8u: goto label_1ca49c8;
        default: break;
    }

    ctx->pc = 0x1ca4830u;

    // 0x1ca4830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca4830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca4834: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca4834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca4838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca483c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ca4840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca4840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4844: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ca4844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ca4848: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ca4848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ca484c: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA484Cu;
    SET_GPR_U32(ctx, 31, 0x1CA4854u);
    ctx->pc = 0x1CA4850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA484Cu;
    // 0x1ca4850: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA484Cu, 0x1CA4854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4854u;
label_1ca4854:
    // 0x1ca4854: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1ca4854u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ca4858: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA4858u;
    {
        const bool branch_taken_0x1ca4858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4858u;
        // 0x1ca485c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4858) {
            ctx->pc = 0x1CA48A8u;
            goto label_1ca48a8;
        }
    }
    ctx->pc = 0x1CA4860u;
    // 0x1ca4860: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca4860u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4864: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA4864u;
    {
        const bool branch_taken_0x1ca4864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1ca4864) {
            ctx->pc = 0x1CA4888u;
            goto label_1ca4888;
        }
    }
    ctx->pc = 0x1CA486Cu;
label_1ca486c:
    // 0x1ca486c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca486cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4870:
    // 0x1ca4870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca4870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca4874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4878: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca4878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca487c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ca487cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca4880: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4880u;
        // 0x1ca4884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4888u;
label_1ca4888:
    // 0x1ca4888: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA4888u;
    SET_GPR_U32(ctx, 31, 0x1CA4890u);
    ctx->pc = 0x1CA488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4888u;
    // 0x1ca488c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA4888u, 0x1CA4890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4890u;
label_1ca4890:
    // 0x1ca4890: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CA4890u;
    {
        const bool branch_taken_0x1ca4890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1ca4890) {
            ctx->pc = 0x1CA4894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA4890u;
            // 0x1ca4894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA4870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4870;
        }
    }
    ctx->pc = 0x1CA4898u;
    // 0x1ca4898: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA4898u;
    SET_GPR_U32(ctx, 31, 0x1CA48A0u);
    ctx->pc = 0x1CA489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4898u;
    // 0x1ca489c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA4898u, 0x1CA48A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA48A0u;
label_1ca48a0:
    // 0x1ca48a0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CA48A0u;
    {
        const bool branch_taken_0x1ca48a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA48A0u;
        // 0x1ca48a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca48a0) {
            ctx->pc = 0x1CA4870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4870;
        }
    }
    ctx->pc = 0x1CA48A8u;
label_1ca48a8:
    // 0x1ca48a8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1ca48a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca48ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca48acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca48b0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1ca48b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca48b4: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1ca48b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ca48b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ca48b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ca48bc: 0x11cf0019  beq         $t6, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CA48BCu;
    {
        const bool branch_taken_0x1ca48bc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CA48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA48BCu;
        // 0x1ca48c0: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca48bc) {
            ctx->pc = 0x1CA4924u;
            goto label_1ca4924;
        }
    }
    ctx->pc = 0x1CA48C4u;
    // 0x1ca48c4: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1ca48c4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ca48c8: 0x11e0002d  beqz        $t7, . + 4 + (0x2D << 2)
    ctx->pc = 0x1CA48C8u;
    {
        const bool branch_taken_0x1ca48c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA48C8u;
        // 0x1ca48cc: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca48c8) {
            ctx->pc = 0x1CA4980u;
            goto label_1ca4980;
        }
    }
    ctx->pc = 0x1CA48D0u;
    // 0x1ca48d0: 0x11c00015  beqz        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CA48D0u;
    {
        const bool branch_taken_0x1ca48d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA48D0u;
        // 0x1ca48d4: 0x44806800  mtc1        $zero, $f13 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca48d0) {
            ctx->pc = 0x1CA4928u;
            goto label_1ca4928;
        }
    }
    ctx->pc = 0x1CA48D8u;
label_1ca48d8:
    // 0x1ca48d8: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1ca48d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1ca48dc:
    // 0x1ca48dc: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CA48DCu;
    {
        const bool branch_taken_0x1ca48dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA48DCu;
        // 0x1ca48e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca48dc) {
            ctx->pc = 0x1CA4870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4870;
        }
    }
    ctx->pc = 0x1CA48E4u;
    // 0x1ca48e4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1ca48e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ca48e8: 0x3c0e01ca  lui         $t6, 0x1CA
    ctx->pc = 0x1ca48e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)458 << 16));
    // 0x1ca48ec: 0x25ce6d00  addiu       $t6, $t6, 0x6D00
    ctx->pc = 0x1ca48ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27904));
    // 0x1ca48f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca48f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca48f4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ca48f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ca48f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca48f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca48fc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ca48fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ca4900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca4900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4904: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ca4904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ca4908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca4908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca490c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca490cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4910: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA4910u;
    SET_GPR_U32(ctx, 31, 0x1CA4918u);
    ctx->pc = 0x1CA4914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4910u;
    // 0x1ca4914: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA4910u, 0x1CA4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4918u;
label_1ca4918:
    // 0x1ca4918: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca4918u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca491c: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1CA491Cu;
    {
        const bool branch_taken_0x1ca491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA491Cu;
        // 0x1ca4920: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca491c) {
            ctx->pc = 0x1CA486Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca486c;
        }
    }
    ctx->pc = 0x1CA4924u;
label_1ca4924:
    // 0x1ca4924: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ca4924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ca4928:
    // 0x1ca4928: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x1ca4928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca492c: 0x4500ffea  bc1f        . + 4 + (-0x16 << 2)
    ctx->pc = 0x1CA492Cu;
    {
        const bool branch_taken_0x1ca492c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA492Cu;
        // 0x1ca4930: 0x3c0f01cb  lui         $t7, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca492c) {
            ctx->pc = 0x1CA48D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca48d8;
        }
    }
    ctx->pc = 0x1CA4934u;
    // 0x1ca4934: 0x25efcfd8  addiu       $t7, $t7, -0x3028
    ctx->pc = 0x1ca4934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954968));
    // 0x1ca4938: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1ca4938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca493c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ca493cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca4940: 0x4503ffe6  bc1tl       . + 4 + (-0x1A << 2)
    ctx->pc = 0x1CA4940u;
    {
        const bool branch_taken_0x1ca4940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca4940) {
            ctx->pc = 0x1CA4944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA4940u;
            // 0x1ca4944: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA48DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca48dc;
        }
    }
    ctx->pc = 0x1CA4948u;
    // 0x1ca4948: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1ca4948u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1ca494c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1ca494cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1ca4950: 0x25efcfdc  addiu       $t7, $t7, -0x3024
    ctx->pc = 0x1ca4950u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954972));
    // 0x1ca4954: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1ca4954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1ca4958: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1ca4958u;
    { uint32_t bits = FAST_READ32(0x1CACFDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca495c: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1ca495cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1ca4960: 0x25efcfe0  addiu       $t7, $t7, -0x3020
    ctx->pc = 0x1ca4960u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954976));
    // 0x1ca4964: 0xc728c6a  jal         func_1CA31A8
    ctx->pc = 0x1CA4964u;
    SET_GPR_U32(ctx, 31, 0x1CA496Cu);
    ctx->pc = 0x1CA4968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4964u;
    // 0x1ca4968: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA31A8u, 0x1CA4964u, 0x1CA496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA496Cu;
label_1ca496c:
    // 0x1ca496c: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1ca496cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1ca4970: 0x25efcfe4  addiu       $t7, $t7, -0x301C
    ctx->pc = 0x1ca4970u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954980));
    // 0x1ca4974: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1ca4974u;
    { uint32_t bits = FAST_READ32(0x1CACFE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca4978: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x1CA4978u;
    {
        const bool branch_taken_0x1ca4978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4978u;
        // 0x1ca497c: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4978) {
            ctx->pc = 0x1CA48D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca48d8;
        }
    }
    ctx->pc = 0x1CA4980u;
label_1ca4980:
    // 0x1ca4980: 0x55cfffd6  bnel        $t6, $t7, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1CA4980u;
    {
        const bool branch_taken_0x1ca4980 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1ca4980) {
            ctx->pc = 0x1CA4984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA4980u;
            // 0x1ca4984: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA48DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca48dc;
        }
    }
    ctx->pc = 0x1CA4988u;
    // 0x1ca4988: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1CA4988u;
    {
        const bool branch_taken_0x1ca4988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4988u;
        // 0x1ca498c: 0x44806800  mtc1        $zero, $f13 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4988) {
            ctx->pc = 0x1CA4928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4928;
        }
    }
    ctx->pc = 0x1CA4990u;
    // 0x1ca4990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4994: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca4994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca4998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca499c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca499cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca49a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca49a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca49a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca49a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca49a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca49a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca49ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca49acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca49b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca49b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca49b4: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA49B4u;
    SET_GPR_U32(ctx, 31, 0x1CA49BCu);
    ctx->pc = 0x1CA49B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA49B4u;
    // 0x1ca49b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA49B4u, 0x1CA49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA49BCu;
label_1ca49bc:
    // 0x1ca49bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca49bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca49c0: 0xc7289da  jal         func_1CA2768
    ctx->pc = 0x1CA49C0u;
    SET_GPR_U32(ctx, 31, 0x1CA49C8u);
    ctx->pc = 0x1CA49C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA49C0u;
    // 0x1ca49c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2768u, 0x1CA49C0u, 0x1CA49C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA49C8u;
label_1ca49c8:
    // 0x1ca49c8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ca49c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1ca49cc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ca49ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ca49d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca49d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca49d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca49d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca49d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA49D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA49D8u;
        // 0x1ca49dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA49D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA49E0u;
}
