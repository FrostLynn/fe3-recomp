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

// Function: sub_01C120F0
// Address: 0x1c120f0 - 0x1c1211c
void sub_01C120F0_0x1c120f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C120F0_0x1c120f0");
#endif

    ctx->pc = 0x1c120f0u;

    // 0x1c120f0: 0x3c0f01c2  lui         $t7, 0x1C2
    ctx->pc = 0x1c120f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)450 << 16));
    // 0x1c120f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c120f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c120f8: 0x25efeb10  addiu       $t7, $t7, -0x14F0
    ctx->pc = 0x1c120f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961936));
    // 0x1c120fc: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c120fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c12100: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12100u;
        // 0x1c12104: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C12100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C12108u;
    // 0x1c12108: 0x0  nop
    ctx->pc = 0x1c12108u;
    // NOP
    // 0x1c1210c: 0x0  nop
    ctx->pc = 0x1c1210cu;
    // NOP
    // 0x1c12110: 0x0  nop
    ctx->pc = 0x1c12110u;
    // NOP
    // 0x1c12114: 0x0  nop
    ctx->pc = 0x1c12114u;
    // NOP
    // 0x1c12118: 0x0  nop
    ctx->pc = 0x1c12118u;
    // NOP
    ctx->pc = 0x1c1211cu;
}
