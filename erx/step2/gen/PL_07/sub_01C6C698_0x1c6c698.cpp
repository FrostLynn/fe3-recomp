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

// Function: sub_01C6C698
// Address: 0x1c6c698 - 0x1c6c6c4
void sub_01C6C698_0x1c6c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C698_0x1c6c698");
#endif

    ctx->pc = 0x1c6c698u;

    // 0x1c6c698: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c6c698u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c6c69c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c6c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c6c6a0: 0x25ef5320  addiu       $t7, $t7, 0x5320
    ctx->pc = 0x1c6c6a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 21280));
    // 0x1c6c6a4: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c6c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c6c6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C6A8u;
        // 0x1c6c6ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C6B0u;
    // 0x1c6c6b0: 0x0  nop
    ctx->pc = 0x1c6c6b0u;
    // NOP
    // 0x1c6c6b4: 0x0  nop
    ctx->pc = 0x1c6c6b4u;
    // NOP
    // 0x1c6c6b8: 0x0  nop
    ctx->pc = 0x1c6c6b8u;
    // NOP
    // 0x1c6c6bc: 0x0  nop
    ctx->pc = 0x1c6c6bcu;
    // NOP
    // 0x1c6c6c0: 0x0  nop
    ctx->pc = 0x1c6c6c0u;
    // NOP
    ctx->pc = 0x1c6c6c4u;
}
