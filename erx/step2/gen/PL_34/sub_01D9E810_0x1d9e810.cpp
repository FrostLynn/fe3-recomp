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

// Function: sub_01D9E810
// Address: 0x1d9e810 - 0x1d9e888
void sub_01D9E810_0x1d9e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9E810_0x1d9e810");
#endif

    switch (ctx->pc) {
        case 0x1d9e824u: goto label_1d9e824;
        case 0x1d9e838u: goto label_1d9e838;
        case 0x1d9e83cu: goto label_1d9e83c;
        default: break;
    }

    ctx->pc = 0x1d9e810u;

    // 0x1d9e810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9e814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9e818: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9e818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9e81c: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9E81Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E824u);
    ctx->pc = 0x1D9E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E81Cu;
    // 0x1d9e820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9E81Cu, 0x1D9E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E824u;
label_1d9e824:
    // 0x1d9e824: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9e824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e828: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9E828u;
    {
        const bool branch_taken_0x1d9e828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E828u;
        // 0x1d9e82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e828) {
            ctx->pc = 0x1D9E84Cu;
            goto label_1d9e84c;
        }
    }
    ctx->pc = 0x1D9E830u;
    // 0x1d9e830: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9E830u;
    SET_GPR_U32(ctx, 31, 0x1D9E838u);
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9E830u, 0x1D9E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E838u;
label_1d9e838:
    // 0x1d9e838: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d9e838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9e83c:
    // 0x1d9e83c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e840: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9e840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e844: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E844u;
        // 0x1d9e848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E84Cu;
label_1d9e84c:
    // 0x1d9e84c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9E84Cu;
    {
        const bool branch_taken_0x1d9e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E84Cu;
        // 0x1d9e850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e84c) {
            ctx->pc = 0x1D9E83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9e83c;
        }
    }
    ctx->pc = 0x1D9E854u;
    // 0x1d9e854: 0x0  nop
    ctx->pc = 0x1d9e854u;
    // NOP
    // 0x1d9e858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9e858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9e85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9e860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9e864: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d9e864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9e868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9e868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e86c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9e86cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9e870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e874: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d9e874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9e878: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1d9e878u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e87c: 0x8767262  j           func_1D9C988
    ctx->pc = 0x1D9E87Cu;
    ctx->pc = 0x1D9E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E87Cu;
    // 0x1d9e880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    sub_01D9C988_0x1d9c988(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9E884u;
    // 0x1d9e884: 0x0  nop
    ctx->pc = 0x1d9e884u;
    // NOP
    ctx->pc = 0x1d9e888u;
}
