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

// Function: sub_01C22550
// Address: 0x1c22550 - 0x1c2257c
void sub_01C22550_0x1c22550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C22550_0x1c22550");
#endif

    ctx->pc = 0x1c22550u;

    // 0x1c22550: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c22550u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c22554: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c22554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c22558: 0x25eff040  addiu       $t7, $t7, -0xFC0
    ctx->pc = 0x1c22558u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963264));
    // 0x1c2255c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c2255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c22560: 0x3e00008  jr          $ra
    ctx->pc = 0x1C22560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C22564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22560u;
        // 0x1c22564: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C22568u;
    // 0x1c22568: 0x0  nop
    ctx->pc = 0x1c22568u;
    // NOP
    // 0x1c2256c: 0x0  nop
    ctx->pc = 0x1c2256cu;
    // NOP
    // 0x1c22570: 0x0  nop
    ctx->pc = 0x1c22570u;
    // NOP
    // 0x1c22574: 0x0  nop
    ctx->pc = 0x1c22574u;
    // NOP
    // 0x1c22578: 0x0  nop
    ctx->pc = 0x1c22578u;
    // NOP
    ctx->pc = 0x1c2257cu;
}
