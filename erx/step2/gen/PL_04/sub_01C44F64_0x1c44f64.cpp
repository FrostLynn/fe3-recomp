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

// Function: sub_01C44F64
// Address: 0x1c44f64 - 0x1c44f70
void sub_01C44F64_0x1c44f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44F64_0x1c44f64");
#endif

    ctx->pc = 0x1c44f64u;

    // 0x1c44f64: 0x3c0f01c5  lui         $t7, 0x1C5
    ctx->pc = 0x1c44f64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)453 << 16));
    // 0x1c44f68: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44F68u;
        // 0x1c44f6c: 0x25e2dd30  addiu       $v0, $t7, -0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294958384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C44F70u;
}
