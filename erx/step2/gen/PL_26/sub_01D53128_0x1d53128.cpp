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

// Function: sub_01D53128
// Address: 0x1d53128 - 0x1d53300
void sub_01D53128_0x1d53128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53128_0x1d53128");
#endif

    switch (ctx->pc) {
        case 0x1d5314cu: goto label_1d5314c;
        case 0x1d53164u: goto label_1d53164;
        case 0x1d53168u: goto label_1d53168;
        case 0x1d53188u: goto label_1d53188;
        case 0x1d53198u: goto label_1d53198;
        case 0x1d531d0u: goto label_1d531d0;
        case 0x1d531d4u: goto label_1d531d4;
        case 0x1d53210u: goto label_1d53210;
        case 0x1d53220u: goto label_1d53220;
        case 0x1d53264u: goto label_1d53264;
        case 0x1d532b4u: goto label_1d532b4;
        case 0x1d532c0u: goto label_1d532c0;
        case 0x1d532d4u: goto label_1d532d4;
        case 0x1d532ecu: goto label_1d532ec;
        default: break;
    }

    ctx->pc = 0x1d53128u;

    // 0x1d53128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d53128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5312c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5312cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d53130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d53134: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d53134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d53138: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d53138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5313c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d5313cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d53140: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d53140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d53144: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D53144u;
    SET_GPR_U32(ctx, 31, 0x1D5314Cu);
    ctx->pc = 0x1D53148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53144u;
    // 0x1d53148: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D53144u, 0x1D5314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5314Cu;
label_1d5314c:
    // 0x1d5314c: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d5314cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d53150: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D53150u;
    {
        const bool branch_taken_0x1d53150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53150u;
        // 0x1d53154: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53150) {
            ctx->pc = 0x1D531A0u;
            goto label_1d531a0;
        }
    }
    ctx->pc = 0x1D53158u;
    // 0x1d53158: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d53158u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5315c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5315Cu;
    {
        const bool branch_taken_0x1d5315c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d5315c) {
            ctx->pc = 0x1D53180u;
            goto label_1d53180;
        }
    }
    ctx->pc = 0x1D53164u;
label_1d53164:
    // 0x1d53164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d53164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d53168:
    // 0x1d53168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5316c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5316cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53170: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d53170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d53174: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d53174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d53178: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53178u;
        // 0x1d5317c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53180u;
label_1d53180:
    // 0x1d53180: 0xc7543d2  jal         func_1D50F48
    ctx->pc = 0x1D53180u;
    SET_GPR_U32(ctx, 31, 0x1D53188u);
    ctx->pc = 0x1D53184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53180u;
    // 0x1d53184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F48u, 0x1D53180u, 0x1D53188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53188u;
label_1d53188:
    // 0x1d53188: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D53188u;
    {
        const bool branch_taken_0x1d53188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d53188) {
            ctx->pc = 0x1D5318Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53188u;
            // 0x1d5318c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D53168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53168;
        }
    }
    ctx->pc = 0x1D53190u;
    // 0x1d53190: 0xc7543d4  jal         func_1D50F50
    ctx->pc = 0x1D53190u;
    SET_GPR_U32(ctx, 31, 0x1D53198u);
    ctx->pc = 0x1D53194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53190u;
    // 0x1d53194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F50u, 0x1D53190u, 0x1D53198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53198u;
label_1d53198:
    // 0x1d53198: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D53198u;
    {
        const bool branch_taken_0x1d53198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53198u;
        // 0x1d5319c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53198) {
            ctx->pc = 0x1D53168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53168;
        }
    }
    ctx->pc = 0x1D531A0u;
label_1d531a0:
    // 0x1d531a0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1d531a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d531a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d531a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d531a8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d531a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d531ac: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1d531acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d531b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d531b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d531b4: 0x11cf0019  beq         $t6, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D531B4u;
    {
        const bool branch_taken_0x1d531b4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D531B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D531B4u;
        // 0x1d531b8: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d531b4) {
            ctx->pc = 0x1D5321Cu;
            goto label_1d5321c;
        }
    }
    ctx->pc = 0x1D531BCu;
    // 0x1d531bc: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1d531bcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d531c0: 0x11e0002d  beqz        $t7, . + 4 + (0x2D << 2)
    ctx->pc = 0x1D531C0u;
    {
        const bool branch_taken_0x1d531c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D531C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D531C0u;
        // 0x1d531c4: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d531c0) {
            ctx->pc = 0x1D53278u;
            goto label_1d53278;
        }
    }
    ctx->pc = 0x1D531C8u;
    // 0x1d531c8: 0x11c00015  beqz        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D531C8u;
    {
        const bool branch_taken_0x1d531c8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D531CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D531C8u;
        // 0x1d531cc: 0x44806800  mtc1        $zero, $f13 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d531c8) {
            ctx->pc = 0x1D53220u;
            goto label_1d53220;
        }
    }
    ctx->pc = 0x1D531D0u;
label_1d531d0:
    // 0x1d531d0: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1d531d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1d531d4:
    // 0x1d531d4: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D531D4u;
    {
        const bool branch_taken_0x1d531d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D531D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D531D4u;
        // 0x1d531d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d531d4) {
            ctx->pc = 0x1D53168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53168;
        }
    }
    ctx->pc = 0x1D531DCu;
    // 0x1d531dc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d531dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d531e0: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x1d531e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x1d531e4: 0x25ce62d0  addiu       $t6, $t6, 0x62D0
    ctx->pc = 0x1d531e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 25296));
    // 0x1d531e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d531e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d531ec: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d531ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d531f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d531f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d531f4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d531f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d531f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d531f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d531fc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d531fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d53200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d53200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53204: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d53204u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d53208: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D53208u;
    SET_GPR_U32(ctx, 31, 0x1D53210u);
    ctx->pc = 0x1D5320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53208u;
    // 0x1d5320c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D53208u, 0x1D53210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53210u;
