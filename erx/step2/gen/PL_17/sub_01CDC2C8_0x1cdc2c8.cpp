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

// Function: sub_01CDC2C8
// Address: 0x1cdc2c8 - 0x1cdc610
void sub_01CDC2C8_0x1cdc2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDC2C8_0x1cdc2c8");
#endif

    switch (ctx->pc) {
        case 0x1cdc2ecu: goto label_1cdc2ec;
        case 0x1cdc304u: goto label_1cdc304;
        case 0x1cdc308u: goto label_1cdc308;
        case 0x1cdc328u: goto label_1cdc328;
        case 0x1cdc338u: goto label_1cdc338;
        case 0x1cdc380u: goto label_1cdc380;
        case 0x1cdc384u: goto label_1cdc384;
        case 0x1cdc3acu: goto label_1cdc3ac;
        case 0x1cdc3b8u: goto label_1cdc3b8;
        case 0x1cdc3f4u: goto label_1cdc3f4;
        case 0x1cdc3fcu: goto label_1cdc3fc;
        case 0x1cdc490u: goto label_1cdc490;
        case 0x1cdc4b4u: goto label_1cdc4b4;
        case 0x1cdc4c0u: goto label_1cdc4c0;
        case 0x1cdc500u: goto label_1cdc500;
        case 0x1cdc508u: goto label_1cdc508;
        case 0x1cdc520u: goto label_1cdc520;
        case 0x1cdc550u: goto label_1cdc550;
        case 0x1cdc558u: goto label_1cdc558;
        case 0x1cdc584u: goto label_1cdc584;
        case 0x1cdc5ccu: goto label_1cdc5cc;
        case 0x1cdc5ecu: goto label_1cdc5ec;
        case 0x1cdc5f8u: goto label_1cdc5f8;
        default: break;
    }

    ctx->pc = 0x1cdc2c8u;

    // 0x1cdc2c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdc2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdc2cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdc2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdc2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc2d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdc2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdc2d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdc2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc2dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cdc2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cdc2e0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cdc2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cdc2e4: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC2E4u;
    SET_GPR_U32(ctx, 31, 0x1CDC2ECu);
    ctx->pc = 0x1CDC2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC2E4u;
    // 0x1cdc2e8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC2E4u, 0x1CDC2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC2ECu;
label_1cdc2ec:
    // 0x1cdc2ec: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cdc2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cdc2f0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CDC2F0u;
    {
        const bool branch_taken_0x1cdc2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC2F0u;
        // 0x1cdc2f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc2f0) {
            ctx->pc = 0x1CDC340u;
            goto label_1cdc340;
        }
    }
    ctx->pc = 0x1CDC2F8u;
    // 0x1cdc2f8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc2f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc2fc: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDC2FCu;
    {
        const bool branch_taken_0x1cdc2fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cdc2fc) {
            ctx->pc = 0x1CDC320u;
            goto label_1cdc320;
        }
    }
    ctx->pc = 0x1CDC304u;
label_1cdc304:
    // 0x1cdc304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdc304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdc308:
    // 0x1cdc308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc30c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdc30cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdc310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc314: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cdc314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdc318: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC318u;
        // 0x1cdc31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC320u;
label_1cdc320:
    // 0x1cdc320: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDC320u;
    SET_GPR_U32(ctx, 31, 0x1CDC328u);
    ctx->pc = 0x1CDC324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC320u;
    // 0x1cdc324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDC320u, 0x1CDC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC328u;
label_1cdc328:
    // 0x1cdc328: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDC328u;
    {
        const bool branch_taken_0x1cdc328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1cdc328) {
            ctx->pc = 0x1CDC32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC328u;
            // 0x1cdc32c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc308;
        }
    }
    ctx->pc = 0x1CDC330u;
    // 0x1cdc330: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDC330u;
    SET_GPR_U32(ctx, 31, 0x1CDC338u);
    ctx->pc = 0x1CDC334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC330u;
    // 0x1cdc334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDC330u, 0x1CDC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC338u;
label_1cdc338:
    // 0x1cdc338: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CDC338u;
    {
        const bool branch_taken_0x1cdc338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC338u;
        // 0x1cdc33c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc338) {
            ctx->pc = 0x1CDC308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc308;
        }
    }
    ctx->pc = 0x1CDC340u;
