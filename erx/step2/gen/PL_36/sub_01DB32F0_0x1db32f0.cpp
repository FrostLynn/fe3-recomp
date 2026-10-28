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

// Function: sub_01DB32F0
// Address: 0x1db32f0 - 0x1db3428
void sub_01DB32F0_0x1db32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB32F0_0x1db32f0");
#endif

    switch (ctx->pc) {
        case 0x1db3310u: goto label_1db3310;
        case 0x1db3324u: goto label_1db3324;
        case 0x1db3328u: goto label_1db3328;
        case 0x1db3344u: goto label_1db3344;
        case 0x1db3354u: goto label_1db3354;
        case 0x1db33a0u: goto label_1db33a0;
        case 0x1db33dcu: goto label_1db33dc;
        case 0x1db33e8u: goto label_1db33e8;
        case 0x1db33f8u: goto label_1db33f8;
        case 0x1db3410u: goto label_1db3410;
        default: break;
    }

    ctx->pc = 0x1db32f0u;

    // 0x1db32f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db32f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db32f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db32f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db32f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db32fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db32fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db3300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db3300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3304: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1db3304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1db3308: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB3308u;
    SET_GPR_U32(ctx, 31, 0x1DB3310u);
    ctx->pc = 0x1DB330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3308u;
    // 0x1db330c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB3308u, 0x1DB3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3310u;
label_1db3310:
    // 0x1db3310: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1db3310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1db3314: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DB3314u;
    {
        const bool branch_taken_0x1db3314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3314u;
        // 0x1db3318: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3314) {
            ctx->pc = 0x1DB3360u;
            goto label_1db3360;
        }
    }
    ctx->pc = 0x1DB331Cu;
    // 0x1db331c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB331Cu;
    {
        const bool branch_taken_0x1db331c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1db331c) {
            ctx->pc = 0x1DB333Cu;
            goto label_1db333c;
        }
    }
    ctx->pc = 0x1DB3324u;
label_1db3324:
    // 0x1db3324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db3324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db3328:
    // 0x1db3328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db3328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db332c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db332cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db3330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db3330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db3334: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3334u;
        // 0x1db3338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB333Cu;
label_1db333c:
    // 0x1db333c: 0xc76c3d2  jal         func_1DB0F48
    ctx->pc = 0x1DB333Cu;
    SET_GPR_U32(ctx, 31, 0x1DB3344u);
    ctx->pc = 0x1DB3340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB333Cu;
    // 0x1db3340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F48u, 0x1DB333Cu, 0x1DB3344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3344u;
label_1db3344:
    // 0x1db3344: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DB3344u;
    {
        const bool branch_taken_0x1db3344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DB3348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3344u;
        // 0x1db3348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3344) {
            ctx->pc = 0x1DB3324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3324;
        }
    }
    ctx->pc = 0x1DB334Cu;
    // 0x1db334c: 0xc76c3d4  jal         func_1DB0F50
    ctx->pc = 0x1DB334Cu;
    SET_GPR_U32(ctx, 31, 0x1DB3354u);
    ctx->pc = 0x1DB0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F50u, 0x1DB334Cu, 0x1DB3354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3354u;
label_1db3354:
    // 0x1db3354: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1DB3354u;
    {
        const bool branch_taken_0x1db3354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3354u;
        // 0x1db3358: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3354) {
            ctx->pc = 0x1DB3328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3328;
        }
    }
    ctx->pc = 0x1DB335Cu;
    // 0x1db335c: 0x0  nop
    ctx->pc = 0x1db335cu;
    // NOP
label_1db3360:
    // 0x1db3360: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1db3360u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1db3364: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DB3364u;
    {
        const bool branch_taken_0x1db3364 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3364u;
        // 0x1db3368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3364) {
            ctx->pc = 0x1DB3328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3328;
        }
    }
    ctx->pc = 0x1DB336Cu;
    // 0x1db336c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1db336cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1db3370: 0x3c0e01db  lui         $t6, 0x1DB
    ctx->pc = 0x1db3370u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)475 << 16));
    // 0x1db3374: 0x25ce7dd8  addiu       $t6, $t6, 0x7DD8
    ctx->pc = 0x1db3374u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32216));
    // 0x1db3378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db3378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db337c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1db337cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1db3380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db3380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3384: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1db3384u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1db3388: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db3388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db338c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1db338cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1db3390: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db3390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3394: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db3394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db3398: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB3398u;
    SET_GPR_U32(ctx, 31, 0x1DB33A0u);
    ctx->pc = 0x1DB339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3398u;
    // 0x1db339c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB3398u, 0x1DB33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB33A0u;
label_1db33a0:
    // 0x1db33a0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db33a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db33a4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1DB33A4u;
    {
        const bool branch_taken_0x1db33a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB33A4u;
        // 0x1db33a8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db33a4) {
            ctx->pc = 0x1DB3324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db3324;
        }
    }
    ctx->pc = 0x1DB33ACu;
    // 0x1db33ac: 0x0  nop
    ctx->pc = 0x1db33acu;
    // NOP
    // 0x1db33b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db33b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db33b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db33b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db33b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db33b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db33bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db33bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db33c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db33c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db33c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db33c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db33c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db33c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db33cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db33ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db33d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db33d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db33d4: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB33D4u;
    SET_GPR_U32(ctx, 31, 0x1DB33DCu);
    ctx->pc = 0x1DB33D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB33D4u;
    // 0x1db33d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB33D4u, 0x1DB33DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB33DCu;
label_1db33dc:
    // 0x1db33dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db33dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db33e0: 0xc76c3da  jal         func_1DB0F68
    ctx->pc = 0x1DB33E0u;
    SET_GPR_U32(ctx, 31, 0x1DB33E8u);
    ctx->pc = 0x1DB33E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB33E0u;
    // 0x1db33e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F68u, 0x1DB33E0u, 0x1DB33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB33E8u;
label_1db33e8:
    // 0x1db33e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db33ec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db33ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db33f0: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB33F0u;
    SET_GPR_U32(ctx, 31, 0x1DB33F8u);
    ctx->pc = 0x1DB33F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB33F0u;
    // 0x1db33f4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB33F0u, 0x1DB33F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB33F8u;
label_1db33f8:
    // 0x1db33f8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db33f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db33fc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1db33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1db3400: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1db3400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1db3404: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db3404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db3408: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB3408u;
    SET_GPR_U32(ctx, 31, 0x1DB3410u);
    ctx->pc = 0x1DB340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3408u;
    // 0x1db340c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB3408u, 0x1DB3410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3410u;
label_1db3410:
    // 0x1db3410: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1db3410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1db3414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db3414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db3418: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db3418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db341c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB341Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB341Cu;
        // 0x1db3420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB341Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB3424u;
    // 0x1db3424: 0x0  nop
    ctx->pc = 0x1db3424u;
    // NOP
    ctx->pc = 0x1db3428u;
}
