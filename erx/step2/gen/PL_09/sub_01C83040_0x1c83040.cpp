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

// Function: sub_01C83040
// Address: 0x1c83040 - 0x1c83378
void sub_01C83040_0x1c83040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C83040_0x1c83040");
#endif

    switch (ctx->pc) {
        case 0x1c83064u: goto label_1c83064;
        case 0x1c8307cu: goto label_1c8307c;
        case 0x1c83080u: goto label_1c83080;
        case 0x1c830a0u: goto label_1c830a0;
        case 0x1c830b0u: goto label_1c830b0;
        case 0x1c830e8u: goto label_1c830e8;
        case 0x1c830ecu: goto label_1c830ec;
        case 0x1c83114u: goto label_1c83114;
        case 0x1c83164u: goto label_1c83164;
        case 0x1c8316cu: goto label_1c8316c;
        case 0x1c831d0u: goto label_1c831d0;
        case 0x1c83248u: goto label_1c83248;
        case 0x1c8326cu: goto label_1c8326c;
        case 0x1c83278u: goto label_1c83278;
        case 0x1c832c0u: goto label_1c832c0;
        case 0x1c832e8u: goto label_1c832e8;
        case 0x1c83324u: goto label_1c83324;
        case 0x1c8334cu: goto label_1c8334c;
        default: break;
    }

    ctx->pc = 0x1c83040u;

    // 0x1c83040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c83040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c83044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c83044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c83048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c83048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8304c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c83050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c83050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83054: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c83054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c83058: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c83058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c8305c: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C8305Cu;
    SET_GPR_U32(ctx, 31, 0x1C83064u);
    ctx->pc = 0x1C83060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8305Cu;
    // 0x1c83060: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C8305Cu, 0x1C83064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83064u;
label_1c83064:
    // 0x1c83064: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c83064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c83068: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C83068u;
    {
        const bool branch_taken_0x1c83068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83068u;
        // 0x1c8306c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83068) {
            ctx->pc = 0x1C830B8u;
            goto label_1c830b8;
        }
    }
    ctx->pc = 0x1C83070u;
    // 0x1c83070: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c83070u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83074: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C83074u;
    {
        const bool branch_taken_0x1c83074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c83074) {
            ctx->pc = 0x1C83098u;
            goto label_1c83098;
        }
    }
    ctx->pc = 0x1C8307Cu;
label_1c8307c:
    // 0x1c8307c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8307cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c83080:
    // 0x1c83080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c83080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c83084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c83084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c83088: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c83088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8308c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8308cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c83090: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83090u;
        // 0x1c83094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83098u;
label_1c83098:
    // 0x1c83098: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C83098u;
    SET_GPR_U32(ctx, 31, 0x1C830A0u);
    ctx->pc = 0x1C8309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83098u;
    // 0x1c8309c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C83098u, 0x1C830A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C830A0u;
label_1c830a0:
    // 0x1c830a0: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C830A0u;
    {
        const bool branch_taken_0x1c830a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c830a0) {
            ctx->pc = 0x1C830A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C830A0u;
            // 0x1c830a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83080;
        }
    }
    ctx->pc = 0x1C830A8u;
    // 0x1c830a8: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C830A8u;
    SET_GPR_U32(ctx, 31, 0x1C830B0u);
    ctx->pc = 0x1C830ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C830A8u;
    // 0x1c830ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C830A8u, 0x1C830B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C830B0u;
label_1c830b0:
    // 0x1c830b0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C830B0u;
    {
        const bool branch_taken_0x1c830b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C830B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C830B0u;
        // 0x1c830b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c830b0) {
            ctx->pc = 0x1C83080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83080;
        }
    }
    ctx->pc = 0x1C830B8u;
