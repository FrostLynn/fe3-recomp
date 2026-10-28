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

// Function: sub_01DB3058
// Address: 0x1db3058 - 0x1db3290
void sub_01DB3058_0x1db3058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3058_0x1db3058");
#endif

    switch (ctx->pc) {
        case 0x1db307cu: goto label_1db307c;
        case 0x1db3094u: goto label_1db3094;
        case 0x1db3098u: goto label_1db3098;
        case 0x1db30b8u: goto label_1db30b8;
        case 0x1db30c8u: goto label_1db30c8;
        case 0x1db3100u: goto label_1db3100;
        case 0x1db3104u: goto label_1db3104;
        case 0x1db3140u: goto label_1db3140;
        case 0x1db3150u: goto label_1db3150;
        case 0x1db3190u: goto label_1db3190;
        case 0x1db3198u: goto label_1db3198;
        case 0x1db3244u: goto label_1db3244;
        case 0x1db3250u: goto label_1db3250;
        case 0x1db3264u: goto label_1db3264;
        case 0x1db327cu: goto label_1db327c;
        default: break;
    }

    ctx->pc = 0x1db3058u;

    // 0x1db3058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db3058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db305c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db3060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db3060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db3064: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db3064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1db3068: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db3068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db306c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1db306cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1db3070: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1db3070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1db3074: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB3074u;
    SET_GPR_U32(ctx, 31, 0x1DB307Cu);
    ctx->pc = 0x1DB3078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3074u;
    // 0x1db3078: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB3074u, 0x1DB307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB307Cu;
label_1db307c:
    // 0x1db307c: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1db307cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1db3080: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB3080u;
    {
        const bool branch_taken_0x1db3080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3080u;
        // 0x1db3084: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3080) {
            ctx->pc = 0x1DB30D0u;
            goto label_1db30d0;
        }
    }
    ctx->pc = 0x1DB3088u;
    // 0x1db3088: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db3088u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db308c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB308Cu;
    {
        const bool branch_taken_0x1db308c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1db308c) {
            ctx->pc = 0x1DB30B0u;
            goto label_1db30b0;
        }
    }
    ctx->pc = 0x1DB3094u;
label_1db3094:
    // 0x1db3094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db3094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db3098:
    // 0x1db3098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db3098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db309c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db309cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db30a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db30a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db30a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1db30a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db30a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB30A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB30A8u;
        // 0x1db30ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB30A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB30B0u;
label_1db30b0:
    // 0x1db30b0: 0xc76c3d2  jal         func_1DB0F48
    ctx->pc = 0x1DB30B0u;
    SET_GPR_U32(ctx, 31, 0x1DB30B8u);
    ctx->pc = 0x1DB30B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB30B0u;
    // 0x1db30b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F48u, 0x1DB30B0u, 0x1DB30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB30B8u;
label_1db30b8:
    // 0x1db30b8: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DB30B8u;
    {
        const bool branch_taken_0x1db30b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1db30b8) {
            ctx->pc = 0x1DB30BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB30B8u;
            // 0x1db30bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB3098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3098;
        }
    }
    ctx->pc = 0x1DB30C0u;
    // 0x1db30c0: 0xc76c3d4  jal         func_1DB0F50
    ctx->pc = 0x1DB30C0u;
    SET_GPR_U32(ctx, 31, 0x1DB30C8u);
    ctx->pc = 0x1DB30C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB30C0u;
    // 0x1db30c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F50u, 0x1DB30C0u, 0x1DB30C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB30C8u;
label_1db30c8:
    // 0x1db30c8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1DB30C8u;
    {
        const bool branch_taken_0x1db30c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB30C8u;
        // 0x1db30cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db30c8) {
            ctx->pc = 0x1DB3098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3098;
        }
    }
    ctx->pc = 0x1DB30D0u;
label_1db30d0:
    // 0x1db30d0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1db30d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db30d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db30d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db30d8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1db30d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db30dc: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1db30dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1db30e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1db30e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1db30e4: 0x11cf0036  beq         $t6, $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x1DB30E4u;
    {
        const bool branch_taken_0x1db30e4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DB30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB30E4u;
        // 0x1db30e8: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db30e4) {
            ctx->pc = 0x1DB31C0u;
            goto label_1db31c0;
        }
    }
    ctx->pc = 0x1DB30ECu;
    // 0x1db30ec: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1db30ecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1db30f0: 0x11e0002e  beqz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x1DB30F0u;
    {
        const bool branch_taken_0x1db30f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB30F0u;
        // 0x1db30f4: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db30f0) {
            ctx->pc = 0x1DB31ACu;
            goto label_1db31ac;
        }
    }
    ctx->pc = 0x1DB30F8u;
    // 0x1db30f8: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DB30F8u;
    {
        const bool branch_taken_0x1db30f8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB30F8u;
        // 0x1db30fc: 0x3c0f01dc  lui         $t7, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db30f8) {
            ctx->pc = 0x1DB314Cu;
            goto label_1db314c;
        }
    }
    ctx->pc = 0x1DB3100u;
