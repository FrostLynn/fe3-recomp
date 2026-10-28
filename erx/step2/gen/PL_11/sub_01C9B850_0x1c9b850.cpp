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

// Function: sub_01C9B850
// Address: 0x1c9b850 - 0x1c9b87c
void sub_01C9B850_0x1c9b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B850_0x1c9b850");
#endif

    ctx->pc = 0x1c9b850u;

    // 0x1c9b850: 0x3c0f01ca  lui         $t7, 0x1CA
    ctx->pc = 0x1c9b850u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)458 << 16));
    // 0x1c9b854: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c9b854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c9b858: 0x25ef2108  addiu       $t7, $t7, 0x2108
    ctx->pc = 0x1c9b858u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8456));
    // 0x1c9b85c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c9b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c9b860: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B860u;
        // 0x1c9b864: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B868u;
    // 0x1c9b868: 0x0  nop
    ctx->pc = 0x1c9b868u;
    // NOP
    // 0x1c9b86c: 0x0  nop
    ctx->pc = 0x1c9b86cu;
    // NOP
    // 0x1c9b870: 0x0  nop
    ctx->pc = 0x1c9b870u;
    // NOP
    // 0x1c9b874: 0x0  nop
    ctx->pc = 0x1c9b874u;
    // NOP
    // 0x1c9b878: 0x0  nop
    ctx->pc = 0x1c9b878u;
    // NOP
    ctx->pc = 0x1c9b87cu;
}
