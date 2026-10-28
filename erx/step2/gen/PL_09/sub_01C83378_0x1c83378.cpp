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

// Function: sub_01C83378
// Address: 0x1c83378 - 0x1c836f0
void sub_01C83378_0x1c83378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C83378_0x1c83378");
#endif

    switch (ctx->pc) {
        case 0x1c8339cu: goto label_1c8339c;
        case 0x1c833b4u: goto label_1c833b4;
        case 0x1c833b8u: goto label_1c833b8;
        case 0x1c833d8u: goto label_1c833d8;
        case 0x1c833e8u: goto label_1c833e8;
        case 0x1c83420u: goto label_1c83420;
        case 0x1c83424u: goto label_1c83424;
        case 0x1c8344cu: goto label_1c8344c;
        case 0x1c8349cu: goto label_1c8349c;
        case 0x1c834a4u: goto label_1c834a4;
        case 0x1c83508u: goto label_1c83508;
        case 0x1c83580u: goto label_1c83580;
        case 0x1c835a4u: goto label_1c835a4;
        case 0x1c835b0u: goto label_1c835b0;
        case 0x1c835f8u: goto label_1c835f8;
        case 0x1c83600u: goto label_1c83600;
        case 0x1c83618u: goto label_1c83618;
        case 0x1c83648u: goto label_1c83648;
        case 0x1c83650u: goto label_1c83650;
        case 0x1c83680u: goto label_1c83680;
        case 0x1c836acu: goto label_1c836ac;
        case 0x1c836ccu: goto label_1c836cc;
        case 0x1c836d8u: goto label_1c836d8;
        default: break;
    }

    ctx->pc = 0x1c83378u;

    // 0x1c83378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c83378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8337c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c83380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c83380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c83384: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c83384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c83388: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c83388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8338c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c8338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c83390: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c83390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c83394: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C83394u;
    SET_GPR_U32(ctx, 31, 0x1C8339Cu);
    ctx->pc = 0x1C83398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83394u;
    // 0x1c83398: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C83394u, 0x1C8339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8339Cu;
label_1c8339c:
    // 0x1c8339c: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c8339cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c833a0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C833A0u;
    {
        const bool branch_taken_0x1c833a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C833A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C833A0u;
        // 0x1c833a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c833a0) {
            ctx->pc = 0x1C833F0u;
            goto label_1c833f0;
        }
    }
    ctx->pc = 0x1C833A8u;
    // 0x1c833a8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c833a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c833ac: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C833ACu;
    {
        const bool branch_taken_0x1c833ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c833ac) {
            ctx->pc = 0x1C833D0u;
            goto label_1c833d0;
        }
    }
    ctx->pc = 0x1C833B4u;
label_1c833b4:
    // 0x1c833b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c833b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c833b8:
    // 0x1c833b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c833b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c833bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c833bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c833c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c833c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c833c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c833c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c833c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C833C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C833CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C833C8u;
        // 0x1c833cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C833C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C833D0u;
label_1c833d0:
    // 0x1c833d0: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C833D0u;
    SET_GPR_U32(ctx, 31, 0x1C833D8u);
    ctx->pc = 0x1C833D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C833D0u;
    // 0x1c833d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C833D0u, 0x1C833D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C833D8u;
label_1c833d8:
    // 0x1c833d8: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C833D8u;
    {
        const bool branch_taken_0x1c833d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c833d8) {
            ctx->pc = 0x1C833DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C833D8u;
            // 0x1c833dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C833B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c833b8;
        }
    }
    ctx->pc = 0x1C833E0u;
    // 0x1c833e0: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C833E0u;
    SET_GPR_U32(ctx, 31, 0x1C833E8u);
    ctx->pc = 0x1C833E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C833E0u;
    // 0x1c833e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C833E0u, 0x1C833E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C833E8u;
label_1c833e8:
    // 0x1c833e8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C833E8u;
    {
        const bool branch_taken_0x1c833e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C833ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C833E8u;
        // 0x1c833ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c833e8) {
            ctx->pc = 0x1C833B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c833b8;
        }
    }
    ctx->pc = 0x1C833F0u;
