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

// Function: sub_01C44700
// Address: 0x1c44700 - 0x1c447e8
void sub_01C44700_0x1c44700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44700_0x1c44700");
#endif

    switch (ctx->pc) {
        case 0x1c44714u: goto label_1c44714;
        case 0x1c44728u: goto label_1c44728;
        case 0x1c4472cu: goto label_1c4472c;
        case 0x1c44748u: goto label_1c44748;
        case 0x1c44754u: goto label_1c44754;
        case 0x1c44794u: goto label_1c44794;
        case 0x1c447c0u: goto label_1c447c0;
        case 0x1c447ccu: goto label_1c447cc;
        case 0x1c447d8u: goto label_1c447d8;
        default: break;
    }

    ctx->pc = 0x1c44700u;

    // 0x1c44700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c44704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c44708: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c44708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c4470c: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C4470Cu;
    SET_GPR_U32(ctx, 31, 0x1C44714u);
    ctx->pc = 0x1C44710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4470Cu;
    // 0x1c44710: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C4470Cu, 0x1C44714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44714u;
label_1c44714:
    // 0x1c44714: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c44714u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44718: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C44718u;
    {
        const bool branch_taken_0x1c44718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C4471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44718u;
        // 0x1c4471c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44718) {
            ctx->pc = 0x1C4473Cu;
            goto label_1c4473c;
        }
    }
    ctx->pc = 0x1C44720u;
    // 0x1c44720: 0xc710914  jal         func_1C42450
    ctx->pc = 0x1C44720u;
    SET_GPR_U32(ctx, 31, 0x1C44728u);
    ctx->pc = 0x1C42450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42450u, 0x1C44720u, 0x1C44728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44728u;
label_1c44728:
    // 0x1c44728: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c44728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c4472c:
    // 0x1c4472c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4472cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44730: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c44730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44734: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44734u;
        // 0x1c44738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4473Cu;
label_1c4473c:
    // 0x1c4473c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c4473cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c44740: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C44740u;
    SET_GPR_U32(ctx, 31, 0x1C44748u);
    ctx->pc = 0x1C44744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44740u;
    // 0x1c44744: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C44740u, 0x1C44748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44748u;
label_1c44748:
    // 0x1c44748: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c44748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c4474c: 0xc710924  jal         func_1C42490
    ctx->pc = 0x1C4474Cu;
    SET_GPR_U32(ctx, 31, 0x1C44754u);
    ctx->pc = 0x1C44750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4474Cu;
    // 0x1c44750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42490u, 0x1C4474Cu, 0x1C44754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44754u;
label_1c44754:
    // 0x1c44754: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C44754u;
    {
        const bool branch_taken_0x1c44754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44754u;
        // 0x1c44758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44754) {
            ctx->pc = 0x1C4472Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4472c;
        }
    }
    ctx->pc = 0x1C4475Cu;
    // 0x1c4475c: 0x0  nop
    ctx->pc = 0x1c4475cu;
    // NOP
    // 0x1c44760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c44760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c44764: 0x3c0f01c5  lui         $t7, 0x1C5
    ctx->pc = 0x1c44764u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)453 << 16));
    // 0x1c44768: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c44768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c4476c: 0x25eef800  addiu       $t6, $t7, -0x800
    ctx->pc = 0x1c4476cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965248));
    // 0x1c44770: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c44770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c44774: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c44774u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C4F804u));
    // 0x1c44778: 0x8dedf800  lw          $t5, -0x800($t7)
    ctx->pc = 0x1c44778u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C4F800u));
    // 0x1c4477c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4477cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44780: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c44780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c44784: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c44784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c44788: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c44788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c4478c: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C4478Cu;
    SET_GPR_U32(ctx, 31, 0x1C44794u);
    ctx->pc = 0x1C44790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4478Cu;
    // 0x1c44790: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C4478Cu, 0x1C44794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44794u;
label_1c44794:
    // 0x1c44794: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c44794u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c44798: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c44798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4479c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c4479cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c447a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c447a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c447a4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c447a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c447a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c447a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c447ac: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c447acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c447b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c447b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c447b4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c447b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c447b8: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C447B8u;
    SET_GPR_U32(ctx, 31, 0x1C447C0u);
    ctx->pc = 0x1C447BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C447B8u;
    // 0x1c447bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C447B8u, 0x1C447C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C447C0u;
label_1c447c0:
    // 0x1c447c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c447c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c447c4: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C447C4u;
    SET_GPR_U32(ctx, 31, 0x1C447CCu);
    ctx->pc = 0x1C447C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C447C4u;
    // 0x1c447c8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C447C4u, 0x1C447CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C447CCu;
label_1c447cc:
    // 0x1c447cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c447ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c447d0: 0xc710926  jal         func_1C42498
    ctx->pc = 0x1C447D0u;
    SET_GPR_U32(ctx, 31, 0x1C447D8u);
    ctx->pc = 0x1C447D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C447D0u;
    // 0x1c447d4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42498u, 0x1C447D0u, 0x1C447D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C447D8u;
label_1c447d8:
    // 0x1c447d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c447d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c447dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c447dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c447e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C447E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C447E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C447E0u;
        // 0x1c447e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C447E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C447E8u;
}
