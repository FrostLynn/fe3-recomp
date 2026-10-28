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

// Function: sub_01D94DA8
// Address: 0x1d94da8 - 0x1d94dc8
void sub_01D94DA8_0x1d94da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D94DA8_0x1d94da8");
#endif

    switch (ctx->pc) {
        case 0x1d94db8u: goto label_1d94db8;
        default: break;
    }

    ctx->pc = 0x1d94da8u;

    // 0x1d94da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d94dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d94dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d94db0: 0xc764cb0  jal         func_1D932C0
    ctx->pc = 0x1D94DB0u;
    SET_GPR_U32(ctx, 31, 0x1D94DB8u);
    ctx->pc = 0x1D932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D932C0u, 0x1D94DB0u, 0x1D94DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94DB8u;
label_1d94db8:
    // 0x1d94db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d94db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94dbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d94dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94DC0u;
        // 0x1d94dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94DC8u;
}
