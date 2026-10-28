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

// Function: sub_01C32388
// Address: 0x1c32388 - 0x1c323b4
void sub_01C32388_0x1c32388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C32388_0x1c32388");
#endif

    ctx->pc = 0x1c32388u;

    // 0x1c32388: 0x3c0f01c4  lui         $t7, 0x1C4
    ctx->pc = 0x1c32388u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)452 << 16));
    // 0x1c3238c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c3238cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c32390: 0x25ef1db0  addiu       $t7, $t7, 0x1DB0
    ctx->pc = 0x1c32390u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 7600));
    // 0x1c32394: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c32394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c32398: 0x3e00008  jr          $ra
    ctx->pc = 0x1C32398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32398u;
        // 0x1c3239c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C32398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C323A0u;
    // 0x1c323a0: 0x0  nop
    ctx->pc = 0x1c323a0u;
    // NOP
    // 0x1c323a4: 0x0  nop
    ctx->pc = 0x1c323a4u;
    // NOP
    // 0x1c323a8: 0x0  nop
    ctx->pc = 0x1c323a8u;
    // NOP
    // 0x1c323ac: 0x0  nop
    ctx->pc = 0x1c323acu;
    // NOP
    // 0x1c323b0: 0x0  nop
    ctx->pc = 0x1c323b0u;
    // NOP
    ctx->pc = 0x1c323b4u;
}
