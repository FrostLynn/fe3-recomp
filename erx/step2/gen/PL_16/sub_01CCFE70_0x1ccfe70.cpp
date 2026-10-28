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

// Function: sub_01CCFE70
// Address: 0x1ccfe70 - 0x1ccfe9c
void sub_01CCFE70_0x1ccfe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFE70_0x1ccfe70");
#endif

    ctx->pc = 0x1ccfe70u;

    // 0x1ccfe70: 0x3c0f01ce  lui         $t7, 0x1CE
    ctx->pc = 0x1ccfe70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)462 << 16));
    // 0x1ccfe74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ccfe74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ccfe78: 0x25ef9c10  addiu       $t7, $t7, -0x63F0
    ctx->pc = 0x1ccfe78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941712));
    // 0x1ccfe7c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1ccfe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1ccfe80: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFE80u;
        // 0x1ccfe84: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFE88u;
    // 0x1ccfe88: 0x0  nop
    ctx->pc = 0x1ccfe88u;
    // NOP
    // 0x1ccfe8c: 0x0  nop
    ctx->pc = 0x1ccfe8cu;
    // NOP
    // 0x1ccfe90: 0x0  nop
    ctx->pc = 0x1ccfe90u;
    // NOP
    // 0x1ccfe94: 0x0  nop
    ctx->pc = 0x1ccfe94u;
    // NOP
    // 0x1ccfe98: 0x0  nop
    ctx->pc = 0x1ccfe98u;
    // NOP
    ctx->pc = 0x1ccfe9cu;
}
