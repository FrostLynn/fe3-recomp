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

// Function: sub_01D7FBF0
// Address: 0x1d7fbf0 - 0x1d7fc10
void sub_01D7FBF0_0x1d7fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7FBF0_0x1d7fbf0");
#endif

    switch (ctx->pc) {
        case 0x1d7fc00u: goto label_1d7fc00;
        default: break;
    }

    ctx->pc = 0x1d7fbf0u;

    // 0x1d7fbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7fbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7fbf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7fbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7fbf8: 0xc75f86e  jal         func_1D7E1B8
    ctx->pc = 0x1D7FBF8u;
    SET_GPR_U32(ctx, 31, 0x1D7FC00u);
    ctx->pc = 0x1D7E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7E1B8u, 0x1D7FBF8u, 0x1D7FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FC00u;
label_1d7fc00:
    // 0x1d7fc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7fc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7fc04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7fc04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FC08u;
        // 0x1d7fc0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FC10u;
}
