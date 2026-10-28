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

// Function: sub_01D89558
// Address: 0x1d89558 - 0x1d895e8
void sub_01D89558_0x1d89558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89558_0x1d89558");
#endif

    switch (ctx->pc) {
        case 0x1d8956cu: goto label_1d8956c;
        case 0x1d89580u: goto label_1d89580;
        case 0x1d89584u: goto label_1d89584;
        case 0x1d895ccu: goto label_1d895cc;
        default: break;
    }

    ctx->pc = 0x1d89558u;

    // 0x1d89558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d89558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8955c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d89560: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d89560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d89564: 0xc762252  jal         func_1D88948
    ctx->pc = 0x1D89564u;
    SET_GPR_U32(ctx, 31, 0x1D8956Cu);
    ctx->pc = 0x1D89568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89564u;
    // 0x1d89568: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88948u, 0x1D89564u, 0x1D8956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8956Cu;
label_1d8956c:
    // 0x1d8956c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d8956cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d89570: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D89570u;
    {
        const bool branch_taken_0x1d89570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D89574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89570u;
        // 0x1d89574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89570) {
            ctx->pc = 0x1D89594u;
            goto label_1d89594;
        }
    }
    ctx->pc = 0x1D89578u;
    // 0x1d89578: 0xc762254  jal         func_1D88950
    ctx->pc = 0x1D89578u;
    SET_GPR_U32(ctx, 31, 0x1D89580u);
    ctx->pc = 0x1D88950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88950u, 0x1D89578u, 0x1D89580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89580u;
label_1d89580:
    // 0x1d89580: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d89580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d89584:
    // 0x1d89584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d89584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d89588: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d89588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8958c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8958Cu;
        // 0x1d89590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8958Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D89594u;
label_1d89594:
    // 0x1d89594: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D89594u;
    {
        const bool branch_taken_0x1d89594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89594u;
        // 0x1d89598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89594) {
            ctx->pc = 0x1D89584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d89584;
        }
    }
    ctx->pc = 0x1D8959Cu;
    // 0x1d8959c: 0x0  nop
    ctx->pc = 0x1d8959cu;
    // NOP
    // 0x1d895a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d895a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d895a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d895a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d895a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d895a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d895ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d895acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d895b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d895b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d895b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d895b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d895b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d895b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d895bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d895bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d895c0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d895c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d895c4: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D895C4u;
    SET_GPR_U32(ctx, 31, 0x1D895CCu);
    ctx->pc = 0x1D895C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D895C4u;
    // 0x1d895c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D895C4u, 0x1D895CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D895CCu;
label_1d895cc:
    // 0x1d895cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d895ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d895d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d895d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d895d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d895d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d895d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d895d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d895dc: 0x876225a  j           func_1D88968
    ctx->pc = 0x1D895DCu;
    ctx->pc = 0x1D895E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D895DCu;
    // 0x1d895e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88968u;
    sub_01D88968_0x1d88968(rdram, ctx, runtime); return;
    ctx->pc = 0x1D895E4u;
    // 0x1d895e4: 0x0  nop
    ctx->pc = 0x1d895e4u;
    // NOP
    ctx->pc = 0x1d895e8u;
}