label_1c833f0:
    // 0x1c833f0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c833f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c833f4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c833f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c833f8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c833f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c833fc: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1c833fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c83400: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c83400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c83404: 0x11cf0043  beq         $t6, $t7, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C83404u;
    {
        const bool branch_taken_0x1c83404 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C83408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83404u;
        // 0x1c83408: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83404) {
            ctx->pc = 0x1C83514u;
            goto label_1c83514;
        }
    }
    ctx->pc = 0x1C8340Cu;
    // 0x1c8340c: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1c8340cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c83410: 0x11e00029  beqz        $t7, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C83410u;
    {
        const bool branch_taken_0x1c83410 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83410u;
        // 0x1c83414: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83410) {
            ctx->pc = 0x1C834B8u;
            goto label_1c834b8;
        }
    }
    ctx->pc = 0x1C83418u;
    // 0x1c83418: 0x11c0000f  beqz        $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x1C83418u;
    {
        const bool branch_taken_0x1c83418 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83418u;
        // 0x1c8341c: 0x3c0f01c9  lui         $t7, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83418) {
            ctx->pc = 0x1C83458u;
            goto label_1c83458;
        }
    }
    ctx->pc = 0x1C83420u;
label_1c83420:
    // 0x1c83420: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1c83420u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1c83424:
    // 0x1c83424: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C83424u;
    {
        const bool branch_taken_0x1c83424 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C83428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83424u;
        // 0x1c83428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83424) {
            ctx->pc = 0x1C833B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c833b8;
        }
    }
    ctx->pc = 0x1C8342Cu;
    // 0x1c8342c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8342cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c83430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83434: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1c83434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c83438: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c83438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8343c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8343cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83440: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c83440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83444: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C83444u;
    SET_GPR_U32(ctx, 31, 0x1C8344Cu);
    ctx->pc = 0x1C83448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83444u;
    // 0x1c83448: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C83444u, 0x1C8344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8344Cu;
label_1c8344c:
    // 0x1c8344c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8344cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83450: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x1C83450u;
    {
        const bool branch_taken_0x1c83450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83450u;
        // 0x1c83454: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83450) {
            ctx->pc = 0x1C833B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c833b4;
        }
    }
    ctx->pc = 0x1C83458u;