label_1cdc340:
    // 0x1cdc340: 0x8c4d0010  lw          $t5, 0x10($v0)
    ctx->pc = 0x1cdc340u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cdc344: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cdc344u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdc348: 0x55af000e  bnel        $t5, $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x1CDC348u;
    {
        const bool branch_taken_0x1cdc348 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cdc348) {
            ctx->pc = 0x1CDC34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC348u;
            // 0x1cdc34c: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC384u;
            goto label_1cdc384;
        }
    }
    ctx->pc = 0x1CDC350u;
    // 0x1cdc350: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1cdc350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdc354: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc354u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc358: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1cdc358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc35c: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1cdc35cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cdc360: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cdc360u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cdc364: 0x11cf002e  beq         $t6, $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CDC364u;
    {
        const bool branch_taken_0x1cdc364 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC364u;
        // 0x1cdc368: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc364) {
            ctx->pc = 0x1CDC420u;
            goto label_1cdc420;
        }
    }
    ctx->pc = 0x1CDC36Cu;
    // 0x1cdc36c: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1cdc36cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cdc370: 0x11e00027  beqz        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CDC370u;
    {
        const bool branch_taken_0x1cdc370 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc370) {
            ctx->pc = 0x1CDC410u;
            goto label_1cdc410;
        }
    }
    ctx->pc = 0x1CDC378u;
    // 0x1cdc378: 0x11c0000f  beqz        $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x1CDC378u;
    {
        const bool branch_taken_0x1cdc378 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC378u;
        // 0x1cdc37c: 0x3c0f0000  lui         $t7, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)0 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc378) {
            ctx->pc = 0x1CDC3B8u;
            goto label_1cdc3b8;
        }
    }
    ctx->pc = 0x1CDC380u;
label_1cdc380:
    // 0x1cdc380: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1cdc380u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1cdc384:
    // 0x1cdc384: 0x15e0ffe0  bnez        $t7, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1CDC384u;
    {
        const bool branch_taken_0x1cdc384 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC384u;
        // 0x1cdc388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc384) {
            ctx->pc = 0x1CDC308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc308;
        }
    }
    ctx->pc = 0x1CDC38Cu;
    // 0x1cdc38c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdc38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdc390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc394: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x1cdc394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1cdc398: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdc398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc39c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdc39cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc3a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdc3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc3a4: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDC3A4u;
    SET_GPR_U32(ctx, 31, 0x1CDC3ACu);
    ctx->pc = 0x1CDC3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC3A4u;
    // 0x1cdc3a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDC3A4u, 0x1CDC3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC3ACu;
label_1cdc3ac:
    // 0x1cdc3ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc3acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc3b0: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1CDC3B0u;
    {
        const bool branch_taken_0x1cdc3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC3B0u;
        // 0x1cdc3b4: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc3b0) {
            ctx->pc = 0x1CDC304u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc304;
        }
    }
    ctx->pc = 0x1CDC3B8u;
