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

// Function: sub_01CC45E8
// Address: 0x1cc45e8 - 0x1cc46f8
void sub_01CC45E8_0x1cc45e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC45E8_0x1cc45e8");
#endif

    switch (ctx->pc) {
        case 0x1cc4608u: goto label_1cc4608;
        case 0x1cc461cu: goto label_1cc461c;
        case 0x1cc4620u: goto label_1cc4620;
        case 0x1cc463cu: goto label_1cc463c;
        case 0x1cc464cu: goto label_1cc464c;
        case 0x1cc4698u: goto label_1cc4698;
        case 0x1cc46d4u: goto label_1cc46d4;
        case 0x1cc46e0u: goto label_1cc46e0;
        default: break;
    }

    ctx->pc = 0x1cc45e8u;

    // 0x1cc45e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc45e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc45ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc45ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc45f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc45f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc45f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc45f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc45f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc45f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc45fc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc45fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc4600: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4600u;
    SET_GPR_U32(ctx, 31, 0x1CC4608u);
    ctx->pc = 0x1CC4604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4600u;
    // 0x1cc4604: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4600u, 0x1CC4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4608u;
label_1cc4608:
    // 0x1cc4608: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cc4608u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cc460c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CC460Cu;
    {
        const bool branch_taken_0x1cc460c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC460Cu;
        // 0x1cc4610: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc460c) {
            ctx->pc = 0x1CC4658u;
            goto label_1cc4658;
        }
    }
    ctx->pc = 0x1CC4614u;
    // 0x1cc4614: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC4614u;
    {
        const bool branch_taken_0x1cc4614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cc4614) {
            ctx->pc = 0x1CC4634u;
            goto label_1cc4634;
        }
    }
    ctx->pc = 0x1CC461Cu;
label_1cc461c:
    // 0x1cc461c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc461cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4620:
    // 0x1cc4620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc4624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc4628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc4628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc462c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC462Cu;
        // 0x1cc4630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4634u;
label_1cc4634:
    // 0x1cc4634: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC4634u;
    SET_GPR_U32(ctx, 31, 0x1CC463Cu);
    ctx->pc = 0x1CC4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4634u;
    // 0x1cc4638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC4634u, 0x1CC463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC463Cu;
label_1cc463c:
    // 0x1cc463c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CC463Cu;
    {
        const bool branch_taken_0x1cc463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CC4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC463Cu;
        // 0x1cc4640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc463c) {
            ctx->pc = 0x1CC461Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc461c;
        }
    }
    ctx->pc = 0x1CC4644u;
    // 0x1cc4644: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC4644u;
    SET_GPR_U32(ctx, 31, 0x1CC464Cu);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC4644u, 0x1CC464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC464Cu;
label_1cc464c:
    // 0x1cc464c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CC464Cu;
    {
        const bool branch_taken_0x1cc464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC464Cu;
        // 0x1cc4650: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc464c) {
            ctx->pc = 0x1CC4620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4620;
        }
    }
    ctx->pc = 0x1CC4654u;
    // 0x1cc4654: 0x0  nop
    ctx->pc = 0x1cc4654u;
    // NOP
label_1cc4658:
    // 0x1cc4658: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cc4658u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cc465c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CC465Cu;
    {
        const bool branch_taken_0x1cc465c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC465Cu;
        // 0x1cc4660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc465c) {
            ctx->pc = 0x1CC4620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4620;
        }
    }
    ctx->pc = 0x1CC4664u;
    // 0x1cc4664: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cc4664u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cc4668: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x1cc4668u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x1cc466c: 0x25ce71f8  addiu       $t6, $t6, 0x71F8
    ctx->pc = 0x1cc466cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 29176));
    // 0x1cc4670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc4670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4674: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cc4674u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cc4678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc4678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc467c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cc467cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cc4680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc4680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4684: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cc4684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cc4688: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc4688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc468c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc468cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4690: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC4690u;
    SET_GPR_U32(ctx, 31, 0x1CC4698u);
    ctx->pc = 0x1CC4694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4690u;
    // 0x1cc4694: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC4690u, 0x1CC4698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4698u;
label_1cc4698:
    // 0x1cc4698: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc4698u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc469c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CC469Cu;
    {
        const bool branch_taken_0x1cc469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC469Cu;
        // 0x1cc46a0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc469c) {
            ctx->pc = 0x1CC461Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc461c;
        }
    }
    ctx->pc = 0x1CC46A4u;
    // 0x1cc46a4: 0x0  nop
    ctx->pc = 0x1cc46a4u;
    // NOP
    // 0x1cc46a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc46a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc46ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc46acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc46b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc46b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc46b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc46b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc46b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc46b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc46bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc46bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc46c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc46c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc46c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc46c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc46c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc46c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc46cc: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC46CCu;
    SET_GPR_U32(ctx, 31, 0x1CC46D4u);
    ctx->pc = 0x1CC46D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC46CCu;
    // 0x1cc46d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC46CCu, 0x1CC46D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC46D4u;
label_1cc46d4:
    // 0x1cc46d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc46d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc46d8: 0xc73091c  jal         func_1CC2470
    ctx->pc = 0x1CC46D8u;
    SET_GPR_U32(ctx, 31, 0x1CC46E0u);
    ctx->pc = 0x1CC46DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC46D8u;
    // 0x1cc46dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2470u, 0x1CC46D8u, 0x1CC46E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC46E0u;
label_1cc46e0:
    // 0x1cc46e0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cc46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cc46e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc46e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc46e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc46e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc46ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC46ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC46ECu;
        // 0x1cc46f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC46ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC46F4u;
    // 0x1cc46f4: 0x0  nop
    ctx->pc = 0x1cc46f4u;
    // NOP
    ctx->pc = 0x1cc46f8u;
}
