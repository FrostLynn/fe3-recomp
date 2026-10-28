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

// Function: sub_01CCFE50
// Address: 0x1ccfe50 - 0x1ccfe5c
void sub_01CCFE50_0x1ccfe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFE50_0x1ccfe50");
#endif

    ctx->pc = 0x1ccfe50u;

    // 0x1ccfe50: 0x3c0f01ce  lui         $t7, 0x1CE
    ctx->pc = 0x1ccfe50u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)462 << 16));
    // 0x1ccfe54: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFE54u;
        // 0x1ccfe58: 0x25e288d8  addiu       $v0, $t7, -0x7728 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294936792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFE5Cu;
}