label_1c830b8:
    // 0x1c830b8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c830b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c830bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c830bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c830c0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c830c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c830c4: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1c830c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c830c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c830c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c830cc: 0x11cf0043  beq         $t6, $t7, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C830CCu;
    {
        const bool branch_taken_0x1c830cc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C830D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C830CCu;
        // 0x1c830d0: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c830cc) {
            ctx->pc = 0x1C831DCu;
            goto label_1c831dc;
        }
    }
    ctx->pc = 0x1C830D4u;
    // 0x1c830d4: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1c830d4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c830d8: 0x11e00029  beqz        $t7, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C830D8u;
    {
        const bool branch_taken_0x1c830d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C830DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C830D8u;
        // 0x1c830dc: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c830d8) {
            ctx->pc = 0x1C83180u;
            goto label_1c83180;
        }
    }
    ctx->pc = 0x1C830E0u;
    // 0x1c830e0: 0x11c0000f  beqz        $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x1C830E0u;
    {
        const bool branch_taken_0x1c830e0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C830E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C830E0u;
        // 0x1c830e4: 0x3c0f01c9  lui         $t7, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c830e0) {
            ctx->pc = 0x1C83120u;
            goto label_1c83120;
        }
    }
    ctx->pc = 0x1C830E8u;
label_1c830e8:
    // 0x1c830e8: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1c830e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1c830ec:
    // 0x1c830ec: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C830ECu;
    {
        const bool branch_taken_0x1c830ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C830F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C830ECu;
        // 0x1c830f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c830ec) {
            ctx->pc = 0x1C83080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83080;
        }
    }
    ctx->pc = 0x1C830F4u;
    // 0x1c830f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c830f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c830f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c830f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c830fc: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x1c830fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1c83100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c83100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c83104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83108: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c83108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8310c: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C8310Cu;
    SET_GPR_U32(ctx, 31, 0x1C83114u);
    ctx->pc = 0x1C83110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8310Cu;
    // 0x1c83110: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C8310Cu, 0x1C83114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83114u;
label_1c83114:
    // 0x1c83114: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c83114u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83118: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x1C83118u;
    {
        const bool branch_taken_0x1c83118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83118u;
        // 0x1c8311c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83118) {
            ctx->pc = 0x1C8307Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8307c;
        }
    }
    ctx->pc = 0x1C83120u;
