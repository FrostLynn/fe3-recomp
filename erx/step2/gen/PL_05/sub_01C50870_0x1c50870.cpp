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

// Function: sub_01C50870
// Address: 0x1c50870 - 0x1c50898
void sub_01C50870_0x1c50870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50870_0x1c50870");
#endif

    switch (ctx->pc) {
        case 0x1c50884u: goto label_1c50884;
        default: break;
    }

    ctx->pc = 0x1c50870u;

    // 0x1c50870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c50870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c50874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c50874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c50878: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c50878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c5087c: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C5087Cu;
    SET_GPR_U32(ctx, 31, 0x1C50884u);
    ctx->pc = 0x1C50880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5087Cu;
    // 0x1c50880: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C5087Cu, 0x1C50884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50884u;
label_1c50884:
    // 0x1c50884: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1c50884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1c50888: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c50888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c5088c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5088cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50890: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C50894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50890u;
        // 0x1c50894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C50898u;
}
