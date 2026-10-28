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

// Function: sub_01CA5008
// Address: 0x1ca5008 - 0x1ca5014
void sub_01CA5008_0x1ca5008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA5008_0x1ca5008");
#endif

    ctx->pc = 0x1ca5008u;

    // 0x1ca5008: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1ca5008u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1ca500c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA500Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA500Cu;
        // 0x1ca5010: 0x25e2b498  addiu       $v0, $t7, -0x4B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA500Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA5014u;
}