label_1c83120:
    // 0x1c83120: 0x25efce58  addiu       $t7, $t7, -0x31A8
    ctx->pc = 0x1c83120u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954584));
    // 0x1c83124: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c83124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83128: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c83128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8312c: 0x4500ffee  bc1f        . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C8312Cu;
    {
        const bool branch_taken_0x1c8312c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C83130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8312Cu;
        // 0x1c83130: 0x3c0f01c9  lui         $t7, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8312c) {
            ctx->pc = 0x1C830E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c830e8;
        }
    }
    ctx->pc = 0x1C83134u;
    // 0x1c83134: 0x25efce5c  addiu       $t7, $t7, -0x31A4
    ctx->pc = 0x1c83134u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954588));
    // 0x1c83138: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c83138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8313c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c8313cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c83140: 0x4503ffea  bc1tl       . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C83140u;
    {
        const bool branch_taken_0x1c83140 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c83140) {
            ctx->pc = 0x1C83144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83140u;
            // 0x1c83144: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C830ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c830ec;
        }
    }
    ctx->pc = 0x1C83148u;
    // 0x1c83148: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c83148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c8314c: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c8314cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83150: 0x25efce60  addiu       $t7, $t7, -0x31A0
    ctx->pc = 0x1c83150u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954592));
    // 0x1c83154: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c83154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c83158: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c83158u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c8315c: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1c8315cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1c83160: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c83160u;
    { uint32_t bits = FAST_READ32(0x1C8CE60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c83164:
    // 0x1c83164: 0xc72066a  jal         func_1C819A8
    ctx->pc = 0x1C83164u;
    SET_GPR_U32(ctx, 31, 0x1C8316Cu);
    ctx->pc = 0x1C819A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C819A8u, 0x1C83164u, 0x1C8316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8316Cu;
label_1c8316c:
    // 0x1c8316c: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c8316cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83170: 0x25efce64  addiu       $t7, $t7, -0x319C
    ctx->pc = 0x1c83170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954596));
    // 0x1c83174: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c83174u;
    { uint32_t bits = FAST_READ32(0x1C8CE64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83178: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1C83178u;
    {
        const bool branch_taken_0x1c83178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83178u;
        // 0x1c8317c: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83178) {
            ctx->pc = 0x1C830E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c830e8;
        }
    }
    ctx->pc = 0x1C83180u;
label_1c83180:
    // 0x1c83180: 0x55cfffda  bnel        $t6, $t7, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C83180u;
    {
        const bool branch_taken_0x1c83180 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c83180) {
            ctx->pc = 0x1C83184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83180u;
            // 0x1c83184: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C830ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c830ec;
        }
    }
    ctx->pc = 0x1C83188u;
    // 0x1c83188: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83188u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c8318c: 0x25efce58  addiu       $t7, $t7, -0x31A8
    ctx->pc = 0x1c8318cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954584));
    // 0x1c83190: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c83190u;
    { uint32_t bits = FAST_READ32(0x1C8CE58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c83194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c83198: 0x4500ffd3  bc1f        . + 4 + (-0x2D << 2)
    ctx->pc = 0x1C83198u;
    {
        const bool branch_taken_0x1c83198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83198u;
        // 0x1c8319c: 0x3c0f01c9  lui         $t7, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83198) {
            ctx->pc = 0x1C830E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c830e8;
        }
    }
    ctx->pc = 0x1C831A0u;
    // 0x1c831a0: 0x25efce5c  addiu       $t7, $t7, -0x31A4
    ctx->pc = 0x1c831a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954588));
    // 0x1c831a4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c831a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c831a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c831a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c831ac: 0x4503ffcf  bc1tl       . + 4 + (-0x31 << 2)
    ctx->pc = 0x1C831ACu;
    {
        const bool branch_taken_0x1c831ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c831ac) {
            ctx->pc = 0x1C831B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C831ACu;
            // 0x1c831b0: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C830ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c830ec;
        }
    }
    ctx->pc = 0x1C831B4u;
    // 0x1c831b4: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c831b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c831b8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c831b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c831bc: 0x25efce60  addiu       $t7, $t7, -0x31A0
    ctx->pc = 0x1c831bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954592));
    // 0x1c831c0: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c831c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c831c4: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c831c4u;
    { uint32_t bits = FAST_READ32(0x1C8CE60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c831c8: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c831c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c831cc: 0x25efce6c  addiu       $t7, $t7, -0x3194
    ctx->pc = 0x1c831ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954604));
label_1c831d0:
    // 0x1c831d0: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c831d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c831d4: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C831D4u;
    {
        const bool branch_taken_0x1c831d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C831D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C831D4u;
        // 0x1c831d8: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c831d4) {
            ctx->pc = 0x1C83164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83164;
        }
    }
    ctx->pc = 0x1C831DCu;
