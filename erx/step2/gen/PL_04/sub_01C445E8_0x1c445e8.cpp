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

// Function: sub_01C445E8
// Address: 0x1c445e8 - 0x1c44678
void sub_01C445E8_0x1c445e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C445E8_0x1c445e8");
#endif

    switch (ctx->pc) {
        case 0x1c445fcu: goto label_1c445fc;
        case 0x1c44610u: goto label_1c44610;
        case 0x1c44614u: goto label_1c44614;
        case 0x1c4465cu: goto label_1c4465c;
        default: break;
    }

    ctx->pc = 0x1c445e8u;

    // 0x1c445e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c445e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c445ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c445ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c445f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c445f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c445f4: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C445F4u;
    SET_GPR_U32(ctx, 31, 0x1C445FCu);
    ctx->pc = 0x1C445F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C445F4u;
    // 0x1c445f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C445F4u, 0x1C445FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C445FCu;
label_1c445fc:
    // 0x1c445fc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c445fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44600: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C44600u;
    {
        const bool branch_taken_0x1c44600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C44604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44600u;
        // 0x1c44604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44600) {
            ctx->pc = 0x1C44624u;
            goto label_1c44624;
        }
    }
    ctx->pc = 0x1C44608u;
    // 0x1c44608: 0xc710914  jal         func_1C42450
    ctx->pc = 0x1C44608u;
    SET_GPR_U32(ctx, 31, 0x1C44610u);
    ctx->pc = 0x1C42450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42450u, 0x1C44608u, 0x1C44610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44610u;
label_1c44610:
    // 0x1c44610: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c44610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c44614:
    // 0x1c44614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c44614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44618: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c44618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4461c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4461Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4461Cu;
        // 0x1c44620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4461Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C44624u;
label_1c44624:
    // 0x1c44624: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C44624u;
    {
        const bool branch_taken_0x1c44624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44624u;
        // 0x1c44628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44624) {
            ctx->pc = 0x1C44614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c44614;
        }
    }
    ctx->pc = 0x1C4462Cu;
    // 0x1c4462c: 0x0  nop
    ctx->pc = 0x1c4462cu;
    // NOP
    // 0x1c44630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c44634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c44638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4463c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c4463cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c44640: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c44640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c44644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c44644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c44648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4464c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c4464cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44650: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c44650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c44654: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C44654u;
    SET_GPR_U32(ctx, 31, 0x1C4465Cu);
    ctx->pc = 0x1C44658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44654u;
    // 0x1c44658: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C44654u, 0x1C4465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4465Cu;
label_1c4465c:
    // 0x1c4465c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44660: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c44660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c44664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44668: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c44668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4466c: 0x871091a  j           func_1C42468
    ctx->pc = 0x1C4466Cu;
    ctx->pc = 0x1C44670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4466Cu;
    // 0x1c44670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42468u;
    sub_01C42468_0x1c42468(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44674u;
    // 0x1c44674: 0x0  nop
    ctx->pc = 0x1c44674u;
    // NOP
    ctx->pc = 0x1c44678u;
}
