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

// Function: sub_01D29BBC
// Address: 0x1d29bbc - 0x1d29bd0
void sub_01D29BBC_0x1d29bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29BBC_0x1d29bbc");
#endif

    switch (ctx->pc) {
        case 0x1d29bc8u: goto label_1d29bc8;
        default: break;
    }

    ctx->pc = 0x1d29bbcu;

    // 0x1d29bbc: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d29bbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d29bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29BC0u;
        // 0x1d29bc4: 0x25e22418  addiu       $v0, $t7, 0x2418 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 9240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29BC8u;
label_1d29bc8:
    // 0x1d29bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29BC8u;
        // 0x1d29bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29BD0u;
}
