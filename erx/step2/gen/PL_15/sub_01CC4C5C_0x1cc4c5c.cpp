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

// Function: sub_01CC4C5C
// Address: 0x1cc4c5c - 0x1cc4c68
void sub_01CC4C5C_0x1cc4c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4C5C_0x1cc4c5c");
#endif

    ctx->pc = 0x1cc4c5cu;

    // 0x1cc4c5c: 0x3c0f01cd  lui         $t7, 0x1CD
    ctx->pc = 0x1cc4c5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)461 << 16));
    // 0x1cc4c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4C60u;
        // 0x1cc4c64: 0x25e2b4b8  addiu       $v0, $t7, -0x4B48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4C68u;
}
