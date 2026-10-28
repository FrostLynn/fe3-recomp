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

// Function: sub_01DC4FB4
// Address: 0x1dc4fb4 - 0x1dc4fc0
void sub_01DC4FB4_0x1dc4fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4FB4_0x1dc4fb4");
#endif

    ctx->pc = 0x1dc4fb4u;

    // 0x1dc4fb4: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4FB8u;
        // 0x1dc4fbc: 0x25e298c8  addiu       $v0, $t7, -0x6738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4FC0u;
}
