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

// Function: sub_01DB3450
// Address: 0x1db3450 - 0x1db3470
void sub_01DB3450_0x1db3450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3450_0x1db3450");
#endif

    switch (ctx->pc) {
        case 0x1db3460u: goto label_1db3460;
        default: break;
    }

    ctx->pc = 0x1db3450u;

    // 0x1db3450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db3454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db3454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db3458: 0xc76c66a  jal         func_1DB19A8
    ctx->pc = 0x1DB3458u;
    SET_GPR_U32(ctx, 31, 0x1DB3460u);
    ctx->pc = 0x1DB19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB19A8u, 0x1DB3458u, 0x1DB3460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3460u;
label_1db3460:
    // 0x1db3460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db3460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db3464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db3464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3468: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3468u;
        // 0x1db346c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB3470u;
}