label_1db3100:
    // 0x1db3100: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1db3100u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1db3104:
    // 0x1db3104: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1DB3104u;
    {
        const bool branch_taken_0x1db3104 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3104u;
        // 0x1db3108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3104) {
            ctx->pc = 0x1DB3098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3098;
        }
    }
    ctx->pc = 0x1DB310Cu;
    // 0x1db310c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1db310cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1db3110: 0x3c0e01db  lui         $t6, 0x1DB
    ctx->pc = 0x1db3110u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)475 << 16));
    // 0x1db3114: 0x25ce7dc8  addiu       $t6, $t6, 0x7DC8
    ctx->pc = 0x1db3114u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32200));
    // 0x1db3118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db3118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db311c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1db311cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1db3120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db3120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3124: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1db3124u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1db3128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db3128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db312c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1db312cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1db3130: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db3130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3134: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db3134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db3138: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB3138u;
    SET_GPR_U32(ctx, 31, 0x1DB3140u);
    ctx->pc = 0x1DB313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3138u;
    // 0x1db313c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB3138u, 0x1DB3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3140u;
label_1db3140:
    // 0x1db3140: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db3140u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db3144: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1DB3144u;
    {
        const bool branch_taken_0x1db3144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3144u;
        // 0x1db3148: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3144) {
            ctx->pc = 0x1DB3094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3094;
        }
    }
    ctx->pc = 0x1DB314Cu;
label_1db314c:
    // 0x1db314c: 0x25efb7c0  addiu       $t7, $t7, -0x4840
    ctx->pc = 0x1db314cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948800));
label_1db3150:
    // 0x1db3150: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1db3150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db3154: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1db3154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db3158: 0x4500ffe9  bc1f        . + 4 + (-0x17 << 2)
    ctx->pc = 0x1DB3158u;
    {
        const bool branch_taken_0x1db3158 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3158u;
        // 0x1db315c: 0x3c0f01dc  lui         $t7, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3158) {
            ctx->pc = 0x1DB3100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3100;
        }
    }
    ctx->pc = 0x1DB3160u;
    // 0x1db3160: 0x25efb7c4  addiu       $t7, $t7, -0x483C
    ctx->pc = 0x1db3160u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948804));
    // 0x1db3164: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1db3164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db3168: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1db3168u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db316c: 0x4503ffe5  bc1tl       . + 4 + (-0x1B << 2)
    ctx->pc = 0x1DB316Cu;
    {
        const bool branch_taken_0x1db316c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db316c) {
            ctx->pc = 0x1DB3170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB316Cu;
            // 0x1db3170: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB3104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3104;
        }
    }
    ctx->pc = 0x1DB3174u;
    // 0x1db3174: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1db3174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1db3178: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db3178u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db317c: 0x25efb7c8  addiu       $t7, $t7, -0x4838
    ctx->pc = 0x1db317cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
    // 0x1db3180: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1db3180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1db3184: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1db3184u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1db3188: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1db3188u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1db318c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1db318cu;
    { uint32_t bits = FAST_READ32(0x1DBB7C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1db3190:
    // 0x1db3190: 0xc76c664  jal         func_1DB1990
    ctx->pc = 0x1DB3190u;
    SET_GPR_U32(ctx, 31, 0x1DB3198u);
    ctx->pc = 0x1DB1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB1990u, 0x1DB3190u, 0x1DB3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3198u;
label_1db3198:
    // 0x1db3198: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db3198u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db319c: 0x25efb7cc  addiu       $t7, $t7, -0x4834
    ctx->pc = 0x1db319cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948812));
    // 0x1db31a0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1db31a0u;
    { uint32_t bits = FAST_READ32(0x1DBB7CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db31a4: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1DB31A4u;
    {
        const bool branch_taken_0x1db31a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB31A4u;
        // 0x1db31a8: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db31a4) {
            ctx->pc = 0x1DB3100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3100;
        }
    }
    ctx->pc = 0x1DB31ACu;
label_1db31ac:
    // 0x1db31ac: 0x55cfffd5  bnel        $t6, $t7, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1DB31ACu;
    {
        const bool branch_taken_0x1db31ac = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1db31ac) {
            ctx->pc = 0x1DB31B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB31ACu;
            // 0x1db31b0: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB3104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3104;
        }
    }
    ctx->pc = 0x1DB31B4u;
    // 0x1db31b4: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db31b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db31b8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1DB31B8u;
    {
        const bool branch_taken_0x1db31b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB31B8u;
        // 0x1db31bc: 0x25efb7d0  addiu       $t7, $t7, -0x4830 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db31b8) {
            ctx->pc = 0x1DB3150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3150;
        }
    }
    ctx->pc = 0x1DB31C0u;
