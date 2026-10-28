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

// Function: sub_01CCFE5C
// Address: 0x1ccfe5c - 0x1ccfe70
void sub_01CCFE5C_0x1ccfe5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFE5C_0x1ccfe5c");
#endif

    switch (ctx->pc) {
        case 0x1ccfe68u: goto label_1ccfe68;
        default: break;
    }

    ctx->pc = 0x1ccfe5cu;

    // 0x1ccfe5c: 0x3c0f01ce  lui         $t7, 0x1CE
    ctx->pc = 0x1ccfe5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)462 << 16));
    // 0x1ccfe60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFE60u;
        // 0x1ccfe64: 0x25e291f8  addiu       $v0, $t7, -0x6E08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294939128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFE68u;
label_1ccfe68:
    // 0x1ccfe68: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFE68u;
        // 0x1ccfe6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFE70u;
}
