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

// Function: sub_01D485F8
// Address: 0x1d485f8 - 0x1d48624
void sub_01D485F8_0x1d485f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D485F8_0x1d485f8");
#endif

    ctx->pc = 0x1d485f8u;

    // 0x1d485f8: 0x3c0f01d5  lui         $t7, 0x1D5
    ctx->pc = 0x1d485f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)469 << 16));
    // 0x1d485fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d485fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d48600: 0x25ef08e0  addiu       $t7, $t7, 0x8E0
    ctx->pc = 0x1d48600u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2272));
    // 0x1d48604: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d48604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d48608: 0x3e00008  jr          $ra
    ctx->pc = 0x1D48608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48608u;
        // 0x1d4860c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D48608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D48610u;
    // 0x1d48610: 0x0  nop
    ctx->pc = 0x1d48610u;
    // NOP
    // 0x1d48614: 0x0  nop
    ctx->pc = 0x1d48614u;
    // NOP
    // 0x1d48618: 0x0  nop
    ctx->pc = 0x1d48618u;
    // NOP
    // 0x1d4861c: 0x0  nop
    ctx->pc = 0x1d4861cu;
    // NOP
    // 0x1d48620: 0x0  nop
    ctx->pc = 0x1d48620u;
    // NOP
    ctx->pc = 0x1d48624u;
}