label_1d53210:
    // 0x1d53210: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d53210u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d53214: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D53214u;
    {
        const bool branch_taken_0x1d53214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53214u;
        // 0x1d53218: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53214) {
            ctx->pc = 0x1D53164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53164;
        }
    }
    ctx->pc = 0x1D5321Cu;
label_1d5321c:
    // 0x1d5321c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d5321cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d53220:
    // 0x1d53220: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x1d53220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d53224: 0x4500ffea  bc1f        . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D53224u;
    {
        const bool branch_taken_0x1d53224 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D53228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53224u;
        // 0x1d53228: 0x3c0f01d6  lui         $t7, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53224) {
            ctx->pc = 0x1D531D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d531d0;
        }
    }
    ctx->pc = 0x1D5322Cu;
    // 0x1d5322c: 0x25efcbd8  addiu       $t7, $t7, -0x3428
    ctx->pc = 0x1d5322cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953944));
    // 0x1d53230: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d53230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d53234: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d53234u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d53238: 0x4503ffe6  bc1tl       . + 4 + (-0x1A << 2)
    ctx->pc = 0x1D53238u;
    {
        const bool branch_taken_0x1d53238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d53238) {
            ctx->pc = 0x1D5323Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53238u;
            // 0x1d5323c: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D531D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d531d4;
        }
    }
    ctx->pc = 0x1D53240u;
    // 0x1d53240: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d53240u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d53244: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1d53244u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1d53248: 0x25efcbdc  addiu       $t7, $t7, -0x3424
    ctx->pc = 0x1d53248u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953948));
    // 0x1d5324c: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1d5324cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1d53250: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d53250u;
    { uint32_t bits = FAST_READ32(0x1D5CBDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d53254: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d53254u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d53258: 0x25efcbe0  addiu       $t7, $t7, -0x3420
    ctx->pc = 0x1d53258u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953952));
    // 0x1d5325c: 0xc75466a  jal         func_1D519A8
    ctx->pc = 0x1D5325Cu;
    SET_GPR_U32(ctx, 31, 0x1D53264u);
    ctx->pc = 0x1D53260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5325Cu;
    // 0x1d53260: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D519A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D519A8u, 0x1D5325Cu, 0x1D53264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53264u;
label_1d53264:
    // 0x1d53264: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d53264u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d53268: 0x25efcbe4  addiu       $t7, $t7, -0x341C
    ctx->pc = 0x1d53268u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953956));
    // 0x1d5326c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d5326cu;
    { uint32_t bits = FAST_READ32(0x1D5CBE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d53270: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x1D53270u;
    {
        const bool branch_taken_0x1d53270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53270u;
        // 0x1d53274: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53270) {
            ctx->pc = 0x1D531D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d531d0;
        }
    }
    ctx->pc = 0x1D53278u;
label_1d53278:
    // 0x1d53278: 0x55cfffd6  bnel        $t6, $t7, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D53278u;
    {
        const bool branch_taken_0x1d53278 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1d53278) {
            ctx->pc = 0x1D5327Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53278u;
            // 0x1d5327c: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D531D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d531d4;
        }
    }
    ctx->pc = 0x1D53280u;
    // 0x1d53280: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D53280u;
    {
        const bool branch_taken_0x1d53280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53280u;
        // 0x1d53284: 0x44806800  mtc1        $zero, $f13 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53280) {
            ctx->pc = 0x1D53220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53220;
        }
    }
    ctx->pc = 0x1D53288u;
    // 0x1d53288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d53288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5328c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5328cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d53290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d53294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d53294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53298: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d53298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5329c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5329cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d532a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d532a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d532a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d532a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d532a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d532a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d532ac: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D532ACu;
    SET_GPR_U32(ctx, 31, 0x1D532B4u);
    ctx->pc = 0x1D532B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D532ACu;
    // 0x1d532b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D532ACu, 0x1D532B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D532B4u;
label_1d532b4:
    // 0x1d532b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d532b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d532b8: 0xc7543da  jal         func_1D50F68
    ctx->pc = 0x1D532B8u;
    SET_GPR_U32(ctx, 31, 0x1D532C0u);
    ctx->pc = 0x1D532BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D532B8u;
    // 0x1d532bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F68u, 0x1D532B8u, 0x1D532C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D532C0u;
label_1d532c0:
    // 0x1d532c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d532c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d532c4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d532c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d532c8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d532c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d532cc: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D532CCu;
    SET_GPR_U32(ctx, 31, 0x1D532D4u);
    ctx->pc = 0x1D532D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D532CCu;
    // 0x1d532d0: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D532CCu, 0x1D532D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D532D4u;
label_1d532d4:
    // 0x1d532d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d532d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d532d8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d532d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d532dc: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d532dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d532e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d532e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d532e4: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D532E4u;
    SET_GPR_U32(ctx, 31, 0x1D532ECu);
    ctx->pc = 0x1D532E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D532E4u;
    // 0x1d532e8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D532E4u, 0x1D532ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D532ECu;
label_1d532ec:
    // 0x1d532ec: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d532ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d532f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d532f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d532f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d532f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d532f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D532F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D532FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D532F8u;
        // 0x1d532fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D532F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53300u;
}
