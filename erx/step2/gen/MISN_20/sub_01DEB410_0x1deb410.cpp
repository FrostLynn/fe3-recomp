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

// Function: sub_01DEB410
// Address: 0x1deb410 - 0x1deb420
void sub_01DEB410_0x1deb410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB410_0x1deb410");
#endif

    ctx->pc = 0x1deb410u;

    // 0x1deb410: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x1deb410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x1deb414: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB414u;
        // 0x1deb418: 0x2442ca48  addiu       $v0, $v0, -0x35B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB41Cu;
    // 0x1deb41c: 0x0  nop
    ctx->pc = 0x1deb41cu;
    // NOP
    ctx->pc = 0x1deb420u;
}
