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

// Function: sub_01D67C18
// Address: 0x1d67c18 - 0x1d67c38
void sub_01D67C18_0x1d67c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67C18_0x1d67c18");
#endif

    switch (ctx->pc) {
        case 0x1d67c28u: goto label_1d67c28;
        default: break;
    }

    ctx->pc = 0x1d67c18u;

    // 0x1d67c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d67c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d67c20: 0xc759c5e  jal         func_1D67178
    ctx->pc = 0x1D67C20u;
    SET_GPR_U32(ctx, 31, 0x1D67C28u);
    ctx->pc = 0x1D67178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67178u, 0x1D67C20u, 0x1D67C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67C28u;
label_1d67c28:
    // 0x1d67c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d67c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67c2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d67c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67C30u;
        // 0x1d67c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67C38u;
}