label_1cdc3b8:
    // 0x1cdc3b8: 0x25eff3c0  addiu       $t7, $t7, -0xC40
    ctx->pc = 0x1cdc3b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964160));
    // 0x1cdc3bc: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1cdc3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cdc3c0: 0x46017834  c.lt.s      $f15, $f1
    ctx->pc = 0x1cdc3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdc3c4: 0x4500ffee  bc1f        . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CDC3C4u;
    {
        const bool branch_taken_0x1cdc3c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC3C4u;
        // 0x1cdc3c8: 0x3c0f01cf  lui         $t7, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc3c4) {
            ctx->pc = 0x1CDC380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc380;
        }
    }
    ctx->pc = 0x1CDC3CCu;
    // 0x1cdc3cc: 0x25eff3c4  addiu       $t7, $t7, -0xC3C
    ctx->pc = 0x1cdc3ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964164));
    // 0x1cdc3d0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdc3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc3d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cdc3d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdc3d8: 0x4503ffea  bc1tl       . + 4 + (-0x16 << 2)
    ctx->pc = 0x1CDC3D8u;
    {
        const bool branch_taken_0x1cdc3d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdc3d8) {
            ctx->pc = 0x1CDC3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC3D8u;
            // 0x1cdc3dc: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc384;
        }
    }
    ctx->pc = 0x1CDC3E0u;
    // 0x1cdc3e0: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc3e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc3e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1cdc3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cdc3e8: 0x25eff3c8  addiu       $t7, $t7, -0xC38
    ctx->pc = 0x1cdc3e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964168));
    // 0x1cdc3ec: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1cdc3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1cdc3f0: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdc3f0u;
    { uint32_t bits = FAST_READ32(0x1CEF3C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cdc3f4:
    // 0x1cdc3f4: 0xc736b2c  jal         func_1CDACB0
    ctx->pc = 0x1CDC3F4u;
    SET_GPR_U32(ctx, 31, 0x1CDC3FCu);
    ctx->pc = 0x1CDC3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC3F4u;
    // 0x1cdc3f8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDACB0u, 0x1CDC3F4u, 0x1CDC3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC3FCu;
label_1cdc3fc:
    // 0x1cdc3fc: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc3fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc400: 0x25eff3cc  addiu       $t7, $t7, -0xC34
    ctx->pc = 0x1cdc400u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964172));
    // 0x1cdc404: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdc404u;
    { uint32_t bits = FAST_READ32(0x1CEF3CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc408: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CDC408u;
    {
        const bool branch_taken_0x1cdc408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC408u;
        // 0x1cdc40c: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc408) {
            ctx->pc = 0x1CDC380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc380;
        }
    }
    ctx->pc = 0x1CDC410u;
label_1cdc410:
    // 0x1cdc410: 0x51cdffe9  beql        $t6, $t5, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1CDC410u;
    {
        const bool branch_taken_0x1cdc410 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        if (branch_taken_0x1cdc410) {
            ctx->pc = 0x1CDC414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC410u;
            // 0x1cdc414: 0x3c0f01cf  lui         $t7, 0x1CF (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc3b8;
        }
    }
    ctx->pc = 0x1CDC418u;
    // 0x1cdc418: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1CDC418u;
    {
        const bool branch_taken_0x1cdc418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC418u;
        // 0x1cdc41c: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc418) {
            ctx->pc = 0x1CDC384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc384;
        }
    }
    ctx->pc = 0x1CDC420u;
label_1cdc420:
    // 0x1cdc420: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc420u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc424: 0x25eff3c0  addiu       $t7, $t7, -0xC40
    ctx->pc = 0x1cdc424u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964160));
    // 0x1cdc428: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdc428u;
    { uint32_t bits = FAST_READ32(0x1CEF3C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc42c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cdc42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdc430: 0x4500ffd3  bc1f        . + 4 + (-0x2D << 2)
    ctx->pc = 0x1CDC430u;
    {
        const bool branch_taken_0x1cdc430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC430u;
        // 0x1cdc434: 0x3c0f01cf  lui         $t7, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc430) {
            ctx->pc = 0x1CDC380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc380;
        }
    }
    ctx->pc = 0x1CDC438u;
    // 0x1cdc438: 0x25eff3c4  addiu       $t7, $t7, -0xC3C
    ctx->pc = 0x1cdc438u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964164));
    // 0x1cdc43c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdc43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc440: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cdc440u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdc444: 0x4503ffcf  bc1tl       . + 4 + (-0x31 << 2)
    ctx->pc = 0x1CDC444u;
    {
        const bool branch_taken_0x1cdc444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdc444) {
            ctx->pc = 0x1CDC448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC444u;
            // 0x1cdc448: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc384;
        }
    }
    ctx->pc = 0x1CDC44Cu;
    // 0x1cdc44c: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc44cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc450: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1cdc450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cdc454: 0x25eff3c8  addiu       $t7, $t7, -0xC38
    ctx->pc = 0x1cdc454u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964168));
    // 0x1cdc458: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cdc458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cdc45c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdc45cu;
    { uint32_t bits = FAST_READ32(0x1CEF3C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdc460: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc460u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc464: 0x25eff3d0  addiu       $t7, $t7, -0xC30
    ctx->pc = 0x1cdc464u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964176));
    // 0x1cdc468: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1CDC468u;
    {
        const bool branch_taken_0x1cdc468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC468u;
        // 0x1cdc46c: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc468) {
            ctx->pc = 0x1CDC3F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc3f4;
        }
    }
    ctx->pc = 0x1CDC470u;
    // 0x1cdc470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdc470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdc474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdc474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdc478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc47c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdc47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdc480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdc480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc484: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdc484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdc488: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC488u;
    SET_GPR_U32(ctx, 31, 0x1CDC490u);
    ctx->pc = 0x1CDC48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC488u;
    // 0x1cdc48c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC488u, 0x1CDC490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC490u;
