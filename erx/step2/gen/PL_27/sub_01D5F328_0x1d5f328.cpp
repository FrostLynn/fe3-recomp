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

// Function: sub_01D5F328
// Address: 0x1d5f328 - 0x1d5f334
void sub_01D5F328_0x1d5f328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5F328_0x1d5f328");
#endif

    ctx->pc = 0x1d5f328u;

    // 0x1d5f328: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d5f328u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d5f32c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F32Cu;
        // 0x1d5f330: 0x25e24f10  addiu       $v0, $t7, 0x4F10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 20240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F334u;
}
