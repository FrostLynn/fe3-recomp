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

// Function: sub_01CF2104
// Address: 0x1cf2104 - 0x1cf2118
void sub_01CF2104_0x1cf2104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF2104_0x1cf2104");
#endif

    switch (ctx->pc) {
        case 0x1cf2110u: goto label_1cf2110;
        default: break;
    }

    ctx->pc = 0x1cf2104u;

    // 0x1cf2104: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1cf2104u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1cf2108: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF2108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2108u;
        // 0x1cf210c: 0x25e2c0d0  addiu       $v0, $t7, -0x3F30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294951120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF2108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF2110u;
label_1cf2110:
    // 0x1cf2110: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF2110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2110u;
        // 0x1cf2114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF2110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF2118u;
}