label_1cdc490:
    // 0x1cdc490: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cdc490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdc494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdc498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc49c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdc49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdc4a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdc4a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc4a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdc4a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc4a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdc4a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc4ac: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDC4ACu;
    SET_GPR_U32(ctx, 31, 0x1CDC4B4u);
    ctx->pc = 0x1CDC4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC4ACu;
    // 0x1cdc4b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDC4ACu, 0x1CDC4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC4B4u;
label_1cdc4b4:
    // 0x1cdc4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdc4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc4b8: 0xc73689a  jal         func_1CDA268
    ctx->pc = 0x1CDC4B8u;
    SET_GPR_U32(ctx, 31, 0x1CDC4C0u);
    ctx->pc = 0x1CDC4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC4B8u;
    // 0x1cdc4bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA268u, 0x1CDC4B8u, 0x1CDC4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC4C0u;
label_1cdc4c0:
    // 0x1cdc4c0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cdc4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cdc4c4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cdc4c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdc4c8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cdc4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cdc4cc: 0x8e2d0010  lw          $t5, 0x10($s1)
    ctx->pc = 0x1cdc4ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cdc4d0: 0x55af000b  bnel        $t5, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1CDC4D0u;
    {
        const bool branch_taken_0x1cdc4d0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cdc4d0) {
            ctx->pc = 0x1CDC4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC4D0u;
            // 0x1cdc4d4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC500u;
            goto label_1cdc500;
        }
    }
    ctx->pc = 0x1CDC4D8u;
    // 0x1cdc4d8: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1cdc4d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1cdc4dc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc4dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc4e0: 0x11cf002b  beq         $t6, $t7, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CDC4E0u;
    {
        const bool branch_taken_0x1cdc4e0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC4E0u;
        // 0x1cdc4e4: 0x3c0f01cf  lui         $t7, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc4e0) {
            ctx->pc = 0x1CDC590u;
            goto label_1cdc590;
        }
    }
    ctx->pc = 0x1CDC4E8u;
    // 0x1cdc4e8: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1cdc4e8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cdc4ec: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CDC4ECu;
    {
        const bool branch_taken_0x1cdc4ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc4ec) {
            ctx->pc = 0x1CDC560u;
            goto label_1cdc560;
        }
    }
    ctx->pc = 0x1CDC4F4u;
    // 0x1cdc4f4: 0x51c00010  beql        $t6, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CDC4F4u;
    {
        const bool branch_taken_0x1cdc4f4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc4f4) {
            ctx->pc = 0x1CDC4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC4F4u;
            // 0x1cdc4f8: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC538u;
            goto label_1cdc538;
        }
    }
    ctx->pc = 0x1CDC4FCu;
    // 0x1cdc4fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdc4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cdc500:
    // 0x1cdc500: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC500u;
    SET_GPR_U32(ctx, 31, 0x1CDC508u);
    ctx->pc = 0x1CDC504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC500u;
    // 0x1cdc504: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC500u, 0x1CDC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC508u;
label_1cdc508:
    // 0x1cdc508: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc508u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc50c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cdc50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cdc510: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cdc510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cdc514: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdc514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdc518: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC518u;
    SET_GPR_U32(ctx, 31, 0x1CDC520u);
    ctx->pc = 0x1CDC51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC518u;
    // 0x1cdc51c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC518u, 0x1CDC520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC520u;
label_1cdc520:
    // 0x1cdc520: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cdc520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cdc524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdc528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc52c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdc52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc530: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC530u;
        // 0x1cdc534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC538u;
