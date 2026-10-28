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

// Function: sub_01D7FAB0
// Address: 0x1d7fab0 - 0x1d7fad8
void sub_01D7FAB0_0x1d7fab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7FAB0_0x1d7fab0");
#endif

    switch (ctx->pc) {
        case 0x1d7fac4u: goto label_1d7fac4;
        default: break;
    }

    ctx->pc = 0x1d7fab0u;

    // 0x1d7fab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7fab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7fab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7fab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7fab8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7fabc: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7FABCu;
    SET_GPR_U32(ctx, 31, 0x1D7FAC4u);
    ctx->pc = 0x1D7FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FABCu;
    // 0x1d7fac0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7FABCu, 0x1D7FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FAC4u;
label_1d7fac4:
    // 0x1d7fac4: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1d7fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1d7fac8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d7fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d7facc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7faccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7fad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FAD0u;
        // 0x1d7fad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FAD8u;
}
