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

// Function: sub_01D71280
// Address: 0x1d71280 - 0x1d713b8
void sub_01D71280_0x1d71280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71280_0x1d71280");
#endif

    switch (ctx->pc) {
        case 0x1d712a0u: goto label_1d712a0;
        case 0x1d712b4u: goto label_1d712b4;
        case 0x1d712b8u: goto label_1d712b8;
        case 0x1d712d4u: goto label_1d712d4;
        case 0x1d712e4u: goto label_1d712e4;
        case 0x1d71330u: goto label_1d71330;
        case 0x1d7136cu: goto label_1d7136c;
        case 0x1d71378u: goto label_1d71378;
        case 0x1d71388u: goto label_1d71388;
        case 0x1d713a0u: goto label_1d713a0;
        default: break;
    }

    ctx->pc = 0x1d71280u;

    // 0x1d71280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d71280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d71284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d71284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d71288: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d71288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7128c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d71290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d71290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71294: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d71294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d71298: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D71298u;
    SET_GPR_U32(ctx, 31, 0x1D712A0u);
    ctx->pc = 0x1D7129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71298u;
    // 0x1d7129c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D71298u, 0x1D712A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D712A0u;
label_1d712a0:
    // 0x1d712a0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d712a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d712a4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D712A4u;
    {
        const bool branch_taken_0x1d712a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D712A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D712A4u;
        // 0x1d712a8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d712a4) {
            ctx->pc = 0x1D712F0u;
            goto label_1d712f0;
        }
    }
    ctx->pc = 0x1D712ACu;
    // 0x1d712ac: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D712ACu;
    {
        const bool branch_taken_0x1d712ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d712ac) {
            ctx->pc = 0x1D712CCu;
            goto label_1d712cc;
        }
    }
    ctx->pc = 0x1D712B4u;
label_1d712b4:
    // 0x1d712b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d712b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d712b8:
    // 0x1d712b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d712b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d712bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d712bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d712c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d712c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d712c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D712C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D712C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D712C4u;
        // 0x1d712c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D712C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D712CCu;
label_1d712cc:
    // 0x1d712cc: 0xc75c008  jal         func_1D70020
    ctx->pc = 0x1D712CCu;
    SET_GPR_U32(ctx, 31, 0x1D712D4u);
    ctx->pc = 0x1D712D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D712CCu;
    // 0x1d712d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70020u, 0x1D712CCu, 0x1D712D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D712D4u;
label_1d712d4:
    // 0x1d712d4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D712D4u;
    {
        const bool branch_taken_0x1d712d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D712D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D712D4u;
        // 0x1d712d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d712d4) {
            ctx->pc = 0x1D712B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d712b4;
        }
    }
    ctx->pc = 0x1D712DCu;
    // 0x1d712dc: 0xc75c00a  jal         func_1D70028
    ctx->pc = 0x1D712DCu;
    SET_GPR_U32(ctx, 31, 0x1D712E4u);
    ctx->pc = 0x1D70028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70028u, 0x1D712DCu, 0x1D712E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D712E4u;
label_1d712e4:
    // 0x1d712e4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D712E4u;
    {
        const bool branch_taken_0x1d712e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D712E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D712E4u;
        // 0x1d712e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d712e4) {
            ctx->pc = 0x1D712B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d712b8;
        }
    }
    ctx->pc = 0x1D712ECu;
    // 0x1d712ec: 0x0  nop
    ctx->pc = 0x1d712ecu;
    // NOP
label_1d712f0:
    // 0x1d712f0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d712f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d712f4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D712F4u;
    {
        const bool branch_taken_0x1d712f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D712F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D712F4u;
        // 0x1d712f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d712f4) {
            ctx->pc = 0x1D712B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d712b8;
        }
    }
    ctx->pc = 0x1D712FCu;
    // 0x1d712fc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d712fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d71300: 0x3c0e01d7  lui         $t6, 0x1D7
    ctx->pc = 0x1d71300u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)471 << 16));
    // 0x1d71304: 0x25ce3db0  addiu       $t6, $t6, 0x3DB0
    ctx->pc = 0x1d71304u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15792));
    // 0x1d71308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d71308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7130c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d7130cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d71310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d71310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71314: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d71314u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d71318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d71318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7131c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d7131cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d71320: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d71320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71324: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d71324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71328: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D71328u;
    SET_GPR_U32(ctx, 31, 0x1D71330u);
    ctx->pc = 0x1D7132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71328u;
    // 0x1d7132c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D71328u, 0x1D71330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71330u;
label_1d71330:
    // 0x1d71330: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d71330u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71334: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D71334u;
    {
        const bool branch_taken_0x1d71334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71334u;
        // 0x1d71338: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71334) {
            ctx->pc = 0x1D712B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d712b4;
        }
    }
    ctx->pc = 0x1D7133Cu;
    // 0x1d7133c: 0x0  nop
    ctx->pc = 0x1d7133cu;
    // NOP
    // 0x1d71340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d71340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d71344: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d71344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d71348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d71348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7134c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7134cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71350: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d71350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d71354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d71354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d71358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7135c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7135cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71360: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d71360u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71364: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D71364u;
    SET_GPR_U32(ctx, 31, 0x1D7136Cu);
    ctx->pc = 0x1D71368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71364u;
    // 0x1d71368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D71364u, 0x1D7136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7136Cu;
label_1d7136c:
    // 0x1d7136c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71370: 0xc75c010  jal         func_1D70040
    ctx->pc = 0x1D71370u;
    SET_GPR_U32(ctx, 31, 0x1D71378u);
    ctx->pc = 0x1D71374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71370u;
    // 0x1d71374: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70040u, 0x1D71370u, 0x1D71378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71378u;
label_1d71378:
    // 0x1d71378: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d71378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7137c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7137cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d71380: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D71380u;
    SET_GPR_U32(ctx, 31, 0x1D71388u);
    ctx->pc = 0x1D71384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71380u;
    // 0x1d71384: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D71380u, 0x1D71388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71388u;
label_1d71388:
    // 0x1d71388: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d71388u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7138c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d7138cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d71390: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d71390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d71394: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d71394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d71398: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D71398u;
    SET_GPR_U32(ctx, 31, 0x1D713A0u);
    ctx->pc = 0x1D7139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71398u;
    // 0x1d7139c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D71398u, 0x1D713A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D713A0u;
label_1d713a0:
    // 0x1d713a0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d713a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d713a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d713a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d713a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d713a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d713ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D713ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D713B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D713ACu;
        // 0x1d713b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D713ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D713B4u;
    // 0x1d713b4: 0x0  nop
    ctx->pc = 0x1d713b4u;
    // NOP
    ctx->pc = 0x1d713b8u;
}
