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

// Function: sub_01CC4700
// Address: 0x1cc4700 - 0x1cc4838
void sub_01CC4700_0x1cc4700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4700_0x1cc4700");
#endif

    switch (ctx->pc) {
        case 0x1cc4720u: goto label_1cc4720;
        case 0x1cc4734u: goto label_1cc4734;
        case 0x1cc4738u: goto label_1cc4738;
        case 0x1cc4754u: goto label_1cc4754;
        case 0x1cc4764u: goto label_1cc4764;
        case 0x1cc47b0u: goto label_1cc47b0;
        case 0x1cc47ecu: goto label_1cc47ec;
        case 0x1cc47f8u: goto label_1cc47f8;
        case 0x1cc4808u: goto label_1cc4808;
        case 0x1cc4820u: goto label_1cc4820;
        default: break;
    }

    ctx->pc = 0x1cc4700u;

    // 0x1cc4700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc4700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc4704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc4704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4708: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc4708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc470c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc4710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc4710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4714: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc4714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc4718: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4718u;
    SET_GPR_U32(ctx, 31, 0x1CC4720u);
    ctx->pc = 0x1CC471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4718u;
    // 0x1cc471c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4718u, 0x1CC4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4720u;
label_1cc4720:
    // 0x1cc4720: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cc4720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cc4724: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CC4724u;
    {
        const bool branch_taken_0x1cc4724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4724u;
        // 0x1cc4728: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4724) {
            ctx->pc = 0x1CC4770u;
            goto label_1cc4770;
        }
    }
    ctx->pc = 0x1CC472Cu;
    // 0x1cc472c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC472Cu;
    {
        const bool branch_taken_0x1cc472c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cc472c) {
            ctx->pc = 0x1CC474Cu;
            goto label_1cc474c;
        }
    }
    ctx->pc = 0x1CC4734u;
label_1cc4734:
    // 0x1cc4734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc4734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4738:
    // 0x1cc4738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc473c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc473cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc4740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc4740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc4744: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4744u;
        // 0x1cc4748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC474Cu;
label_1cc474c:
    // 0x1cc474c: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC474Cu;
    SET_GPR_U32(ctx, 31, 0x1CC4754u);
    ctx->pc = 0x1CC4750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC474Cu;
    // 0x1cc4750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC474Cu, 0x1CC4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4754u;
label_1cc4754:
    // 0x1cc4754: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CC4754u;
    {
        const bool branch_taken_0x1cc4754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CC4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4754u;
        // 0x1cc4758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4754) {
            ctx->pc = 0x1CC4734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4734;
        }
    }
    ctx->pc = 0x1CC475Cu;
    // 0x1cc475c: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC475Cu;
    SET_GPR_U32(ctx, 31, 0x1CC4764u);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC475Cu, 0x1CC4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4764u;
label_1cc4764:
    // 0x1cc4764: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CC4764u;
    {
        const bool branch_taken_0x1cc4764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4764u;
        // 0x1cc4768: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4764) {
            ctx->pc = 0x1CC4738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4738;
        }
    }
    ctx->pc = 0x1CC476Cu;
    // 0x1cc476c: 0x0  nop
    ctx->pc = 0x1cc476cu;
    // NOP
label_1cc4770:
    // 0x1cc4770: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cc4770u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cc4774: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CC4774u;
    {
        const bool branch_taken_0x1cc4774 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4774u;
        // 0x1cc4778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4774) {
            ctx->pc = 0x1CC4738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4738;
        }
    }
    ctx->pc = 0x1CC477Cu;
    // 0x1cc477c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cc477cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cc4780: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x1cc4780u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x1cc4784: 0x25ce7208  addiu       $t6, $t6, 0x7208
    ctx->pc = 0x1cc4784u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 29192));
    // 0x1cc4788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc4788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc478c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cc478cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cc4790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc4790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4794: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cc4794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cc4798: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc4798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc479c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cc479cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cc47a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc47a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc47a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc47a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc47a8: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC47A8u;
    SET_GPR_U32(ctx, 31, 0x1CC47B0u);
    ctx->pc = 0x1CC47ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC47A8u;
    // 0x1cc47ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC47A8u, 0x1CC47B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC47B0u;
label_1cc47b0:
    // 0x1cc47b0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc47b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc47b4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CC47B4u;
    {
        const bool branch_taken_0x1cc47b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC47B4u;
        // 0x1cc47b8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc47b4) {
            ctx->pc = 0x1CC4734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4734;
        }
    }
    ctx->pc = 0x1CC47BCu;
    // 0x1cc47bc: 0x0  nop
    ctx->pc = 0x1cc47bcu;
    // NOP
    // 0x1cc47c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc47c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc47c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc47c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc47c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc47c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc47cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc47ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc47d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc47d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc47d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc47d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc47d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc47d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc47dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc47dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc47e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc47e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc47e4: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC47E4u;
    SET_GPR_U32(ctx, 31, 0x1CC47ECu);
    ctx->pc = 0x1CC47E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC47E4u;
    // 0x1cc47e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC47E4u, 0x1CC47ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC47ECu;
label_1cc47ec:
    // 0x1cc47ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc47ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc47f0: 0xc73091c  jal         func_1CC2470
    ctx->pc = 0x1CC47F0u;
    SET_GPR_U32(ctx, 31, 0x1CC47F8u);
    ctx->pc = 0x1CC47F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC47F0u;
    // 0x1cc47f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2470u, 0x1CC47F0u, 0x1CC47F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC47F8u;
label_1cc47f8:
    // 0x1cc47f8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc47f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc47fc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cc47fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc4800: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4800u;
    SET_GPR_U32(ctx, 31, 0x1CC4808u);
    ctx->pc = 0x1CC4804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4800u;
    // 0x1cc4804: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4800u, 0x1CC4808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4808u;
label_1cc4808:
    // 0x1cc4808: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc4808u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc480c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cc480cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cc4810: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cc4810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cc4814: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc4814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc4818: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4818u;
    SET_GPR_U32(ctx, 31, 0x1CC4820u);
    ctx->pc = 0x1CC481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4818u;
    // 0x1cc481c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4818u, 0x1CC4820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4820u;
label_1cc4820:
    // 0x1cc4820: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cc4820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cc4824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4828: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc4828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc482c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC482Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC482Cu;
        // 0x1cc4830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC482Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4834u;
    // 0x1cc4834: 0x0  nop
    ctx->pc = 0x1cc4834u;
    // NOP
    ctx->pc = 0x1cc4838u;
}
