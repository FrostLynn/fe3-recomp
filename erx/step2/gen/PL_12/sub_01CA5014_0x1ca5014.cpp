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

// Function: sub_01CA5014
// Address: 0x1ca5014 - 0x1ca5028
void sub_01CA5014_0x1ca5014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA5014_0x1ca5014");
#endif

    switch (ctx->pc) {
        case 0x1ca5020u: goto label_1ca5020;
        default: break;
    }

    ctx->pc = 0x1ca5014u;

    // 0x1ca5014: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1ca5014u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1ca5018: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA5018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5018u;
        // 0x1ca501c: 0x25e2c030  addiu       $v0, $t7, -0x3FD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA5018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA5020u;
label_1ca5020:
    // 0x1ca5020: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA5020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5020u;
        // 0x1ca5024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA5020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA5028u;
}