label_1c83458:
    // 0x1c83458: 0x25efce80  addiu       $t7, $t7, -0x3180
    ctx->pc = 0x1c83458u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954624));
    // 0x1c8345c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c8345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83460: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c83460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c83464: 0x4500ffee  bc1f        . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C83464u;
    {
        const bool branch_taken_0x1c83464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C83468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83464u;
        // 0x1c83468: 0x3c0f01c9  lui         $t7, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83464) {
            ctx->pc = 0x1C83420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83420;
        }
    }
    ctx->pc = 0x1C8346Cu;
    // 0x1c8346c: 0x25efce84  addiu       $t7, $t7, -0x317C
    ctx->pc = 0x1c8346cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954628));
    // 0x1c83470: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c83470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83474: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c83474u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c83478: 0x4503ffea  bc1tl       . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C83478u;
    {
        const bool branch_taken_0x1c83478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c83478) {
            ctx->pc = 0x1C8347Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83478u;
            // 0x1c8347c: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83424;
        }
    }
    ctx->pc = 0x1C83480u;
    // 0x1c83480: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c83480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c83484: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83484u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83488: 0x25efce88  addiu       $t7, $t7, -0x3178
    ctx->pc = 0x1c83488u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954632));
    // 0x1c8348c: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c8348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c83490: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c83490u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c83494: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1c83494u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1c83498: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c83498u;
    { uint32_t bits = FAST_READ32(0x1C8CE88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c8349c:
    // 0x1c8349c: 0xc72066a  jal         func_1C819A8
    ctx->pc = 0x1C8349Cu;
    SET_GPR_U32(ctx, 31, 0x1C834A4u);
    ctx->pc = 0x1C819A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C819A8u, 0x1C8349Cu, 0x1C834A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C834A4u;
label_1c834a4:
    // 0x1c834a4: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c834a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c834a8: 0x25efce8c  addiu       $t7, $t7, -0x3174
    ctx->pc = 0x1c834a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954636));
    // 0x1c834ac: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c834acu;
    { uint32_t bits = FAST_READ32(0x1C8CE8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c834b0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1C834B0u;
    {
        const bool branch_taken_0x1c834b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C834B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C834B0u;
        // 0x1c834b4: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c834b0) {
            ctx->pc = 0x1C83420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83420;
        }
    }
    ctx->pc = 0x1C834B8u;
label_1c834b8:
    // 0x1c834b8: 0x55cfffda  bnel        $t6, $t7, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C834B8u;
    {
        const bool branch_taken_0x1c834b8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c834b8) {
            ctx->pc = 0x1C834BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C834B8u;
            // 0x1c834bc: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83424;
        }
    }
    ctx->pc = 0x1C834C0u;
    // 0x1c834c0: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c834c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c834c4: 0x25efce80  addiu       $t7, $t7, -0x3180
    ctx->pc = 0x1c834c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954624));
    // 0x1c834c8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c834c8u;
    { uint32_t bits = FAST_READ32(0x1C8CE80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c834cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c834ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c834d0: 0x4500ffd3  bc1f        . + 4 + (-0x2D << 2)
    ctx->pc = 0x1C834D0u;
    {
        const bool branch_taken_0x1c834d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C834D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C834D0u;
        // 0x1c834d4: 0x3c0f01c9  lui         $t7, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c834d0) {
            ctx->pc = 0x1C83420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83420;
        }
    }
    ctx->pc = 0x1C834D8u;
    // 0x1c834d8: 0x25efce84  addiu       $t7, $t7, -0x317C
    ctx->pc = 0x1c834d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954628));
    // 0x1c834dc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c834dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c834e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c834e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c834e4: 0x4503ffcf  bc1tl       . + 4 + (-0x31 << 2)
    ctx->pc = 0x1C834E4u;
    {
        const bool branch_taken_0x1c834e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c834e4) {
            ctx->pc = 0x1C834E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C834E4u;
            // 0x1c834e8: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83424;
        }
    }
    ctx->pc = 0x1C834ECu;
    // 0x1c834ec: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c834ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c834f0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c834f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c834f4: 0x25efce88  addiu       $t7, $t7, -0x3178
    ctx->pc = 0x1c834f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954632));
    // 0x1c834f8: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c834f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c834fc: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c834fcu;
    { uint32_t bits = FAST_READ32(0x1C8CE88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c83500: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83500u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83504: 0x25efce94  addiu       $t7, $t7, -0x316C
    ctx->pc = 0x1c83504u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954644));
label_1c83508:
    // 0x1c83508: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c83508u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c8350c: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C8350Cu;
    {
        const bool branch_taken_0x1c8350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8350Cu;
        // 0x1c83510: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8350c) {
            ctx->pc = 0x1C8349Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8349c;
        }
    }
    ctx->pc = 0x1C83514u;
