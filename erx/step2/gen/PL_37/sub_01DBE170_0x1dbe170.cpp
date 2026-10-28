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

// Function: sub_01DBE170
// Address: 0x1dbe170 - 0x1dbe19c
void sub_01DBE170_0x1dbe170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBE170_0x1dbe170");
#endif

    ctx->pc = 0x1dbe170u;

    // 0x1dbe170: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dbe170u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dbe174: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1dbe174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dbe178: 0x25ef3bc0  addiu       $t7, $t7, 0x3BC0
    ctx->pc = 0x1dbe178u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15296));
    // 0x1dbe17c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1dbe17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1dbe180: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBE180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE180u;
        // 0x1dbe184: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBE180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBE188u;
    // 0x1dbe188: 0x0  nop
    ctx->pc = 0x1dbe188u;
    // NOP
    // 0x1dbe18c: 0x0  nop
    ctx->pc = 0x1dbe18cu;
    // NOP
    // 0x1dbe190: 0x0  nop
    ctx->pc = 0x1dbe190u;
    // NOP
    // 0x1dbe194: 0x0  nop
    ctx->pc = 0x1dbe194u;
    // NOP
    // 0x1dbe198: 0x0  nop
    ctx->pc = 0x1dbe198u;
    // NOP
    ctx->pc = 0x1dbe19cu;
}
