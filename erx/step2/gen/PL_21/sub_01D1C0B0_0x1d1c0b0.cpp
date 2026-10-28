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

// Function: sub_01D1C0B0
// Address: 0x1d1c0b0 - 0x1d1c0dc
void sub_01D1C0B0_0x1d1c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1C0B0_0x1d1c0b0");
#endif

    ctx->pc = 0x1d1c0b0u;

    // 0x1d1c0b0: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1c0b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1c0b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d1c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d1c0b8: 0x25ef6568  addiu       $t7, $t7, 0x6568
    ctx->pc = 0x1d1c0b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 25960));
    // 0x1d1c0bc: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d1c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d1c0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1C0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C0C0u;
        // 0x1d1c0c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1C0C8u;
    // 0x1d1c0c8: 0x0  nop
    ctx->pc = 0x1d1c0c8u;
    // NOP
    // 0x1d1c0cc: 0x0  nop
    ctx->pc = 0x1d1c0ccu;
    // NOP
    // 0x1d1c0d0: 0x0  nop
    ctx->pc = 0x1d1c0d0u;
    // NOP
    // 0x1d1c0d4: 0x0  nop
    ctx->pc = 0x1d1c0d4u;
    // NOP
    // 0x1d1c0d8: 0x0  nop
    ctx->pc = 0x1d1c0d8u;
    // NOP
    ctx->pc = 0x1d1c0dcu;
}
