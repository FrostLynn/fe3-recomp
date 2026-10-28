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

// Function: sub_01DD9878
// Address: 0x1dd9878 - 0x1dd9898
void sub_01DD9878_0x1dd9878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9878_0x1dd9878");
#endif

    switch (ctx->pc) {
        case 0x1dd988cu: goto label_1dd988c;
        default: break;
    }

    ctx->pc = 0x1dd9878u;

    // 0x1dd9878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd9878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd987c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1dd987cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1dd9880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd9880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd9884: 0xc7765a4  jal         func_1DD9690
    ctx->pc = 0x1DD9884u;
    SET_GPR_U32(ctx, 31, 0x1DD988Cu);
    ctx->pc = 0x1DD9888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9884u;
    // 0x1dd9888: 0x2484b2b8  addiu       $a0, $a0, -0x4D48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9690u, 0x1DD9884u, 0x1DD988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD988Cu;
label_1dd988c:
    // 0x1dd988c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd988cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9890: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9890u;
        // 0x1dd9894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9898u;
}
