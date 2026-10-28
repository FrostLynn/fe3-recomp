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

// Function: sub_01D0E838
// Address: 0x1d0e838 - 0x1d0e880
void sub_01D0E838_0x1d0e838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E838_0x1d0e838");
#endif

    switch (ctx->pc) {
        case 0x1d0e84cu: goto label_1d0e84c;
        case 0x1d0e860u: goto label_1d0e860;
        case 0x1d0e864u: goto label_1d0e864;
        default: break;
    }

    ctx->pc = 0x1d0e838u;

    // 0x1d0e838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e83c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e840: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0e840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0e844: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0E844u;
    SET_GPR_U32(ctx, 31, 0x1D0E84Cu);
    ctx->pc = 0x1D0E848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E844u;
    // 0x1d0e848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0E844u, 0x1D0E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E84Cu;
label_1d0e84c:
    // 0x1d0e84c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0e84cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e850: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0E850u;
    {
        const bool branch_taken_0x1d0e850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E850u;
        // 0x1d0e854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e850) {
            ctx->pc = 0x1D0E874u;
            goto label_1d0e874;
        }
    }
    ctx->pc = 0x1D0E858u;
    // 0x1d0e858: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0E858u;
    SET_GPR_U32(ctx, 31, 0x1D0E860u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0E858u, 0x1D0E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E860u;
label_1d0e860:
    // 0x1d0e860: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0e860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d0e864:
    // 0x1d0e864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e868: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0e868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e86c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E86Cu;
        // 0x1d0e870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E874u;
label_1d0e874:
    // 0x1d0e874: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0E874u;
    {
        const bool branch_taken_0x1d0e874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E874u;
        // 0x1d0e878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e874) {
            ctx->pc = 0x1D0E864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e864;
        }
    }
    ctx->pc = 0x1D0E87Cu;
    // 0x1d0e87c: 0x0  nop
    ctx->pc = 0x1d0e87cu;
    // NOP
    ctx->pc = 0x1d0e880u;
}
