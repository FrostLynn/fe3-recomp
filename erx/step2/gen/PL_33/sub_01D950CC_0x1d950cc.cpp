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

// Function: sub_01D950CC
// Address: 0x1d950cc - 0x1d950e0
void sub_01D950CC_0x1d950cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D950CC_0x1d950cc");
#endif

    switch (ctx->pc) {
        case 0x1d950d8u: goto label_1d950d8;
        default: break;
    }

    ctx->pc = 0x1d950ccu;

    // 0x1d950cc: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x1d950ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x1d950d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D950D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D950D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D950D0u;
        // 0x1d950d4: 0x25e2b9c0  addiu       $v0, $t7, -0x4640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D950D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D950D8u;
label_1d950d8:
    // 0x1d950d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D950D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D950DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D950D8u;
        // 0x1d950dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D950D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D950E0u;
}
