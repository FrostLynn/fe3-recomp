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

// Function: sub_01CDD8BC
// Address: 0x1cdd8bc - 0x1cdd8d0
void sub_01CDD8BC_0x1cdd8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD8BC_0x1cdd8bc");
#endif

    switch (ctx->pc) {
        case 0x1cdd8c8u: goto label_1cdd8c8;
        default: break;
    }

    ctx->pc = 0x1cdd8bcu;

    // 0x1cdd8bc: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdd8bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdd8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD8C0u;
        // 0x1cdd8c4: 0x25e2e328  addiu       $v0, $t7, -0x1CD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD8C8u;
label_1cdd8c8:
    // 0x1cdd8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD8C8u;
        // 0x1cdd8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD8D0u;
}