label_1c831dc:
    // 0x1c831dc: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c831dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c831e0: 0x25efce58  addiu       $t7, $t7, -0x31A8
    ctx->pc = 0x1c831e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954584));
    // 0x1c831e4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c831e4u;
    { uint32_t bits = FAST_READ32(0x1C8CE58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c831e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c831e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c831ec: 0x4500ffbe  bc1f        . + 4 + (-0x42 << 2)
    ctx->pc = 0x1C831ECu;
    {
        const bool branch_taken_0x1c831ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C831F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C831ECu;
        // 0x1c831f0: 0x3c0f01c9  lui         $t7, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c831ec) {
            ctx->pc = 0x1C830E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c830e8;
        }
    }
    ctx->pc = 0x1C831F4u;
    // 0x1c831f4: 0x25efce5c  addiu       $t7, $t7, -0x31A4
    ctx->pc = 0x1c831f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954588));
    // 0x1c831f8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c831f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c831fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c831fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c83200: 0x4503ffba  bc1tl       . + 4 + (-0x46 << 2)
    ctx->pc = 0x1C83200u;
    {
        const bool branch_taken_0x1c83200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c83200) {
            ctx->pc = 0x1C83204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83200u;
            // 0x1c83204: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C830ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c830ec;
        }
    }
    ctx->pc = 0x1C83208u;
    // 0x1c83208: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83208u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c8320c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c8320cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c83210: 0x25efce60  addiu       $t7, $t7, -0x31A0
    ctx->pc = 0x1c83210u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954592));
    // 0x1c83214: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c83214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c83218: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c83218u;
    { uint32_t bits = FAST_READ32(0x1C8CE60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c8321c: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c8321cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83220: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C83220u;
    {
        const bool branch_taken_0x1c83220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83220u;
        // 0x1c83224: 0x25efce68  addiu       $t7, $t7, -0x3198 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83220) {
            ctx->pc = 0x1C831D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c831d0;
        }
    }
    ctx->pc = 0x1C83228u;
    // 0x1c83228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c83228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8322c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8322cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c83230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c83230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c83234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c83234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c83238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c83238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8323c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8323cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c83240: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C83240u;
    SET_GPR_U32(ctx, 31, 0x1C83248u);
    ctx->pc = 0x1C83244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83240u;
    // 0x1c83244: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C83240u, 0x1C83248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83248u;
label_1c83248:
    // 0x1c83248: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c83248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8324c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8324cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83250: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c83250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c83254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c83254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83258: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c83258u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8325c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8325cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83260: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c83260u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83264: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C83264u;
    SET_GPR_U32(ctx, 31, 0x1C8326Cu);
    ctx->pc = 0x1C83268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83264u;
    // 0x1c83268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C83264u, 0x1C8326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8326Cu;
label_1c8326c:
    // 0x1c8326c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8326cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83270: 0xc7203da  jal         func_1C80F68
    ctx->pc = 0x1C83270u;
    SET_GPR_U32(ctx, 31, 0x1C83278u);
    ctx->pc = 0x1C83274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83270u;
    // 0x1c83274: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F68u, 0x1C83270u, 0x1C83278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83278u;
label_1c83278:
    // 0x1c83278: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83278u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c8327c: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1c8327cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c83280: 0x25efce70  addiu       $t7, $t7, -0x3190
    ctx->pc = 0x1c83280u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954608));
    // 0x1c83284: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c83284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c83288: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c83288u;
    { uint32_t bits = FAST_READ32(0x1C8CE70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c8328c: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c8328cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c83290: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c83290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c83294: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83294u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83298: 0x25efce74  addiu       $t7, $t7, -0x318C
    ctx->pc = 0x1c83298u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954612));
    // 0x1c8329c: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1c8329cu;
    { uint32_t bits = FAST_READ32(0x1C8CE74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c832a0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c832a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c832a4: 0x11cf0021  beq         $t6, $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C832A4u;
    {
        const bool branch_taken_0x1c832a4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C832A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C832A4u;
        // 0x1c832a8: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c832a4) {
            ctx->pc = 0x1C8332Cu;
            goto label_1c8332c;
        }
    }
    ctx->pc = 0x1C832ACu;
    // 0x1c832ac: 0x51a00013  beql        $t5, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C832ACu;
    {
        const bool branch_taken_0x1c832ac = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c832ac) {
            ctx->pc = 0x1C832B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C832ACu;
            // 0x1c832b0: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C832FCu;
            goto label_1c832fc;
        }
    }
    ctx->pc = 0x1C832B4u;
    // 0x1c832b4: 0x51c00006  beql        $t6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C832B4u;
    {
        const bool branch_taken_0x1c832b4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c832b4) {
            ctx->pc = 0x1C832B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C832B4u;
            // 0x1c832b8: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C832D0u;
            goto label_1c832d0;
        }
    }
    ctx->pc = 0x1C832BCu;
    // 0x1c832bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c832bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c832c0:
    // 0x1c832c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c832c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c832c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c832c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c832c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C832C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C832CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C832C8u;
        // 0x1c832cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C832C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C832D0u;
