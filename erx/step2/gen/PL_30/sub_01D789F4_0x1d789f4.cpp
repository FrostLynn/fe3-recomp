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

// Function: sub_01D789F4
// Address: 0x1d789f4 - 0x1d78a08
void sub_01D789F4_0x1d789f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D789F4_0x1d789f4");
#endif

    switch (ctx->pc) {
        case 0x1d78a00u: goto label_1d78a00;
        default: break;
    }

    ctx->pc = 0x1d789f4u;

    // 0x1d789f4: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d789f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d789f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D789F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D789FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D789F8u;
        // 0x1d789fc: 0x25e2cbb0  addiu       $v0, $t7, -0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953904));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D789F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D78A00u;
label_1d78a00:
    // 0x1d78a00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78A00u;
        // 0x1d78a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D78A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D78A08u;
}
