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

// Function: sub_01D80178
// Address: 0x1d80178 - 0x1d80184
void sub_01D80178_0x1d80178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D80178_0x1d80178");
#endif

    ctx->pc = 0x1d80178u;

    // 0x1d80178: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d80178u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d8017c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8017Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D80180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8017Cu;
        // 0x1d80180: 0x25e26de0  addiu       $v0, $t7, 0x6DE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 28128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8017Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D80184u;
}
