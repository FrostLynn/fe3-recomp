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

// Function: sub_01C120DC
// Address: 0x1c120dc - 0x1c120f0
void sub_01C120DC_0x1c120dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C120DC_0x1c120dc");
#endif

    switch (ctx->pc) {
        case 0x1c120e8u: goto label_1c120e8;
        default: break;
    }

    ctx->pc = 0x1c120dcu;

    // 0x1c120dc: 0x3c0f01c2  lui         $t7, 0x1C2
    ctx->pc = 0x1c120dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)450 << 16));
    // 0x1c120e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C120E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C120E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C120E0u;
        // 0x1c120e4: 0x25e2e100  addiu       $v0, $t7, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C120E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C120E8u;
label_1c120e8:
    // 0x1c120e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C120E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C120ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C120E8u;
        // 0x1c120ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C120E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C120F0u;
}
