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

// Function: sub_01DCDF30
// Address: 0x1dcdf30 - 0x1dcdf40
void sub_01DCDF30_0x1dcdf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCDF30_0x1dcdf30");
#endif

    ctx->pc = 0x1dcdf30u;

    // 0x1dcdf30: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x1dcdf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x1dcdf34: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDF34u;
        // 0x1dcdf38: 0x2442f2d8  addiu       $v0, $v0, -0xD28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDF3Cu;
    // 0x1dcdf3c: 0x0  nop
    ctx->pc = 0x1dcdf3cu;
    // NOP
    ctx->pc = 0x1dcdf40u;
}
