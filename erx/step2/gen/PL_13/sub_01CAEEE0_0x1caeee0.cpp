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

// Function: sub_01CAEEE0
// Address: 0x1caeee0 - 0x1caef0c
void sub_01CAEEE0_0x1caeee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAEEE0_0x1caeee0");
#endif

    ctx->pc = 0x1caeee0u;

    // 0x1caeee0: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1caeee0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1caeee4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1caeee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1caeee8: 0x25ef6130  addiu       $t7, $t7, 0x6130
    ctx->pc = 0x1caeee8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 24880));
    // 0x1caeeec: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1caeeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1caeef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAEEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEEF0u;
        // 0x1caeef4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAEEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAEEF8u;
    // 0x1caeef8: 0x0  nop
    ctx->pc = 0x1caeef8u;
    // NOP
    // 0x1caeefc: 0x0  nop
    ctx->pc = 0x1caeefcu;
    // NOP
    // 0x1caef00: 0x0  nop
    ctx->pc = 0x1caef00u;
    // NOP
    // 0x1caef04: 0x0  nop
    ctx->pc = 0x1caef04u;
    // NOP
    // 0x1caef08: 0x0  nop
    ctx->pc = 0x1caef08u;
    // NOP
    ctx->pc = 0x1caef0cu;
}
