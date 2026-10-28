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

// Function: sub_01DE1C20
// Address: 0x1de1c20 - 0x1de1c40
void sub_01DE1C20_0x1de1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1C20_0x1de1c20");
#endif

    switch (ctx->pc) {
        case 0x1de1c34u: goto label_1de1c34;
        default: break;
    }

    ctx->pc = 0x1de1c20u;

    // 0x1de1c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de1c24: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1de1c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1de1c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de1c2c: 0xc778668  jal         func_1DE19A0
    ctx->pc = 0x1DE1C2Cu;
    SET_GPR_U32(ctx, 31, 0x1DE1C34u);
    ctx->pc = 0x1DE1C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1C2Cu;
    // 0x1de1c30: 0x24842a80  addiu       $a0, $a0, 0x2A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE19A0u, 0x1DE1C2Cu, 0x1DE1C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1C34u;
label_1de1c34:
    // 0x1de1c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de1c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1C38u;
        // 0x1de1c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1C40u;
}
