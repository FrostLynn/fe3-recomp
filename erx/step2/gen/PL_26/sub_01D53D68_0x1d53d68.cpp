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

// Function: sub_01D53D68
// Address: 0x1d53d68 - 0x1d53d94
void sub_01D53D68_0x1d53d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53D68_0x1d53d68");
#endif

    ctx->pc = 0x1d53d68u;

    // 0x1d53d68: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d53d68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d53d6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d53d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d53d70: 0x25efc678  addiu       $t7, $t7, -0x3988
    ctx->pc = 0x1d53d70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294952568));
    // 0x1d53d74: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d53d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d53d78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53D78u;
        // 0x1d53d7c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53D80u;
    // 0x1d53d80: 0x0  nop
    ctx->pc = 0x1d53d80u;
    // NOP
    // 0x1d53d84: 0x0  nop
    ctx->pc = 0x1d53d84u;
    // NOP
    // 0x1d53d88: 0x0  nop
    ctx->pc = 0x1d53d88u;
    // NOP
    // 0x1d53d8c: 0x0  nop
    ctx->pc = 0x1d53d8cu;
    // NOP
    // 0x1d53d90: 0x0  nop
    ctx->pc = 0x1d53d90u;
    // NOP
    ctx->pc = 0x1d53d94u;
}
