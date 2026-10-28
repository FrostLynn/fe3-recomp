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

// Function: sub_01DA9458
// Address: 0x1da9458 - 0x1da9484
void sub_01DA9458_0x1da9458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA9458_0x1da9458");
#endif

    ctx->pc = 0x1da9458u;

    // 0x1da9458: 0x3c0f01db  lui         $t7, 0x1DB
    ctx->pc = 0x1da9458u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)475 << 16));
    // 0x1da945c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1da945cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1da9460: 0x25ef0900  addiu       $t7, $t7, 0x900
    ctx->pc = 0x1da9460u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2304));
    // 0x1da9464: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1da9464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1da9468: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA9468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9468u;
        // 0x1da946c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA9468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA9470u;
    // 0x1da9470: 0x0  nop
    ctx->pc = 0x1da9470u;
    // NOP
    // 0x1da9474: 0x0  nop
    ctx->pc = 0x1da9474u;
    // NOP
    // 0x1da9478: 0x0  nop
    ctx->pc = 0x1da9478u;
    // NOP
    // 0x1da947c: 0x0  nop
    ctx->pc = 0x1da947cu;
    // NOP
    // 0x1da9480: 0x0  nop
    ctx->pc = 0x1da9480u;
    // NOP
    ctx->pc = 0x1da9484u;
}
