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

// Function: sub_01DD9838
// Address: 0x1dd9838 - 0x1dd9858
void sub_01DD9838_0x1dd9838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9838_0x1dd9838");
#endif

    switch (ctx->pc) {
        case 0x1dd984cu: goto label_1dd984c;
        default: break;
    }

    ctx->pc = 0x1dd9838u;

    // 0x1dd9838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd9838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd983c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1dd983cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1dd9840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd9840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd9844: 0xc7765a4  jal         func_1DD9690
    ctx->pc = 0x1DD9844u;
    SET_GPR_U32(ctx, 31, 0x1DD984Cu);
    ctx->pc = 0x1DD9848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9844u;
    // 0x1dd9848: 0x2484adf8  addiu       $a0, $a0, -0x5208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9690u, 0x1DD9844u, 0x1DD984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD984Cu;
label_1dd984c:
    // 0x1dd984c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd984cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9850: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9850u;
        // 0x1dd9854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9858u;
}
