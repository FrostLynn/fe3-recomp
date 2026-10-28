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

// Function: sub_01CB9348
// Address: 0x1cb9348 - 0x1cb93a8
void sub_01CB9348_0x1cb9348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB9348_0x1cb9348");
#endif

    switch (ctx->pc) {
        case 0x1cb9378u: goto label_1cb9378;
        case 0x1cb937cu: goto label_1cb937c;
        case 0x1cb939cu: goto label_1cb939c;
        default: break;
    }

    ctx->pc = 0x1cb9348u;

    // 0x1cb9348: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1cb9348u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb934c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb934cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb9350: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1cb9350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb9354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb9358: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1cb9358u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb935c: 0x240603c8  addiu       $a2, $zero, 0x3C8
    ctx->pc = 0x1cb935cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
    // 0x1cb9360: 0x240f013c  addiu       $t7, $zero, 0x13C
    ctx->pc = 0x1cb9360u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1cb9364: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB9364u;
    {
        const bool branch_taken_0x1cb9364 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9364u;
        // 0x1cb9368: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9364) {
            ctx->pc = 0x1CB9388u;
            goto label_1cb9388;
        }
    }
    ctx->pc = 0x1CB936Cu;
    // 0x1cb936c: 0x3c0601cc  lui         $a2, 0x1CC
    ctx->pc = 0x1cb936cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)460 << 16));
    // 0x1cb9370: 0xc72df1e  jal         func_1CB7C78
    ctx->pc = 0x1CB9370u;
    SET_GPR_U32(ctx, 31, 0x1CB9378u);
    ctx->pc = 0x1CB9374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9370u;
    // 0x1cb9374: 0x24c6dc50  addiu       $a2, $a2, -0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB7C78u, 0x1CB9370u, 0x1CB9378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9378u;
label_1cb9378:
    // 0x1cb9378: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cb9378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cb937c:
    // 0x1cb937c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb937cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb9380: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB9380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9380u;
        // 0x1cb9384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB9388u;
label_1cb9388:
    // 0x1cb9388: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x1cb9388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x1cb938c: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x1cb938cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x1cb9390: 0x24a59ff0  addiu       $a1, $a1, -0x6010
    ctx->pc = 0x1cb9390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942704));
    // 0x1cb9394: 0xc72d9f2  jal         func_1CB67C8
    ctx->pc = 0x1CB9394u;
    SET_GPR_U32(ctx, 31, 0x1CB939Cu);
    ctx->pc = 0x1CB9398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9394u;
    // 0x1cb9398: 0x248467c0  addiu       $a0, $a0, 0x67C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB67C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB67C8u, 0x1CB9394u, 0x1CB939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB939Cu;
label_1cb939c:
    // 0x1cb939c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CB939Cu;
    {
        const bool branch_taken_0x1cb939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB939Cu;
        // 0x1cb93a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb939c) {
            ctx->pc = 0x1CB937Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb937c;
        }
    }
    ctx->pc = 0x1CB93A4u;
    // 0x1cb93a4: 0x0  nop
    ctx->pc = 0x1cb93a4u;
    // NOP
    ctx->pc = 0x1cb93a8u;
}
