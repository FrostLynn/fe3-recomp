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

// Function: sub_01C120B8
// Address: 0x1c120b8 - 0x1c120c4
void sub_01C120B8_0x1c120b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C120B8_0x1c120b8");
#endif

    ctx->pc = 0x1c120b8u;

    // 0x1c120b8: 0x3c0f01c2  lui         $t7, 0x1C2
    ctx->pc = 0x1c120b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)450 << 16));
    // 0x1c120bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C120BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C120C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C120BCu;
        // 0x1c120c0: 0x25e2d3c8  addiu       $v0, $t7, -0x2C38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C120BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C120C4u;
}
