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

// Function: sub_01D93470
// Address: 0x1d93470 - 0x1d93500
void sub_01D93470_0x1d93470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93470_0x1d93470");
#endif

    switch (ctx->pc) {
        case 0x1d93484u: goto label_1d93484;
        case 0x1d93498u: goto label_1d93498;
        case 0x1d9349cu: goto label_1d9349c;
        case 0x1d934e4u: goto label_1d934e4;
        default: break;
    }

    ctx->pc = 0x1d93470u;

    // 0x1d93470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d93470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d93474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d93474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d93478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d93478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9347c: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D9347Cu;
    SET_GPR_U32(ctx, 31, 0x1D93484u);
    ctx->pc = 0x1D93480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9347Cu;
    // 0x1d93480: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D9347Cu, 0x1D93484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93484u;
label_1d93484:
    // 0x1d93484: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d93484u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d93488: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D93488u;
    {
        const bool branch_taken_0x1d93488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93488u;
        // 0x1d9348c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93488) {
            ctx->pc = 0x1D934ACu;
            goto label_1d934ac;
        }
    }
    ctx->pc = 0x1D93490u;
    // 0x1d93490: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D93490u;
    SET_GPR_U32(ctx, 31, 0x1D93498u);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D93490u, 0x1D93498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93498u;
label_1d93498:
    // 0x1d93498: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d93498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9349c:
    // 0x1d9349c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9349cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d934a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d934a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d934a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D934A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D934A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D934A4u;
        // 0x1d934a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D934A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D934ACu;
label_1d934ac:
    // 0x1d934ac: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D934ACu;
    {
        const bool branch_taken_0x1d934ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D934B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D934ACu;
        // 0x1d934b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d934ac) {
            ctx->pc = 0x1D9349Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9349c;
        }
    }
    ctx->pc = 0x1D934B4u;
    // 0x1d934b4: 0x0  nop
    ctx->pc = 0x1d934b4u;
    // NOP
    // 0x1d934b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d934b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d934bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d934bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d934c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d934c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d934c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d934c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d934c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d934c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d934cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d934ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d934d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d934d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d934d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d934d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d934d8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d934d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d934dc: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D934DCu;
    SET_GPR_U32(ctx, 31, 0x1D934E4u);
    ctx->pc = 0x1D934E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D934DCu;
    // 0x1d934e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D934DCu, 0x1D934E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D934E4u;
label_1d934e4:
    // 0x1d934e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d934e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d934e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d934e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d934ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d934ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d934f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d934f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d934f4: 0x8764a1a  j           func_1D92868
    ctx->pc = 0x1D934F4u;
    ctx->pc = 0x1D934F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D934F4u;
    // 0x1d934f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    sub_01D92868_0x1d92868(rdram, ctx, runtime); return;
    ctx->pc = 0x1D934FCu;
    // 0x1d934fc: 0x0  nop
    ctx->pc = 0x1d934fcu;
    // NOP
    ctx->pc = 0x1d93500u;
}
