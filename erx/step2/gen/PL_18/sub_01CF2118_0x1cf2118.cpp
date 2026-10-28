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

// Function: sub_01CF2118
// Address: 0x1cf2118 - 0x1cf2144
void sub_01CF2118_0x1cf2118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF2118_0x1cf2118");
#endif

    ctx->pc = 0x1cf2118u;

    // 0x1cf2118: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1cf2118u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1cf211c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cf211cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cf2120: 0x25efcb68  addiu       $t7, $t7, -0x3498
    ctx->pc = 0x1cf2120u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953832));
    // 0x1cf2124: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1cf2124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1cf2128: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF2128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2128u;
        // 0x1cf212c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF2128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF2130u;
    // 0x1cf2130: 0x0  nop
    ctx->pc = 0x1cf2130u;
    // NOP
    // 0x1cf2134: 0x0  nop
    ctx->pc = 0x1cf2134u;
    // NOP
    // 0x1cf2138: 0x0  nop
    ctx->pc = 0x1cf2138u;
    // NOP
    // 0x1cf213c: 0x0  nop
    ctx->pc = 0x1cf213cu;
    // NOP
    // 0x1cf2140: 0x0  nop
    ctx->pc = 0x1cf2140u;
    // NOP
    ctx->pc = 0x1cf2144u;
}
