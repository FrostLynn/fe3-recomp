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

// Function: sub_01C3235C
// Address: 0x1c3235c - 0x1c32368
void sub_01C3235C_0x1c3235c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C3235C_0x1c3235c");
#endif

    ctx->pc = 0x1c3235cu;

    // 0x1c3235c: 0x3c0f01c4  lui         $t7, 0x1C4
    ctx->pc = 0x1c3235cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)452 << 16));
    // 0x1c32360: 0x3e00008  jr          $ra
    ctx->pc = 0x1C32360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C32364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32360u;
        // 0x1c32364: 0x25e20790  addiu       $v0, $t7, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1936));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C32360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C32368u;
}