label_1c832d0:
    // 0x1c832d0: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c832d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c832d4: 0x25efce70  addiu       $t7, $t7, -0x3190
    ctx->pc = 0x1c832d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954608));
    // 0x1c832d8: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c832d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c832dc: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c832dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c832e0: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1c832e0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1c832e4: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c832e4u;
    { uint32_t bits = FAST_READ32(0x1C8CE70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c832e8:
    // 0x1c832e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c832e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c832ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c832ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c832f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c832f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c832f4: 0x872066a  j           func_1C819A8
    ctx->pc = 0x1C832F4u;
    ctx->pc = 0x1C832F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C832F4u;
    // 0x1c832f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C819A8u;
    sub_01C819A8_0x1c819a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C832FCu;
label_1c832fc:
    // 0x1c832fc: 0x55cffff0  bnel        $t6, $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C832FCu;
    {
        const bool branch_taken_0x1c832fc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c832fc) {
            ctx->pc = 0x1C83300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C832FCu;
            // 0x1c83300: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C832C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c832c0;
        }
    }
    ctx->pc = 0x1C83304u;
    // 0x1c83304: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83304u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83308: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1c83308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8330c: 0x25efce70  addiu       $t7, $t7, -0x3190
    ctx->pc = 0x1c8330cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954608));
    // 0x1c83310: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c83310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c83314: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c83314u;
    { uint32_t bits = FAST_READ32(0x1C8CE70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c83318: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83318u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c8331c: 0x25efce78  addiu       $t7, $t7, -0x3188
    ctx->pc = 0x1c8331cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954616));
    // 0x1c83320: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1c83320u;
    { uint32_t bits = FAST_READ32(0x1C8CE78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1c83324:
    // 0x1c83324: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C83324u;
    {
        const bool branch_taken_0x1c83324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83324u;
        // 0x1c83328: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83324) {
            ctx->pc = 0x1C832E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c832e8;
        }
    }
    ctx->pc = 0x1C8332Cu;
label_1c8332c:
    // 0x1c8332c: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x1C8332Cu;
    {
        const bool branch_taken_0x1c8332c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8332Cu;
        // 0x1c83330: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8332c) {
            ctx->pc = 0x1C83324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83324;
        }
    }
    ctx->pc = 0x1C83334u;
    // 0x1c83334: 0x0  nop
    ctx->pc = 0x1c83334u;
    // NOP
    // 0x1c83338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c83338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8333c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c83340: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c83340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c83344: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C83344u;
    SET_GPR_U32(ctx, 31, 0x1C8334Cu);
    ctx->pc = 0x1C83348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83344u;
    // 0x1c83348: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C83344u, 0x1C8334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8334Cu;
label_1c8334c:
    // 0x1c8334c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8334cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c83350: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83350u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83354: 0x25efce7c  addiu       $t7, $t7, -0x3184
    ctx->pc = 0x1c83354u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954620));
    // 0x1c83358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c83358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8335c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c8335cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c83360: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c83360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c83364: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1c83364u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1c83368: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1c83368u;
    { uint32_t bits = FAST_READ32(0x1C8CE7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8336c: 0x872066a  j           func_1C819A8
    ctx->pc = 0x1C8336Cu;
    ctx->pc = 0x1C83370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8336Cu;
    // 0x1c83370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C819A8u;
    sub_01C819A8_0x1c819a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C83374u;
    // 0x1c83374: 0x0  nop
    ctx->pc = 0x1c83374u;
    // NOP
    ctx->pc = 0x1c83378u;
}
