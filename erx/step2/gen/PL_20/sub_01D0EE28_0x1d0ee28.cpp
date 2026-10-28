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

// Function: sub_01D0EE28
// Address: 0x1d0ee28 - 0x1d0ee54
void sub_01D0EE28_0x1d0ee28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0EE28_0x1d0ee28");
#endif

    ctx->pc = 0x1d0ee28u;

    // 0x1d0ee28: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0ee28u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0ee2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d0ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d0ee30: 0x25ef8a00  addiu       $t7, $t7, -0x7600
    ctx->pc = 0x1d0ee30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294937088));
    // 0x1d0ee34: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d0ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d0ee38: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EE38u;
        // 0x1d0ee3c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0EE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0EE40u;
    // 0x1d0ee40: 0x0  nop
    ctx->pc = 0x1d0ee40u;
    // NOP
    // 0x1d0ee44: 0x0  nop
    ctx->pc = 0x1d0ee44u;
    // NOP
    // 0x1d0ee48: 0x0  nop
    ctx->pc = 0x1d0ee48u;
    // NOP
    // 0x1d0ee4c: 0x0  nop
    ctx->pc = 0x1d0ee4cu;
    // NOP
    // 0x1d0ee50: 0x0  nop
    ctx->pc = 0x1d0ee50u;
    // NOP
    ctx->pc = 0x1d0ee54u;
}
