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

// Function: sub_01CDD8A4
// Address: 0x1cdd8a4 - 0x1cdd8b0
void sub_01CDD8A4_0x1cdd8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD8A4_0x1cdd8a4");
#endif

    ctx->pc = 0x1cdd8a4u;

    // 0x1cdd8a4: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdd8a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdd8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD8A8u;
        // 0x1cdd8ac: 0x25e2a408  addiu       $v0, $t7, -0x5BF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD8B0u;
}
