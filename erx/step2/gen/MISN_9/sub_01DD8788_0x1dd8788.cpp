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

// Function: sub_01DD8788
// Address: 0x1dd8788 - 0x1dd8798
void sub_01DD8788_0x1dd8788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8788_0x1dd8788");
#endif

    ctx->pc = 0x1dd8788u;

    // 0x1dd8788: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1dd8788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1dd878c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD878Cu;
        // 0x1dd8790: 0x24429560  addiu       $v0, $v0, -0x6AA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD878Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD8794u;
    // 0x1dd8794: 0x0  nop
    ctx->pc = 0x1dd8794u;
    // NOP
    ctx->pc = 0x1dd8798u;
}
