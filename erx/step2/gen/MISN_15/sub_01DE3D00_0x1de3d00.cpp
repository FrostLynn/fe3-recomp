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

// Function: sub_01DE3D00
// Address: 0x1de3d00 - 0x1de3d10
void sub_01DE3D00_0x1de3d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3D00_0x1de3d00");
#endif

    ctx->pc = 0x1de3d00u;

    // 0x1de3d00: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1de3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1de3d04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3D04u;
        // 0x1de3d08: 0x24424d88  addiu       $v0, $v0, 0x4D88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE3D0Cu;
    // 0x1de3d0c: 0x0  nop
    ctx->pc = 0x1de3d0cu;
    // NOP
    ctx->pc = 0x1de3d10u;
}
