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

// Function: sub_01CB9414
// Address: 0x1cb9414 - 0x1cb9428
void sub_01CB9414_0x1cb9414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB9414_0x1cb9414");
#endif

    switch (ctx->pc) {
        case 0x1cb9420u: goto label_1cb9420;
        default: break;
    }

    ctx->pc = 0x1cb9414u;

    // 0x1cb9414: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb9414u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb9418: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB9418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9418u;
        // 0x1cb941c: 0x25e213e8  addiu       $v0, $t7, 0x13E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 5096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB9420u;
label_1cb9420:
    // 0x1cb9420: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB9420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9420u;
        // 0x1cb9424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB9428u;
}
