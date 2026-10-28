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

// Function: sub_01DE0768
// Address: 0x1de0768 - 0x1de0788
void sub_01DE0768_0x1de0768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0768_0x1de0768");
#endif

    ctx->pc = 0x1de0768u;

    // 0x1de0768: 0x0  nop
    ctx->pc = 0x1de0768u;
    // NOP
    // 0x1de076c: 0x0  nop
    ctx->pc = 0x1de076cu;
    // NOP
    // 0x1de0770: 0x0  nop
    ctx->pc = 0x1de0770u;
    // NOP
    // 0x1de0774: 0x0  nop
    ctx->pc = 0x1de0774u;
    // NOP
    // 0x1de0778: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0778u;
        // 0x1de077c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE0780u;
    // 0x1de0780: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0780u;
        // 0x1de0784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE0788u;
}
