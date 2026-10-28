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

// Function: sub_01C2253C
// Address: 0x1c2253c - 0x1c22550
void sub_01C2253C_0x1c2253c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2253C_0x1c2253c");
#endif

    switch (ctx->pc) {
        case 0x1c22548u: goto label_1c22548;
        default: break;
    }

    ctx->pc = 0x1c2253cu;

    // 0x1c2253c: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c2253cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c22540: 0x3e00008  jr          $ra
    ctx->pc = 0x1C22540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C22544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22540u;
        // 0x1c22544: 0x25e2e628  addiu       $v0, $t7, -0x19D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294960680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C22548u;
label_1c22548:
    // 0x1c22548: 0x3e00008  jr          $ra
    ctx->pc = 0x1C22548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22548u;
        // 0x1c2254c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C22550u;
}
