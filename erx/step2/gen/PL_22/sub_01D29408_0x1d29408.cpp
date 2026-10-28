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

// Function: sub_01D29408
// Address: 0x1d29408 - 0x1d29540
void sub_01D29408_0x1d29408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29408_0x1d29408");
#endif

    switch (ctx->pc) {
        case 0x1d29428u: goto label_1d29428;
        case 0x1d2943cu: goto label_1d2943c;
        case 0x1d29440u: goto label_1d29440;
        case 0x1d2945cu: goto label_1d2945c;
        case 0x1d2946cu: goto label_1d2946c;
        case 0x1d294b8u: goto label_1d294b8;
        case 0x1d294f4u: goto label_1d294f4;
        case 0x1d29500u: goto label_1d29500;
        case 0x1d29510u: goto label_1d29510;
        case 0x1d29528u: goto label_1d29528;
        default: break;
    }

    ctx->pc = 0x1d29408u;

    // 0x1d29408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d29408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2940c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d2940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d29410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d29410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d29414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d29414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d29418: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d29418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2941c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d2941cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d29420: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D29420u;
    SET_GPR_U32(ctx, 31, 0x1D29428u);
    ctx->pc = 0x1D29424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29420u;
    // 0x1d29424: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D29420u, 0x1D29428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29428u;
label_1d29428:
    // 0x1d29428: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d29428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d2942c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D2942Cu;
    {
        const bool branch_taken_0x1d2942c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2942Cu;
        // 0x1d29430: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2942c) {
            ctx->pc = 0x1D29478u;
            goto label_1d29478;
        }
    }
    ctx->pc = 0x1D29434u;
    // 0x1d29434: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D29434u;
    {
        const bool branch_taken_0x1d29434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d29434) {
            ctx->pc = 0x1D29454u;
            goto label_1d29454;
        }
    }
    ctx->pc = 0x1D2943Cu;
label_1d2943c:
    // 0x1d2943c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2943cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d29440:
    // 0x1d29440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d29440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d29444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d29448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d29448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2944c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2944Cu;
        // 0x1d29450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2944Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29454u;
label_1d29454:
    // 0x1d29454: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D29454u;
    SET_GPR_U32(ctx, 31, 0x1D2945Cu);
    ctx->pc = 0x1D29458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29454u;
    // 0x1d29458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D29454u, 0x1D2945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2945Cu;
label_1d2945c:
    // 0x1d2945c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D2945Cu;
    {
        const bool branch_taken_0x1d2945c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D29460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2945Cu;
        // 0x1d29460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2945c) {
            ctx->pc = 0x1D2943Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2943c;
        }
    }
    ctx->pc = 0x1D29464u;
    // 0x1d29464: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D29464u;
    SET_GPR_U32(ctx, 31, 0x1D2946Cu);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D29464u, 0x1D2946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2946Cu;
label_1d2946c:
    // 0x1d2946c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D2946Cu;
    {
        const bool branch_taken_0x1d2946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2946Cu;
        // 0x1d29470: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2946c) {
            ctx->pc = 0x1D29440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29440;
        }
    }
    ctx->pc = 0x1D29474u;
    // 0x1d29474: 0x0  nop
    ctx->pc = 0x1d29474u;
    // NOP
label_1d29478:
    // 0x1d29478: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d29478u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d2947c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D2947Cu;
    {
        const bool branch_taken_0x1d2947c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D29480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2947Cu;
        // 0x1d29480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2947c) {
            ctx->pc = 0x1D29440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29440;
        }
    }
    ctx->pc = 0x1D29484u;
    // 0x1d29484: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d29484u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d29488: 0x3c0e01d3  lui         $t6, 0x1D3
    ctx->pc = 0x1d29488u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)467 << 16));
    // 0x1d2948c: 0x25ced160  addiu       $t6, $t6, -0x2EA0
    ctx->pc = 0x1d2948cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955360));
    // 0x1d29490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d29490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29494: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d29494u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d29498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d29498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2949c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d2949cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d294a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d294a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d294a4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d294a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d294a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d294a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d294ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d294acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d294b0: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D294B0u;
    SET_GPR_U32(ctx, 31, 0x1D294B8u);
    ctx->pc = 0x1D294B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D294B0u;
    // 0x1d294b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D294B0u, 0x1D294B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D294B8u;
label_1d294b8:
    // 0x1d294b8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d294b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d294bc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D294BCu;
    {
        const bool branch_taken_0x1d294bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D294C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D294BCu;
        // 0x1d294c0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d294bc) {
            ctx->pc = 0x1D2943Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2943c;
        }
    }
    ctx->pc = 0x1D294C4u;
    // 0x1d294c4: 0x0  nop
    ctx->pc = 0x1d294c4u;
    // NOP
    // 0x1d294c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d294c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d294cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d294ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d294d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d294d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d294d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d294d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d294d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d294d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d294dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d294dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d294e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d294e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d294e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d294e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d294e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d294e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d294ec: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D294ECu;
    SET_GPR_U32(ctx, 31, 0x1D294F4u);
    ctx->pc = 0x1D294F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D294ECu;
    // 0x1d294f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D294ECu, 0x1D294F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D294F4u;
label_1d294f4:
    // 0x1d294f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d294f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d294f8: 0xc749b1e  jal         func_1D26C78
    ctx->pc = 0x1D294F8u;
    SET_GPR_U32(ctx, 31, 0x1D29500u);
    ctx->pc = 0x1D294FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D294F8u;
    // 0x1d294fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C78u, 0x1D294F8u, 0x1D29500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29500u;
label_1d29500:
    // 0x1d29500: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d29500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d29504: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d29504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d29508: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D29508u;
    SET_GPR_U32(ctx, 31, 0x1D29510u);
    ctx->pc = 0x1D2950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29508u;
    // 0x1d2950c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D29508u, 0x1D29510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29510u;
label_1d29510:
    // 0x1d29510: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d29510u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d29514: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d29514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d29518: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d29518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d2951c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d2951cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d29520: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D29520u;
    SET_GPR_U32(ctx, 31, 0x1D29528u);
    ctx->pc = 0x1D29524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29520u;
    // 0x1d29524: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D29520u, 0x1D29528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29528u;
label_1d29528:
    // 0x1d29528: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d29528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d2952c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2952cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29530: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d29530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d29534: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29534u;
        // 0x1d29538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2953Cu;
    // 0x1d2953c: 0x0  nop
    ctx->pc = 0x1d2953cu;
    // NOP
    ctx->pc = 0x1d29540u;
}
