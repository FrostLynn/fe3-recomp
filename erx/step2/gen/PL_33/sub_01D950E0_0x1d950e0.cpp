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

// Function: sub_01D950E0
// Address: 0x1d950e0 - 0x1d9510c
void sub_01D950E0_0x1d950e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D950E0_0x1d950e0");
#endif

    ctx->pc = 0x1d950e0u;

    // 0x1d950e0: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x1d950e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x1d950e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d950e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d950e8: 0x25efc360  addiu       $t7, $t7, -0x3CA0
    ctx->pc = 0x1d950e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294951776));
    // 0x1d950ec: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d950ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d950f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D950F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D950F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D950F0u;
        // 0x1d950f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D950F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D950F8u;
    // 0x1d950f8: 0x0  nop
    ctx->pc = 0x1d950f8u;
    // NOP
    // 0x1d950fc: 0x0  nop
    ctx->pc = 0x1d950fcu;
    // NOP
    // 0x1d95100: 0x0  nop
    ctx->pc = 0x1d95100u;
    // NOP
    // 0x1d95104: 0x0  nop
    ctx->pc = 0x1d95104u;
    // NOP
    // 0x1d95108: 0x0  nop
    ctx->pc = 0x1d95108u;
    // NOP
    ctx->pc = 0x1d9510cu;
}