label_1c83514:
    // 0x1c83514: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83514u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83518: 0x25efce80  addiu       $t7, $t7, -0x3180
    ctx->pc = 0x1c83518u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954624));
    // 0x1c8351c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c8351cu;
    { uint32_t bits = FAST_READ32(0x1C8CE80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83520: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c83520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c83524: 0x4500ffbe  bc1f        . + 4 + (-0x42 << 2)
    ctx->pc = 0x1C83524u;
    {
        const bool branch_taken_0x1c83524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C83528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83524u;
        // 0x1c83528: 0x3c0f01c9  lui         $t7, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83524) {
            ctx->pc = 0x1C83420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83420;
        }
    }
    ctx->pc = 0x1C8352Cu;
    // 0x1c8352c: 0x25efce84  addiu       $t7, $t7, -0x317C
    ctx->pc = 0x1c8352cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954628));
    // 0x1c83530: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c83530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83534: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c83534u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c83538: 0x4503ffba  bc1tl       . + 4 + (-0x46 << 2)
    ctx->pc = 0x1C83538u;
    {
        const bool branch_taken_0x1c83538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c83538) {
            ctx->pc = 0x1C8353Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83538u;
            // 0x1c8353c: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83424;
        }
    }
    ctx->pc = 0x1C83540u;
    // 0x1c83540: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83540u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83544: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c83544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c83548: 0x25efce88  addiu       $t7, $t7, -0x3178
    ctx->pc = 0x1c83548u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954632));
    // 0x1c8354c: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c8354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c83550: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c83550u;
    { uint32_t bits = FAST_READ32(0x1C8CE88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c83554: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83554u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83558: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C83558u;
    {
        const bool branch_taken_0x1c83558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83558u;
        // 0x1c8355c: 0x25efce90  addiu       $t7, $t7, -0x3170 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83558) {
            ctx->pc = 0x1C83508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83508;
        }
    }
    ctx->pc = 0x1C83560u;
    // 0x1c83560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c83560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c83564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c83564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c83568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c83568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8356c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c83570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c83570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83574: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c83574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c83578: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C83578u;
    SET_GPR_U32(ctx, 31, 0x1C83580u);
    ctx->pc = 0x1C8357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83578u;
    // 0x1c8357c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C83578u, 0x1C83580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83580u;
label_1c83580:
    // 0x1c83580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c83580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c83584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83588: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c83588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8358c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8358cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c83590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83594: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c83594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83598: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c83598u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8359c: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C8359Cu;
    SET_GPR_U32(ctx, 31, 0x1C835A4u);
    ctx->pc = 0x1C835A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8359Cu;
    // 0x1c835a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C8359Cu, 0x1C835A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C835A4u;
label_1c835a4:
    // 0x1c835a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c835a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c835a8: 0xc7203da  jal         func_1C80F68
    ctx->pc = 0x1C835A8u;
    SET_GPR_U32(ctx, 31, 0x1C835B0u);
    ctx->pc = 0x1C835ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C835A8u;
    // 0x1c835ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F68u, 0x1C835A8u, 0x1C835B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C835B0u;
label_1c835b0:
    // 0x1c835b0: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c835b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c835b4: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1c835b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c835b8: 0x25efce98  addiu       $t7, $t7, -0x3168
    ctx->pc = 0x1c835b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954648));
    // 0x1c835bc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c835bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c835c0: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c835c0u;
    { uint32_t bits = FAST_READ32(0x1C8CE98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c835c4: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c835c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c835c8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c835c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c835cc: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c835ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c835d0: 0x25efce9c  addiu       $t7, $t7, -0x3164
    ctx->pc = 0x1c835d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954652));
    // 0x1c835d4: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1c835d4u;
    { uint32_t bits = FAST_READ32(0x1C8CE9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c835d8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c835d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c835dc: 0x11cf002a  beq         $t6, $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C835DCu;
    {
        const bool branch_taken_0x1c835dc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C835E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C835DCu;
        // 0x1c835e0: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c835dc) {
            ctx->pc = 0x1C83688u;
            goto label_1c83688;
        }
    }
    ctx->pc = 0x1C835E4u;
    // 0x1c835e4: 0x11a0001c  beqz        $t5, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C835E4u;
    {
        const bool branch_taken_0x1c835e4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C835E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C835E4u;
        // 0x1c835e8: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c835e4) {
            ctx->pc = 0x1C83658u;
            goto label_1c83658;
        }
    }
    ctx->pc = 0x1C835ECu;
    // 0x1c835ec: 0x51c00010  beql        $t6, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C835ECu;
    {
        const bool branch_taken_0x1c835ec = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c835ec) {
            ctx->pc = 0x1C835F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C835ECu;
            // 0x1c835f0: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83630u;
            goto label_1c83630;
        }
    }
    ctx->pc = 0x1C835F4u;
    // 0x1c835f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c835f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c835f8:
    // 0x1c835f8: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C835F8u;
    SET_GPR_U32(ctx, 31, 0x1C83600u);
    ctx->pc = 0x1C835FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C835F8u;
    // 0x1c835fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C835F8u, 0x1C83600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83600u;
label_1c83600:
    // 0x1c83600: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c83600u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83604: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c83604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c83608: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c83608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c8360c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c83610: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C83610u;
    SET_GPR_U32(ctx, 31, 0x1C83618u);
    ctx->pc = 0x1C83614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83610u;
    // 0x1c83614: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C83610u, 0x1C83618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83618u;
