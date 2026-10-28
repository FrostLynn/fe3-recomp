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

// Function: sub_01C61E18
// Address: 0x1c61e18 - 0x1c61e24
void sub_01C61E18_0x1c61e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61E18_0x1c61e18");
#endif

    ctx->pc = 0x1c61e18u;

    // 0x1c61e18: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c61e18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c61e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61E1Cu;
        // 0x1c61e20: 0x25e28430  addiu       $v0, $t7, -0x7BD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294935600));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61E24u;
}
