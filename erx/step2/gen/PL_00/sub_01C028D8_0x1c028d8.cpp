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

// Function: sub_01C028D8
// Address: 0x1c028d8 - 0x1c02904
void sub_01C028D8_0x1c028d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C028D8_0x1c028d8");
#endif

    ctx->pc = 0x1c028d8u;

    // 0x1c028d8: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x1c028d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x1c028dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c028dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c028e0: 0x25eff0d0  addiu       $t7, $t7, -0xF30
    ctx->pc = 0x1c028e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963408));
    // 0x1c028e4: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c028e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c028e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C028E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C028ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C028E8u;
        // 0x1c028ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C028E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C028F0u;
    // 0x1c028f0: 0x0  nop
    ctx->pc = 0x1c028f0u;
    // NOP
    // 0x1c028f4: 0x0  nop
    ctx->pc = 0x1c028f4u;
    // NOP
    // 0x1c028f8: 0x0  nop
    ctx->pc = 0x1c028f8u;
    // NOP
    // 0x1c028fc: 0x0  nop
    ctx->pc = 0x1c028fcu;
    // NOP
    // 0x1c02900: 0x0  nop
    ctx->pc = 0x1c02900u;
    // NOP
    ctx->pc = 0x1c02904u;
}
