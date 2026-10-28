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

// Function: sub_01CA3378
// Address: 0x1ca3378 - 0x1ca3408
void sub_01CA3378_0x1ca3378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3378_0x1ca3378");
#endif

    switch (ctx->pc) {
        case 0x1ca338cu: goto label_1ca338c;
        case 0x1ca33a0u: goto label_1ca33a0;
        case 0x1ca33a4u: goto label_1ca33a4;
        case 0x1ca33ecu: goto label_1ca33ec;
        default: break;
    }

    ctx->pc = 0x1ca3378u;

    // 0x1ca3378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca3378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca337c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca3380: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca3380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca3384: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA3384u;
    SET_GPR_U32(ctx, 31, 0x1CA338Cu);
    ctx->pc = 0x1CA3388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3384u;
    // 0x1ca3388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA3384u, 0x1CA338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA338Cu;
label_1ca338c:
    // 0x1ca338c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca338cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca3390: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA3390u;
    {
        const bool branch_taken_0x1ca3390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3390u;
        // 0x1ca3394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3390) {
            ctx->pc = 0x1CA33B4u;
            goto label_1ca33b4;
        }
    }
    ctx->pc = 0x1CA3398u;
    // 0x1ca3398: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA3398u;
    SET_GPR_U32(ctx, 31, 0x1CA33A0u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA3398u, 0x1CA33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA33A0u;
label_1ca33a0:
    // 0x1ca33a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ca33a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ca33a4:
    // 0x1ca33a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca33a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca33a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca33a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca33ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA33ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA33ACu;
        // 0x1ca33b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA33ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA33B4u;
label_1ca33b4:
    // 0x1ca33b4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CA33B4u;
    {
        const bool branch_taken_0x1ca33b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA33B4u;
        // 0x1ca33b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca33b4) {
            ctx->pc = 0x1CA33A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca33a4;
        }
    }
    ctx->pc = 0x1CA33BCu;
    // 0x1ca33bc: 0x0  nop
    ctx->pc = 0x1ca33bcu;
    // NOP
    // 0x1ca33c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca33c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca33c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca33c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca33c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca33c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca33cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca33ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca33d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca33d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca33d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca33d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca33d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca33d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca33dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca33dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca33e0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ca33e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca33e4: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA33E4u;
    SET_GPR_U32(ctx, 31, 0x1CA33ECu);
    ctx->pc = 0x1CA33E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA33E4u;
    // 0x1ca33e8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA33E4u, 0x1CA33ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA33ECu;
label_1ca33ec:
    // 0x1ca33ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca33ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca33f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca33f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca33f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca33f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca33f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ca33f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca33fc: 0x87289da  j           func_1CA2768
    ctx->pc = 0x1CA33FCu;
    ctx->pc = 0x1CA3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA33FCu;
    // 0x1ca3400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2768u;
    sub_01CA2768_0x1ca2768(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA3404u;
    // 0x1ca3404: 0x0  nop
    ctx->pc = 0x1ca3404u;
    // NOP
    ctx->pc = 0x1ca3408u;
}
