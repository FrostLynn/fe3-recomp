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

// Function: sub_01C765E8
// Address: 0x1c765e8 - 0x1c766c8
void sub_01C765E8_0x1c765e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C765E8_0x1c765e8");
#endif

    switch (ctx->pc) {
        case 0x1c765fcu: goto label_1c765fc;
        case 0x1c76610u: goto label_1c76610;
        case 0x1c76614u: goto label_1c76614;
        case 0x1c76630u: goto label_1c76630;
        case 0x1c7663cu: goto label_1c7663c;
        case 0x1c7666cu: goto label_1c7666c;
        case 0x1c76698u: goto label_1c76698;
        case 0x1c766a4u: goto label_1c766a4;
        default: break;
    }

    ctx->pc = 0x1c765e8u;

    // 0x1c765e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c765e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c765ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c765ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c765f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c765f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c765f4: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C765F4u;
    SET_GPR_U32(ctx, 31, 0x1C765FCu);
    ctx->pc = 0x1C765F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C765F4u;
    // 0x1c765f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C765F4u, 0x1C765FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C765FCu;
label_1c765fc:
    // 0x1c765fc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c765fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c76600: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C76600u;
    {
        const bool branch_taken_0x1c76600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C76604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76600u;
        // 0x1c76604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76600) {
            ctx->pc = 0x1C76624u;
            goto label_1c76624;
        }
    }
    ctx->pc = 0x1C76608u;
    // 0x1c76608: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C76608u;
    SET_GPR_U32(ctx, 31, 0x1C76610u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C76608u, 0x1C76610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76610u;
label_1c76610:
    // 0x1c76610: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c76610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c76614:
    // 0x1c76614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c76614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76618: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c76618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7661c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7661Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C76620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7661Cu;
        // 0x1c76620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7661Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C76624u;
label_1c76624:
    // 0x1c76624: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c76624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c76628: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C76628u;
    SET_GPR_U32(ctx, 31, 0x1C76630u);
    ctx->pc = 0x1C7662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76628u;
    // 0x1c7662c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C76628u, 0x1C76630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76630u;
label_1c76630:
    // 0x1c76630: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c76630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c76634: 0xc71d664  jal         func_1C75990
    ctx->pc = 0x1C76634u;
    SET_GPR_U32(ctx, 31, 0x1C7663Cu);
    ctx->pc = 0x1C76638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76634u;
    // 0x1c76638: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75990u, 0x1C76634u, 0x1C7663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7663Cu;
label_1c7663c:
    // 0x1c7663c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C7663Cu;
    {
        const bool branch_taken_0x1c7663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7663Cu;
        // 0x1c76640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7663c) {
            ctx->pc = 0x1C76614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c76614;
        }
    }
    ctx->pc = 0x1C76644u;
    // 0x1c76644: 0x0  nop
    ctx->pc = 0x1c76644u;
    // NOP
    // 0x1c76648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c76648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7664c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c76650: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c76650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c76654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c76654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c76658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c76658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7665c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c7665cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76660: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c76660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c76664: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C76664u;
    SET_GPR_U32(ctx, 31, 0x1C7666Cu);
    ctx->pc = 0x1C76668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76664u;
    // 0x1c76668: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C76664u, 0x1C7666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7666Cu;
label_1c7666c:
    // 0x1c7666c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c7666cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c76670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76674: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c76674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c76678: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c76678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7667c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c7667cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c76680: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c76680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c76684: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c76684u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c76688: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c76688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7668c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c7668cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c76690: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C76690u;
    SET_GPR_U32(ctx, 31, 0x1C76698u);
    ctx->pc = 0x1C76694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76690u;
    // 0x1c76694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C76690u, 0x1C76698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76698u;
label_1c76698:
    // 0x1c76698: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c76698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c7669c: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C7669Cu;
    SET_GPR_U32(ctx, 31, 0x1C766A4u);
    ctx->pc = 0x1C766A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7669Cu;
    // 0x1c766a0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C7669Cu, 0x1C766A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C766A4u;
label_1c766a4:
    // 0x1c766a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c766a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c766a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c766a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c766ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c766acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c766b0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c766b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c766b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c766b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c766b8: 0x871d666  j           func_1C75998
    ctx->pc = 0x1C766B8u;
    ctx->pc = 0x1C766BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C766B8u;
    // 0x1c766bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75998u;
    sub_01C75998_0x1c75998(rdram, ctx, runtime); return;
    ctx->pc = 0x1C766C0u;
    // 0x1c766c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C766C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C766C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C766C8u;
}
