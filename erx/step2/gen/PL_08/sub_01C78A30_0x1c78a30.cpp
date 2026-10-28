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

// Function: sub_01C78A30
// Address: 0x1c78a30 - 0x1c78a3c
void sub_01C78A30_0x1c78a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78A30_0x1c78a30");
#endif

    ctx->pc = 0x1c78a30u;

    // 0x1c78a30: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c78a30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c78a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78A34u;
        // 0x1c78a38: 0x25e2dc10  addiu       $v0, $t7, -0x23F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294958096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78A3Cu;
}
