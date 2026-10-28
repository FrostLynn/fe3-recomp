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

// Function: sub_01C836F0
// Address: 0x1c836f0 - 0x1c83958
void sub_01C836F0_0x1c836f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C836F0_0x1c836f0");
#endif

    switch (ctx->pc) {
        case 0x1c83714u: goto label_1c83714;
        case 0x1c8372cu: goto label_1c8372c;
        case 0x1c83730u: goto label_1c83730;
        case 0x1c83750u: goto label_1c83750;
        case 0x1c83760u: goto label_1c83760;
        case 0x1c83798u: goto label_1c83798;
        case 0x1c8379cu: goto label_1c8379c;
        case 0x1c837c4u: goto label_1c837c4;
        case 0x1c837d4u: goto label_1c837d4;
        case 0x1c83824u: goto label_1c83824;
        case 0x1c83868u: goto label_1c83868;
        case 0x1c8388cu: goto label_1c8388c;
        case 0x1c83898u: goto label_1c83898;
        case 0x1c838c8u: goto label_1c838c8;
        case 0x1c838d8u: goto label_1c838d8;
        case 0x1c838dcu: goto label_1c838dc;
        case 0x1c8392cu: goto label_1c8392c;
        default: break;
    }

    ctx->pc = 0x1c836f0u;

    // 0x1c836f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c836f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c836f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c836f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c836f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c836f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c836fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c836fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c83700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c83700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83704: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c83704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c83708: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c83708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c8370c: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C8370Cu;
    SET_GPR_U32(ctx, 31, 0x1C83714u);
    ctx->pc = 0x1C83710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8370Cu;
    // 0x1c83710: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C8370Cu, 0x1C83714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83714u;
label_1c83714:
    // 0x1c83714: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c83714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c83718: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C83718u;
    {
        const bool branch_taken_0x1c83718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83718u;
        // 0x1c8371c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83718) {
            ctx->pc = 0x1C83768u;
            goto label_1c83768;
        }
    }
    ctx->pc = 0x1C83720u;
    // 0x1c83720: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c83720u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83724: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C83724u;
    {
        const bool branch_taken_0x1c83724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c83724) {
            ctx->pc = 0x1C83748u;
            goto label_1c83748;
        }
    }
    ctx->pc = 0x1C8372Cu;
label_1c8372c:
    // 0x1c8372c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8372cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c83730:
    // 0x1c83730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c83730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c83734: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c83734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c83738: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c83738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8373c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8373cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c83740: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83740u;
        // 0x1c83744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83748u;
label_1c83748:
    // 0x1c83748: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C83748u;
    SET_GPR_U32(ctx, 31, 0x1C83750u);
    ctx->pc = 0x1C8374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83748u;
    // 0x1c8374c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C83748u, 0x1C83750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83750u;
label_1c83750:
    // 0x1c83750: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C83750u;
    {
        const bool branch_taken_0x1c83750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c83750) {
            ctx->pc = 0x1C83754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83750u;
            // 0x1c83754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83730;
        }
    }
    ctx->pc = 0x1C83758u;
    // 0x1c83758: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C83758u;
    SET_GPR_U32(ctx, 31, 0x1C83760u);
    ctx->pc = 0x1C8375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83758u;
    // 0x1c8375c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C83758u, 0x1C83760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83760u;
label_1c83760:
    // 0x1c83760: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C83760u;
    {
        const bool branch_taken_0x1c83760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83760u;
        // 0x1c83764: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83760) {
            ctx->pc = 0x1C83730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83730;
        }
    }
    ctx->pc = 0x1C83768u;
label_1c83768:
    // 0x1c83768: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c83768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8376c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8376cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83770: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c83770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83774: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1c83774u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c83778: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c83778u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c8377c: 0x11cf0014  beq         $t6, $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C8377Cu;
    {
        const bool branch_taken_0x1c8377c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C83780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8377Cu;
        // 0x1c83780: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8377c) {
            ctx->pc = 0x1C837D0u;
            goto label_1c837d0;
        }
    }
    ctx->pc = 0x1C83784u;
    // 0x1c83784: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1c83784u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c83788: 0x11e0002b  beqz        $t7, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C83788u;
    {
        const bool branch_taken_0x1c83788 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83788u;
        // 0x1c8378c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83788) {
            ctx->pc = 0x1C83838u;
            goto label_1c83838;
        }
    }
    ctx->pc = 0x1C83790u;
    // 0x1c83790: 0x11c00010  beqz        $t6, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C83790u;
    {
        const bool branch_taken_0x1c83790 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83790u;
        // 0x1c83794: 0x3c0f0000  lui         $t7, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)0 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83790) {
            ctx->pc = 0x1C837D4u;
            goto label_1c837d4;
        }
    }
    ctx->pc = 0x1C83798u;