label_1c83618:
    // 0x1c83618: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c83618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c8361c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8361cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c83620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c83620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c83624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c83624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c83628: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83628u;
        // 0x1c8362c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83630u;
label_1c83630:
    // 0x1c83630: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83630u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83634: 0x25efce98  addiu       $t7, $t7, -0x3168
    ctx->pc = 0x1c83634u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954648));
    // 0x1c83638: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c83638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c8363c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c8363cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c83640: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1c83640u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1c83644: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c83644u;
    { uint32_t bits = FAST_READ32(0x1C8CE98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c83648:
    // 0x1c83648: 0xc72066a  jal         func_1C819A8
    ctx->pc = 0x1C83648u;
    SET_GPR_U32(ctx, 31, 0x1C83650u);
    ctx->pc = 0x1C819A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C819A8u, 0x1C83648u, 0x1C83650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83650u;
label_1c83650:
    // 0x1c83650: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C83650u;
    {
        const bool branch_taken_0x1c83650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83650u;
        // 0x1c83654: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83650) {
            ctx->pc = 0x1C835F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c835f8;
        }
    }
    ctx->pc = 0x1C83658u;
label_1c83658:
    // 0x1c83658: 0x55cfffe7  bnel        $t6, $t7, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1C83658u;
    {
        const bool branch_taken_0x1c83658 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c83658) {
            ctx->pc = 0x1C8365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83658u;
            // 0x1c8365c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C835F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c835f8;
        }
    }
    ctx->pc = 0x1C83660u;
    // 0x1c83660: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83660u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83664: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1c83664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c83668: 0x25efce98  addiu       $t7, $t7, -0x3168
    ctx->pc = 0x1c83668u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954648));
    // 0x1c8366c: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c8366cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c83670: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c83670u;
    { uint32_t bits = FAST_READ32(0x1C8CE98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c83674: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83674u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83678: 0x25efcea0  addiu       $t7, $t7, -0x3160
    ctx->pc = 0x1c83678u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954656));
    // 0x1c8367c: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1c8367cu;
    { uint32_t bits = FAST_READ32(0x1C8CEA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1c83680:
    // 0x1c83680: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1C83680u;
    {
        const bool branch_taken_0x1c83680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83680u;
        // 0x1c83684: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83680) {
            ctx->pc = 0x1C83648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83648;
        }
    }
    ctx->pc = 0x1C83688u;
label_1c83688:
    // 0x1c83688: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x1C83688u;
    {
        const bool branch_taken_0x1c83688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83688u;
        // 0x1c8368c: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83688) {
            ctx->pc = 0x1C83680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83680;
        }
    }
    ctx->pc = 0x1C83690u;
    // 0x1c83690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c83690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c83694: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c83694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c83698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c83698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8369c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8369cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c836a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c836a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c836a4: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C836A4u;
    SET_GPR_U32(ctx, 31, 0x1C836ACu);
    ctx->pc = 0x1C836A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C836A4u;
    // 0x1c836a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C836A4u, 0x1C836ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C836ACu;
label_1c836ac:
    // 0x1c836ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c836acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c836b0: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c836b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c836b4: 0x25efcea4  addiu       $t7, $t7, -0x315C
    ctx->pc = 0x1c836b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954660));
    // 0x1c836b8: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c836b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c836bc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c836bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c836c0: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1c836c0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1c836c4: 0xc72066a  jal         func_1C819A8
    ctx->pc = 0x1C836C4u;
    SET_GPR_U32(ctx, 31, 0x1C836CCu);
    ctx->pc = 0x1C836C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C836C4u;
    // 0x1c836c8: 0xc5ed0000  lwc1        $f13, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C819A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C819A8u, 0x1C836C4u, 0x1C836CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C836CCu;
label_1c836cc:
    // 0x1c836cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c836ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c836d0: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C836D0u;
    SET_GPR_U32(ctx, 31, 0x1C836D8u);
    ctx->pc = 0x1C836D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C836D0u;
    // 0x1c836d4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C836D0u, 0x1C836D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C836D8u;
label_1c836d8:
    // 0x1c836d8: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1c836d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1c836dc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c836dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c836e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c836e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c836e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c836e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c836e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C836E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C836ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C836E8u;
        // 0x1c836ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C836E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C836F0u;
}
