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

// Function: sub_01DD9858
// Address: 0x1dd9858 - 0x1dd9878
void sub_01DD9858_0x1dd9858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9858_0x1dd9858");
#endif

    switch (ctx->pc) {
        case 0x1dd986cu: goto label_1dd986c;
        default: break;
    }

    ctx->pc = 0x1dd9858u;

    // 0x1dd9858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd9858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd985c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1dd985cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1dd9860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd9860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd9864: 0xc7765a4  jal         func_1DD9690
    ctx->pc = 0x1DD9864u;
    SET_GPR_U32(ctx, 31, 0x1DD986Cu);
    ctx->pc = 0x1DD9868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9864u;
    // 0x1dd9868: 0x2484b058  addiu       $a0, $a0, -0x4FA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9690u, 0x1DD9864u, 0x1DD986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD986Cu;
label_1dd986c:
    // 0x1dd986c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd986cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9870: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9870u;
        // 0x1dd9874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9878u;
}
