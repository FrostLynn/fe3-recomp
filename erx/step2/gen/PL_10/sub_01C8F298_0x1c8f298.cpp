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

// Function: sub_01C8F298
// Address: 0x1c8f298 - 0x1c8f3a8
void sub_01C8F298_0x1c8f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F298_0x1c8f298");
#endif

    switch (ctx->pc) {
        case 0x1c8f2b8u: goto label_1c8f2b8;
        case 0x1c8f2ccu: goto label_1c8f2cc;
        case 0x1c8f2d0u: goto label_1c8f2d0;
        case 0x1c8f2ecu: goto label_1c8f2ec;
        case 0x1c8f2fcu: goto label_1c8f2fc;
        case 0x1c8f348u: goto label_1c8f348;
        case 0x1c8f384u: goto label_1c8f384;
        case 0x1c8f390u: goto label_1c8f390;
        default: break;
    }

    ctx->pc = 0x1c8f298u;

    // 0x1c8f298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8f298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8f29c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8f29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8f2a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8f2a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8f2a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c8f2a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f2ac: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8f2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8f2b0: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8F2B0u;
    SET_GPR_U32(ctx, 31, 0x1C8F2B8u);
    ctx->pc = 0x1C8F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F2B0u;
    // 0x1c8f2b4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8F2B0u, 0x1C8F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F2B8u;
label_1c8f2b8:
    // 0x1c8f2b8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c8f2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c8f2bc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8F2BCu;
    {
        const bool branch_taken_0x1c8f2bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F2BCu;
        // 0x1c8f2c0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f2bc) {
            ctx->pc = 0x1C8F308u;
            goto label_1c8f308;
        }
    }
    ctx->pc = 0x1C8F2C4u;
    // 0x1c8f2c4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8F2C4u;
    {
        const bool branch_taken_0x1c8f2c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c8f2c4) {
            ctx->pc = 0x1C8F2E4u;
            goto label_1c8f2e4;
        }
    }
    ctx->pc = 0x1C8F2CCu;
label_1c8f2cc:
    // 0x1c8f2cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8f2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8f2d0:
    // 0x1c8f2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8f2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f2d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8f2d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8f2d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8f2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8f2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F2DCu;
        // 0x1c8f2e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F2E4u;
label_1c8f2e4:
    // 0x1c8f2e4: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8F2E4u;
    SET_GPR_U32(ctx, 31, 0x1C8F2ECu);
    ctx->pc = 0x1C8F2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F2E4u;
    // 0x1c8f2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8F2E4u, 0x1C8F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F2ECu;
label_1c8f2ec:
    // 0x1c8f2ec: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C8F2ECu;
    {
        const bool branch_taken_0x1c8f2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C8F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F2ECu;
        // 0x1c8f2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f2ec) {
            ctx->pc = 0x1C8F2CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f2cc;
        }
    }
    ctx->pc = 0x1C8F2F4u;
    // 0x1c8f2f4: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8F2F4u;
    SET_GPR_U32(ctx, 31, 0x1C8F2FCu);
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8F2F4u, 0x1C8F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F2FCu;
label_1c8f2fc:
    // 0x1c8f2fc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C8F2FCu;
    {
        const bool branch_taken_0x1c8f2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F2FCu;
        // 0x1c8f300: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f2fc) {
            ctx->pc = 0x1C8F2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f2d0;
        }
    }
    ctx->pc = 0x1C8F304u;
    // 0x1c8f304: 0x0  nop
    ctx->pc = 0x1c8f304u;
    // NOP
label_1c8f308:
    // 0x1c8f308: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c8f308u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c8f30c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C8F30Cu;
    {
        const bool branch_taken_0x1c8f30c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F30Cu;
        // 0x1c8f310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f30c) {
            ctx->pc = 0x1C8F2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f2d0;
        }
    }
    ctx->pc = 0x1C8F314u;
    // 0x1c8f314: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c8f314u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c8f318: 0x3c0e01c9  lui         $t6, 0x1C9
    ctx->pc = 0x1c8f318u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f31c: 0x25ce2910  addiu       $t6, $t6, 0x2910
    ctx->pc = 0x1c8f31cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 10512));
    // 0x1c8f320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f324: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c8f324u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c8f328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8f328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f32c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c8f32cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c8f330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8f330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f334: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c8f334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c8f338: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8f338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f33c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8f33cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f340: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8F340u;
    SET_GPR_U32(ctx, 31, 0x1C8F348u);
    ctx->pc = 0x1C8F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F340u;
    // 0x1c8f344: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8F340u, 0x1C8F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F348u;
label_1c8f348:
    // 0x1c8f348: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8f348u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f34c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C8F34Cu;
    {
        const bool branch_taken_0x1c8f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F34Cu;
        // 0x1c8f350: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f34c) {
            ctx->pc = 0x1C8F2CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f2cc;
        }
    }
    ctx->pc = 0x1C8F354u;
    // 0x1c8f354: 0x0  nop
    ctx->pc = 0x1c8f354u;
    // NOP
    // 0x1c8f358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8f358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8f35c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c8f35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8f360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8f360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8f364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8f364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f368: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8f368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8f36c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8f36cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8f370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f374: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8f374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f378: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8f378u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f37c: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8F37Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F384u);
    ctx->pc = 0x1C8F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F37Cu;
    // 0x1c8f380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8F37Cu, 0x1C8F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F384u;
label_1c8f384:
    // 0x1c8f384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8f384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f388: 0xc7233da  jal         func_1C8CF68
    ctx->pc = 0x1C8F388u;
    SET_GPR_U32(ctx, 31, 0x1C8F390u);
    ctx->pc = 0x1C8F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F388u;
    // 0x1c8f38c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF68u, 0x1C8F388u, 0x1C8F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F390u;
label_1c8f390:
    // 0x1c8f390: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c8f390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c8f394: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8f394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8f398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8f398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f39c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F39Cu;
        // 0x1c8f3a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F3A4u;
    // 0x1c8f3a4: 0x0  nop
    ctx->pc = 0x1c8f3a4u;
    // NOP
    ctx->pc = 0x1c8f3a8u;
}
