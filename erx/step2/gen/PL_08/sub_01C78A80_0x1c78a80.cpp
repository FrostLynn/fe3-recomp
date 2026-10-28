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

// Function: sub_01C78A80
// Address: 0x1c78a80 - 0x1c78aac
void sub_01C78A80_0x1c78a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78A80_0x1c78a80");
#endif

    ctx->pc = 0x1c78a80u;

    // 0x1c78a80: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c78a80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c78a84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c78a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c78a88: 0x25ef0868  addiu       $t7, $t7, 0x868
    ctx->pc = 0x1c78a88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2152));
    // 0x1c78a8c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c78a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c78a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78A90u;
        // 0x1c78a94: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78A98u;
    // 0x1c78a98: 0x0  nop
    ctx->pc = 0x1c78a98u;
    // NOP
    // 0x1c78a9c: 0x0  nop
    ctx->pc = 0x1c78a9cu;
    // NOP
    // 0x1c78aa0: 0x0  nop
    ctx->pc = 0x1c78aa0u;
    // NOP
    // 0x1c78aa4: 0x0  nop
    ctx->pc = 0x1c78aa4u;
    // NOP
    // 0x1c78aa8: 0x0  nop
    ctx->pc = 0x1c78aa8u;
    // NOP
    ctx->pc = 0x1c78aacu;
}