label_1c83798:
    // 0x1c83798: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1c83798u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1c8379c:
    // 0x1c8379c: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C8379Cu;
    {
        const bool branch_taken_0x1c8379c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C837A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8379Cu;
        // 0x1c837a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8379c) {
            ctx->pc = 0x1C83730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83730;
        }
    }
    ctx->pc = 0x1C837A4u;
    // 0x1c837a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c837a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c837a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c837a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c837ac: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x1c837acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c837b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c837b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c837b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c837b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c837b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c837b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c837bc: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C837BCu;
    SET_GPR_U32(ctx, 31, 0x1C837C4u);
    ctx->pc = 0x1C837C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C837BCu;
    // 0x1c837c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C837BCu, 0x1C837C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C837C4u;
label_1c837c4:
    // 0x1c837c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c837c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c837c8: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x1C837C8u;
    {
        const bool branch_taken_0x1c837c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C837CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C837C8u;
        // 0x1c837cc: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c837c8) {
            ctx->pc = 0x1C8372Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8372c;
        }
    }
    ctx->pc = 0x1C837D0u;
label_1c837d0:
    // 0x1c837d0: 0x3c0ffff1  lui         $t7, 0xFFF1
    ctx->pc = 0x1c837d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65521 << 16));
label_1c837d4:
    // 0x1c837d4: 0x25efcea8  addiu       $t7, $t7, -0x3158
    ctx->pc = 0x1c837d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954664));
    // 0x1c837d8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c837d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c837dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c837dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c837e0: 0x4500ffed  bc1f        . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C837E0u;
    {
        const bool branch_taken_0x1c837e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C837E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C837E0u;
        // 0x1c837e4: 0x3c0f01c9  lui         $t7, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c837e0) {
            ctx->pc = 0x1C83798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83798;
        }
    }
    ctx->pc = 0x1C837E8u;
    // 0x1c837e8: 0x25efceac  addiu       $t7, $t7, -0x3154
    ctx->pc = 0x1c837e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954668));
    // 0x1c837ec: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c837ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c837f0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c837f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c837f4: 0x4503ffe9  bc1tl       . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C837F4u;
    {
        const bool branch_taken_0x1c837f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c837f4) {
            ctx->pc = 0x1C837F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C837F4u;
            // 0x1c837f8: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8379Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8379c;
        }
    }
    ctx->pc = 0x1C837FCu;
    // 0x1c837fc: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c837fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83800: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c83800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c83804: 0x25efceb0  addiu       $t7, $t7, -0x3150
    ctx->pc = 0x1c83804u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954672));
    // 0x1c83808: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1c83808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1c8380c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c8380cu;
    { uint32_t bits = FAST_READ32(0x1C8CEB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c83810: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c83810u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c83814: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83814u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83818: 0x25efceb4  addiu       $t7, $t7, -0x314C
    ctx->pc = 0x1c83818u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954676));
    // 0x1c8381c: 0xc72066a  jal         func_1C819A8
    ctx->pc = 0x1C8381Cu;
    SET_GPR_U32(ctx, 31, 0x1C83824u);
    ctx->pc = 0x1C83820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8381Cu;
    // 0x1c83820: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C819A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C819A8u, 0x1C8381Cu, 0x1C83824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83824u;
label_1c83824:
    // 0x1c83824: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83824u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83828: 0x25efceb8  addiu       $t7, $t7, -0x3148
    ctx->pc = 0x1c83828u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954680));
    // 0x1c8382c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c8382cu;
    { uint32_t bits = FAST_READ32(0x1C8CEB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83830: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x1C83830u;
    {
        const bool branch_taken_0x1c83830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83830u;
        // 0x1c83834: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83830) {
            ctx->pc = 0x1C83798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83798;
        }
    }
    ctx->pc = 0x1C83838u;
label_1c83838:
    // 0x1c83838: 0x55cfffd8  bnel        $t6, $t7, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1C83838u;
    {
        const bool branch_taken_0x1c83838 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c83838) {
            ctx->pc = 0x1C8383Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83838u;
            // 0x1c8383c: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8379Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8379c;
        }
    }
    ctx->pc = 0x1C83840u;
    // 0x1c83840: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C83840u;
    {
        const bool branch_taken_0x1c83840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83840u;
        // 0x1c83844: 0x3c0f01c9  lui         $t7, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83840) {
            ctx->pc = 0x1C837D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c837d4;
        }
    }
    ctx->pc = 0x1C83848u;
    // 0x1c83848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c83848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8384c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8384cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c83850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c83850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c83854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c83854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c83858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c83858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8385c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8385cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c83860: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C83860u;
    SET_GPR_U32(ctx, 31, 0x1C83868u);
    ctx->pc = 0x1C83864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83860u;
    // 0x1c83864: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C83860u, 0x1C83868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83868u;
