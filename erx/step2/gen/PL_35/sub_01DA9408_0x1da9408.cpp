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

// Function: sub_01DA9408
// Address: 0x1da9408 - 0x1da9414
void sub_01DA9408_0x1da9408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA9408_0x1da9408");
#endif

    ctx->pc = 0x1da9408u;

    // 0x1da9408: 0x3c0f01db  lui         $t7, 0x1DB
    ctx->pc = 0x1da9408u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)475 << 16));
    // 0x1da940c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA940Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA940Cu;
        // 0x1da9410: 0x25e2dba8  addiu       $v0, $t7, -0x2458 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294957992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA940Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA9414u;
}
