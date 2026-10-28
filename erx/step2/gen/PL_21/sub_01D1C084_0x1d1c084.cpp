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

// Function: sub_01D1C084
// Address: 0x1d1c084 - 0x1d1c090
void sub_01D1C084_0x1d1c084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1C084_0x1d1c084");
#endif

    ctx->pc = 0x1d1c084u;

    // 0x1d1c084: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1c084u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1c088: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1C088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C088u;
        // 0x1d1c08c: 0x25e24ba8  addiu       $v0, $t7, 0x4BA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 19368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1C090u;
}
