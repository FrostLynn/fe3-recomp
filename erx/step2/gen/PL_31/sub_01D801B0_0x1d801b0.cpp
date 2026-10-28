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

// Function: sub_01D801B0
// Address: 0x1d801b0 - 0x1d801dc
void sub_01D801B0_0x1d801b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D801B0_0x1d801b0");
#endif

    ctx->pc = 0x1d801b0u;

    // 0x1d801b0: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d801b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d801b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d801b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d801b8: 0x25ef8298  addiu       $t7, $t7, -0x7D68
    ctx->pc = 0x1d801b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294935192));
    // 0x1d801bc: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d801bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d801c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D801C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D801C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D801C0u;
        // 0x1d801c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D801C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D801C8u;
    // 0x1d801c8: 0x0  nop
    ctx->pc = 0x1d801c8u;
    // NOP
    // 0x1d801cc: 0x0  nop
    ctx->pc = 0x1d801ccu;
    // NOP
    // 0x1d801d0: 0x0  nop
    ctx->pc = 0x1d801d0u;
    // NOP
    // 0x1d801d4: 0x0  nop
    ctx->pc = 0x1d801d4u;
    // NOP
    // 0x1d801d8: 0x0  nop
    ctx->pc = 0x1d801d8u;
    // NOP
    ctx->pc = 0x1d801dcu;
}
