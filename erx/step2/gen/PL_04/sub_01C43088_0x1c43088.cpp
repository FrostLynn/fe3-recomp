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

// Function: sub_01C43088
// Address: 0x1c43088 - 0x1c43118
void sub_01C43088_0x1c43088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C43088_0x1c43088");
#endif

    switch (ctx->pc) {
        case 0x1c4309cu: goto label_1c4309c;
        case 0x1c430b0u: goto label_1c430b0;
        case 0x1c430b4u: goto label_1c430b4;
        case 0x1c430fcu: goto label_1c430fc;
        default: break;
    }

    ctx->pc = 0x1c43088u;

    // 0x1c43088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c43088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4308c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c43090: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c43090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c43094: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C43094u;
    SET_GPR_U32(ctx, 31, 0x1C4309Cu);
    ctx->pc = 0x1C43098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43094u;
    // 0x1c43098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C43094u, 0x1C4309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4309Cu;
label_1c4309c:
    // 0x1c4309c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c4309cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c430a0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C430A0u;
    {
        const bool branch_taken_0x1c430a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C430A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C430A0u;
        // 0x1c430a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c430a0) {
            ctx->pc = 0x1C430C4u;
            goto label_1c430c4;
        }
    }
    ctx->pc = 0x1C430A8u;
    // 0x1c430a8: 0xc710914  jal         func_1C42450
    ctx->pc = 0x1C430A8u;
    SET_GPR_U32(ctx, 31, 0x1C430B0u);
    ctx->pc = 0x1C42450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42450u, 0x1C430A8u, 0x1C430B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C430B0u;
label_1c430b0:
    // 0x1c430b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c430b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c430b4:
    // 0x1c430b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c430b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c430b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c430b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c430bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C430BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C430C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C430BCu;
        // 0x1c430c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C430BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C430C4u;
label_1c430c4:
    // 0x1c430c4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C430C4u;
    {
        const bool branch_taken_0x1c430c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C430C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C430C4u;
        // 0x1c430c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c430c4) {
            ctx->pc = 0x1C430B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c430b4;
        }
    }
    ctx->pc = 0x1C430CCu;
    // 0x1c430cc: 0x0  nop
    ctx->pc = 0x1c430ccu;
    // NOP
    // 0x1c430d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c430d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c430d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c430d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c430d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c430d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c430dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c430dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c430e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c430e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c430e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c430e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c430e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c430e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c430ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c430ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c430f0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c430f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c430f4: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C430F4u;
    SET_GPR_U32(ctx, 31, 0x1C430FCu);
    ctx->pc = 0x1C430F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C430F4u;
    // 0x1c430f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C430F4u, 0x1C430FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C430FCu;
label_1c430fc:
    // 0x1c430fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c430fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c43100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c43104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c43104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c43108: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c43108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4310c: 0x871091a  j           func_1C42468
    ctx->pc = 0x1C4310Cu;
    ctx->pc = 0x1C43110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4310Cu;
    // 0x1c43110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42468u;
    sub_01C42468_0x1c42468(rdram, ctx, runtime); return;
    ctx->pc = 0x1C43114u;
    // 0x1c43114: 0x0  nop
    ctx->pc = 0x1c43114u;
    // NOP
    ctx->pc = 0x1c43118u;
}
