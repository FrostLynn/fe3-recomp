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

// Function: sub_01CCFD30
// Address: 0x1ccfd30 - 0x1ccfd48
void sub_01CCFD30_0x1ccfd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFD30_0x1ccfd30");
#endif

    ctx->pc = 0x1ccfd30u;

    // 0x1ccfd30: 0x3c0f01cd  lui         $t7, 0x1CD
    ctx->pc = 0x1ccfd30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfd34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ccfd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ccfd38: 0x25ef0b98  addiu       $t7, $t7, 0xB98
    ctx->pc = 0x1ccfd38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2968));
    // 0x1ccfd3c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1ccfd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1ccfd40: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFD40u;
        // 0x1ccfd44: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFD48u;
}
