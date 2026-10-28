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

// Function: sub_01D1C090
// Address: 0x1d1c090 - 0x1d1c09c
void sub_01D1C090_0x1d1c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1C090_0x1d1c090");
#endif

    ctx->pc = 0x1d1c090u;

    // 0x1d1c090: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1c090u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1c094: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1C094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C094u;
        // 0x1d1c098: 0x25e24da0  addiu       $v0, $t7, 0x4DA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 19872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1C09Cu;
}
