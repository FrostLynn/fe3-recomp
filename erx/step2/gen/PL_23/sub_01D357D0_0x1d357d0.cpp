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

// Function: sub_01D357D0
// Address: 0x1d357d0 - 0x1d357fc
void sub_01D357D0_0x1d357d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D357D0_0x1d357d0");
#endif

    ctx->pc = 0x1d357d0u;

    // 0x1d357d0: 0x3c0f01d4  lui         $t7, 0x1D4
    ctx->pc = 0x1d357d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)468 << 16));
    // 0x1d357d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d357d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d357d8: 0x25efb5b0  addiu       $t7, $t7, -0x4A50
    ctx->pc = 0x1d357d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948272));
    // 0x1d357dc: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d357dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d357e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D357E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D357E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D357E0u;
        // 0x1d357e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D357E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D357E8u;
    // 0x1d357e8: 0x0  nop
    ctx->pc = 0x1d357e8u;
    // NOP
    // 0x1d357ec: 0x0  nop
    ctx->pc = 0x1d357ecu;
    // NOP
    // 0x1d357f0: 0x0  nop
    ctx->pc = 0x1d357f0u;
    // NOP
    // 0x1d357f4: 0x0  nop
    ctx->pc = 0x1d357f4u;
    // NOP
    // 0x1d357f8: 0x0  nop
    ctx->pc = 0x1d357f8u;
    // NOP
    ctx->pc = 0x1d357fcu;
}
