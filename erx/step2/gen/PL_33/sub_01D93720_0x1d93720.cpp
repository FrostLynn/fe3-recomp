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

// Function: sub_01D93720
// Address: 0x1d93720 - 0x1d93748
void sub_01D93720_0x1d93720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93720_0x1d93720");
#endif

    switch (ctx->pc) {
        case 0x1d93734u: goto label_1d93734;
        default: break;
    }

    ctx->pc = 0x1d93720u;

    // 0x1d93720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d93720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d93724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d93724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d93728: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d93728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9372c: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D9372Cu;
    SET_GPR_U32(ctx, 31, 0x1D93734u);
    ctx->pc = 0x1D93730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9372Cu;
    // 0x1d93730: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D9372Cu, 0x1D93734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93734u;
label_1d93734:
    // 0x1d93734: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1d93734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1d93738: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d93738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d9373c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9373cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93740: 0x3e00008  jr          $ra
    ctx->pc = 0x1D93740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93740u;
        // 0x1d93744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D93740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D93748u;
}
