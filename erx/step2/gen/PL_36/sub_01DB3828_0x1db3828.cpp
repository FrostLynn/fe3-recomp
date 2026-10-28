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

// Function: sub_01DB3828
// Address: 0x1db3828 - 0x1db3854
void sub_01DB3828_0x1db3828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3828_0x1db3828");
#endif

    ctx->pc = 0x1db3828u;

    // 0x1db3828: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db3828u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db382c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1db382cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1db3830: 0x25efb270  addiu       $t7, $t7, -0x4D90
    ctx->pc = 0x1db3830u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947440));
    // 0x1db3834: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1db3834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1db3838: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3838u;
        // 0x1db383c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB3840u;
    // 0x1db3840: 0x0  nop
    ctx->pc = 0x1db3840u;
    // NOP
    // 0x1db3844: 0x0  nop
    ctx->pc = 0x1db3844u;
    // NOP
    // 0x1db3848: 0x0  nop
    ctx->pc = 0x1db3848u;
    // NOP
    // 0x1db384c: 0x0  nop
    ctx->pc = 0x1db384cu;
    // NOP
    // 0x1db3850: 0x0  nop
    ctx->pc = 0x1db3850u;
    // NOP
    ctx->pc = 0x1db3854u;
}