label_1cdc538:
    // 0x1cdc538: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc538u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc53c: 0x25eff3d4  addiu       $t7, $t7, -0xC2C
    ctx->pc = 0x1cdc53cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964180));
    // 0x1cdc540: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cdc540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cdc544: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1cdc544u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1cdc548: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1cdc548u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1cdc54c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdc54cu;
    { uint32_t bits = FAST_READ32(0x1CEF3D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cdc550:
    // 0x1cdc550: 0xc736b2c  jal         func_1CDACB0
    ctx->pc = 0x1CDC550u;
    SET_GPR_U32(ctx, 31, 0x1CDC558u);
    ctx->pc = 0x1CDACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDACB0u, 0x1CDC550u, 0x1CDC558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC558u;
label_1cdc558:
    // 0x1cdc558: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1CDC558u;
    {
        const bool branch_taken_0x1cdc558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC558u;
        // 0x1cdc55c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc558) {
            ctx->pc = 0x1CDC500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc500;
        }
    }
    ctx->pc = 0x1CDC560u;
label_1cdc560:
    // 0x1cdc560: 0x55cdffe7  bnel        $t6, $t5, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1CDC560u;
    {
        const bool branch_taken_0x1cdc560 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        if (branch_taken_0x1cdc560) {
            ctx->pc = 0x1CDC564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC560u;
            // 0x1cdc564: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc500;
        }
    }
    ctx->pc = 0x1CDC568u;
    // 0x1cdc568: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc568u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc56c: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1cdc56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdc570: 0x25eff3d4  addiu       $t7, $t7, -0xC2C
    ctx->pc = 0x1cdc570u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964180));
    // 0x1cdc574: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cdc574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cdc578: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdc578u;
    { uint32_t bits = FAST_READ32(0x1CEF3D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdc57c: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc57cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc580: 0x25eff3dc  addiu       $t7, $t7, -0xC24
    ctx->pc = 0x1cdc580u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964188));
label_1cdc584:
    // 0x1cdc584: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1cdc584u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1cdc588: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1CDC588u;
    {
        const bool branch_taken_0x1cdc588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC588u;
        // 0x1cdc58c: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc588) {
            ctx->pc = 0x1CDC550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc550;
        }
    }
    ctx->pc = 0x1CDC590u;
label_1cdc590:
    // 0x1cdc590: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1cdc590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdc594: 0x25eff3d4  addiu       $t7, $t7, -0xC2C
    ctx->pc = 0x1cdc594u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964180));
    // 0x1cdc598: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cdc598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cdc59c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdc59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdc5a0: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc5a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc5a4: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDC5A4u;
    {
        const bool branch_taken_0x1cdc5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC5A4u;
        // 0x1cdc5a8: 0x25eff3d8  addiu       $t7, $t7, -0xC28 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc5a4) {
            ctx->pc = 0x1CDC584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc584;
        }
    }
    ctx->pc = 0x1CDC5ACu;
    // 0x1cdc5ac: 0x0  nop
    ctx->pc = 0x1cdc5acu;
    // NOP
    // 0x1cdc5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdc5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdc5b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdc5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdc5b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc5bc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdc5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdc5c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdc5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc5c4: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC5C4u;
    SET_GPR_U32(ctx, 31, 0x1CDC5CCu);
    ctx->pc = 0x1CDC5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC5C4u;
    // 0x1cdc5c8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC5C4u, 0x1CDC5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC5CCu;
label_1cdc5cc:
    // 0x1cdc5cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cdc5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdc5d0: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc5d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc5d4: 0x25eff3e0  addiu       $t7, $t7, -0xC20
    ctx->pc = 0x1cdc5d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964192));
    // 0x1cdc5d8: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cdc5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cdc5dc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1cdc5dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1cdc5e0: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1cdc5e0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1cdc5e4: 0xc736b2c  jal         func_1CDACB0
    ctx->pc = 0x1CDC5E4u;
    SET_GPR_U32(ctx, 31, 0x1CDC5ECu);
    ctx->pc = 0x1CDC5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC5E4u;
    // 0x1cdc5e8: 0xc5ed0000  lwc1        $f13, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDACB0u, 0x1CDC5E4u, 0x1CDC5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC5ECu;
label_1cdc5ec:
    // 0x1cdc5ec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cdc5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdc5f0: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC5F0u;
    SET_GPR_U32(ctx, 31, 0x1CDC5F8u);
    ctx->pc = 0x1CDC5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC5F0u;
    // 0x1cdc5f4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC5F0u, 0x1CDC5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC5F8u;
label_1cdc5f8:
    // 0x1cdc5f8: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1cdc5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1cdc5fc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cdc5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cdc600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc604: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdc604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc608: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC608u;
        // 0x1cdc60c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC610u;
}
