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

// Function: sub_01D9F080
// Address: 0x1d9f080 - 0x1d9f0ac
void sub_01D9F080_0x1d9f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9F080_0x1d9f080");
#endif

    ctx->pc = 0x1d9f080u;

    // 0x1d9f080: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x1d9f080u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x1d9f084: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d9f084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9f088: 0x25ef67b0  addiu       $t7, $t7, 0x67B0
    ctx->pc = 0x1d9f088u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 26544));
    // 0x1d9f08c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d9f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d9f090: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F090u;
        // 0x1d9f094: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9F098u;
    // 0x1d9f098: 0x0  nop
    ctx->pc = 0x1d9f098u;
    // NOP
    // 0x1d9f09c: 0x0  nop
    ctx->pc = 0x1d9f09cu;
    // NOP
    // 0x1d9f0a0: 0x0  nop
    ctx->pc = 0x1d9f0a0u;
    // NOP
    // 0x1d9f0a4: 0x0  nop
    ctx->pc = 0x1d9f0a4u;
    // NOP
    // 0x1d9f0a8: 0x0  nop
    ctx->pc = 0x1d9f0a8u;
    // NOP
    ctx->pc = 0x1d9f0acu;
}