label_1c83868:
    // 0x1c83868: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c83868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8386c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83870: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c83870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c83874: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c83874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c83878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8387c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8387cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83880: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c83880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83884: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C83884u;
    SET_GPR_U32(ctx, 31, 0x1C8388Cu);
    ctx->pc = 0x1C83888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83884u;
    // 0x1c83888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C83884u, 0x1C8388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8388Cu;
label_1c8388c:
    // 0x1c8388c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83890: 0xc7203da  jal         func_1C80F68
    ctx->pc = 0x1C83890u;
    SET_GPR_U32(ctx, 31, 0x1C83898u);
    ctx->pc = 0x1C83894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83890u;
    // 0x1c83894: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F68u, 0x1C83890u, 0x1C83898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83898u;
label_1c83898:
    // 0x1c83898: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1c83898u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c8389c: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c8389cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c838a0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c838a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c838a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c838a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c838a8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c838a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c838ac: 0x11cf0017  beq         $t6, $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C838ACu;
    {
        const bool branch_taken_0x1c838ac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C838B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C838ACu;
        // 0x1c838b0: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c838ac) {
            ctx->pc = 0x1C8390Cu;
            goto label_1c8390c;
        }
    }
    ctx->pc = 0x1C838B4u;
    // 0x1c838b4: 0x51a00011  beql        $t5, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C838B4u;
    {
        const bool branch_taken_0x1c838b4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c838b4) {
            ctx->pc = 0x1C838B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C838B4u;
            // 0x1c838b8: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C838FCu;
            goto label_1c838fc;
        }
    }
    ctx->pc = 0x1C838BCu;
    // 0x1c838bc: 0x51c00007  beql        $t6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C838BCu;
    {
        const bool branch_taken_0x1c838bc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c838bc) {
            ctx->pc = 0x1C838C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C838BCu;
            // 0x1c838c0: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C838DCu;
            goto label_1c838dc;
        }
    }
    ctx->pc = 0x1C838C4u;
    // 0x1c838c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c838c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c838c8:
    // 0x1c838c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c838c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c838cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c838ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c838d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C838D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C838D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C838D0u;
        // 0x1c838d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C838D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C838D8u;
label_1c838d8:
    // 0x1c838d8: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c838d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_1c838dc:
    // 0x1c838dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c838dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c838e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c838e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c838e4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c838e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c838e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c838e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c838ec: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1c838ecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1c838f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c838f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c838f4: 0x872066a  j           func_1C819A8
    ctx->pc = 0x1C838F4u;
    ctx->pc = 0x1C838F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C838F4u;
    // 0x1c838f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C819A8u;
    sub_01C819A8_0x1c819a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C838FCu;
label_1c838fc:
    // 0x1c838fc: 0x51cffff6  beql        $t6, $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C838FCu;
    {
        const bool branch_taken_0x1c838fc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c838fc) {
            ctx->pc = 0x1C83900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C838FCu;
            // 0x1c83900: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C838D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c838d8;
        }
    }
    ctx->pc = 0x1C83904u;
    // 0x1c83904: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C83904u;
    {
        const bool branch_taken_0x1c83904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83904u;
        // 0x1c83908: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83904) {
            ctx->pc = 0x1C838C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c838c8;
        }
    }
    ctx->pc = 0x1C8390Cu;
label_1c8390c:
    // 0x1c8390c: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C8390Cu;
    {
        const bool branch_taken_0x1c8390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8390Cu;
        // 0x1c83910: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8390c) {
            ctx->pc = 0x1C838DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c838dc;
        }
    }
    ctx->pc = 0x1C83914u;
    // 0x1c83914: 0x0  nop
    ctx->pc = 0x1c83914u;
    // NOP
    // 0x1c83918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c83918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8391c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c83920: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c83920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c83924: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C83924u;
    SET_GPR_U32(ctx, 31, 0x1C8392Cu);
    ctx->pc = 0x1C83928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83924u;
    // 0x1c83928: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C83924u, 0x1C8392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8392Cu;
label_1c8392c:
    // 0x1c8392c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8392cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c83930: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83930u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83934: 0x25efcebc  addiu       $t7, $t7, -0x3144
    ctx->pc = 0x1c83934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954684));
    // 0x1c83938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c83938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8393c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c8393cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c83940: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c83940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c83944: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1c83944u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1c83948: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1c83948u;
    { uint32_t bits = FAST_READ32(0x1C8CEBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8394c: 0x872066a  j           func_1C819A8
    ctx->pc = 0x1C8394Cu;
    ctx->pc = 0x1C83950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8394Cu;
    // 0x1c83950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C819A8u;
    sub_01C819A8_0x1c819a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C83954u;
    // 0x1c83954: 0x0  nop
    ctx->pc = 0x1c83954u;
    // NOP
    ctx->pc = 0x1c83958u;
}
