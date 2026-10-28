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

// Function: sub_01D8AC90
// Address: 0x1d8ac90 - 0x1d8acc0
void sub_01D8AC90_0x1d8ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8AC90_0x1d8ac90");
#endif

    switch (ctx->pc) {
        case 0x1d8aca4u: goto label_1d8aca4;
        default: break;
    }

    ctx->pc = 0x1d8ac90u;

    // 0x1d8ac90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8ac94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8ac98: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d8ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d8ac9c: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8AC9Cu;
    SET_GPR_U32(ctx, 31, 0x1D8ACA4u);
    ctx->pc = 0x1D8ACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AC9Cu;
    // 0x1d8aca0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8AC9Cu, 0x1D8ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8ACA4u;
label_1d8aca4:
    // 0x1d8aca4: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1d8aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1d8aca8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d8aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d8acac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8acacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8acb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8ACB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ACB0u;
        // 0x1d8acb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8ACB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8ACB8u;
    // 0x1d8acb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8ACB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ACB8u;
        // 0x1d8acbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8ACB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8ACC0u;
}