label_1db31c0:
    // 0x1db31c0: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db31c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db31c4: 0x25efb7d0  addiu       $t7, $t7, -0x4830
    ctx->pc = 0x1db31c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948816));
    // 0x1db31c8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1db31c8u;
    { uint32_t bits = FAST_READ32(0x1DBB7D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db31cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1db31ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db31d0: 0x4500ffcb  bc1f        . + 4 + (-0x35 << 2)
    ctx->pc = 0x1DB31D0u;
    {
        const bool branch_taken_0x1db31d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB31D0u;
        // 0x1db31d4: 0x3c0f01dc  lui         $t7, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db31d0) {
            ctx->pc = 0x1DB3100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3100;
        }
    }
    ctx->pc = 0x1DB31D8u;
    // 0x1db31d8: 0x25efb7c4  addiu       $t7, $t7, -0x483C
    ctx->pc = 0x1db31d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948804));
    // 0x1db31dc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1db31dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db31e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1db31e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db31e4: 0x4503ffc7  bc1tl       . + 4 + (-0x39 << 2)
    ctx->pc = 0x1DB31E4u;
    {
        const bool branch_taken_0x1db31e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db31e4) {
            ctx->pc = 0x1DB31E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB31E4u;
            // 0x1db31e8: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB3104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3104;
        }
    }
    ctx->pc = 0x1DB31ECu;
    // 0x1db31ec: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db31ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db31f0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1db31f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1db31f4: 0x25efb7c8  addiu       $t7, $t7, -0x4838
    ctx->pc = 0x1db31f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
    // 0x1db31f8: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1db31f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1db31fc: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1db31fcu;
    { uint32_t bits = FAST_READ32(0x1DBB7C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db3200: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1db3200u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1db3204: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db3204u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db3208: 0x25efb7d4  addiu       $t7, $t7, -0x482C
    ctx->pc = 0x1db3208u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948820));
    // 0x1db320c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1DB320Cu;
    {
        const bool branch_taken_0x1db320c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB320Cu;
        // 0x1db3210: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db320c) {
            ctx->pc = 0x1DB3190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3190;
        }
    }
    ctx->pc = 0x1DB3214u;
    // 0x1db3214: 0x0  nop
    ctx->pc = 0x1db3214u;
    // NOP
    // 0x1db3218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db3218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db321c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db321cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db3220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db3220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db3224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db3224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3228: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db3228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db322c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db322cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db3230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3234: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db3234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db3238: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db3238u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db323c: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB323Cu;
    SET_GPR_U32(ctx, 31, 0x1DB3244u);
    ctx->pc = 0x1DB3240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB323Cu;
    // 0x1db3240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB323Cu, 0x1DB3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3244u;
label_1db3244:
    // 0x1db3244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db3244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3248: 0xc76c3da  jal         func_1DB0F68
    ctx->pc = 0x1DB3248u;
    SET_GPR_U32(ctx, 31, 0x1DB3250u);
    ctx->pc = 0x1DB324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3248u;
    // 0x1db324c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F68u, 0x1DB3248u, 0x1DB3250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3250u;
label_1db3250:
    // 0x1db3250: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db3250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db3254: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db3254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db3258: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1db3258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1db325c: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB325Cu;
    SET_GPR_U32(ctx, 31, 0x1DB3264u);
    ctx->pc = 0x1DB3260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB325Cu;
    // 0x1db3260: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB325Cu, 0x1DB3264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3264u;
label_1db3264:
    // 0x1db3264: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db3264u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db3268: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1db3268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1db326c: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1db326cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1db3270: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db3270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db3274: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB3274u;
    SET_GPR_U32(ctx, 31, 0x1DB327Cu);
    ctx->pc = 0x1DB3278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3274u;
    // 0x1db3278: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB3274u, 0x1DB327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB327Cu;
label_1db327c:
    // 0x1db327c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1db327cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1db3280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db3280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db3284: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db3284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db3288: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3288u;
        // 0x1db328c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB3290u;
}
