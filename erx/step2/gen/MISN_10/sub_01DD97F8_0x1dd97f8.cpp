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

// Function: sub_01DD97F8
// Address: 0x1dd97f8 - 0x1dd9818
void sub_01DD97F8_0x1dd97f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD97F8_0x1dd97f8");
#endif

    switch (ctx->pc) {
        case 0x1dd980cu: goto label_1dd980c;
        default: break;
    }

    ctx->pc = 0x1dd97f8u;

    // 0x1dd97f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd97f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd97fc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1dd97fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1dd9800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd9800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd9804: 0xc7765a4  jal         func_1DD9690
    ctx->pc = 0x1DD9804u;
    SET_GPR_U32(ctx, 31, 0x1DD980Cu);
    ctx->pc = 0x1DD9808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9804u;
    // 0x1dd9808: 0x2484a6d8  addiu       $a0, $a0, -0x5928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9690u, 0x1DD9804u, 0x1DD980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD980Cu;
label_1dd980c:
    // 0x1dd980c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd980cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9810: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9810u;
        // 0x1dd9814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9818u;
}
