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

// Function: sub_01CB9428
// Address: 0x1cb9428 - 0x1cb9454
void sub_01CB9428_0x1cb9428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB9428_0x1cb9428");
#endif

    ctx->pc = 0x1cb9428u;

    // 0x1cb9428: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb9428u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb942c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cb942cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb9430: 0x25ef1e20  addiu       $t7, $t7, 0x1E20
    ctx->pc = 0x1cb9430u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 7712));
    // 0x1cb9434: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1cb9434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1cb9438: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB9438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9438u;
        // 0x1cb943c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB9440u;
    // 0x1cb9440: 0x0  nop
    ctx->pc = 0x1cb9440u;
    // NOP
    // 0x1cb9444: 0x0  nop
    ctx->pc = 0x1cb9444u;
    // NOP
    // 0x1cb9448: 0x0  nop
    ctx->pc = 0x1cb9448u;
    // NOP
    // 0x1cb944c: 0x0  nop
    ctx->pc = 0x1cb944cu;
    // NOP
    // 0x1cb9450: 0x0  nop
    ctx->pc = 0x1cb9450u;
    // NOP
    ctx->pc = 0x1cb9454u;
}
