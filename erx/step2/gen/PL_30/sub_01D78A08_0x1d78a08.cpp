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

// Function: sub_01D78A08
// Address: 0x1d78a08 - 0x1d78a34
void sub_01D78A08_0x1d78a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78A08_0x1d78a08");
#endif

    ctx->pc = 0x1d78a08u;

    // 0x1d78a08: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d78a08u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d78a0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d78a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d78a10: 0x25efd0b8  addiu       $t7, $t7, -0x2F48
    ctx->pc = 0x1d78a10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955192));
    // 0x1d78a14: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d78a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d78a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78A18u;
        // 0x1d78a1c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D78A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D78A20u;
    // 0x1d78a20: 0x0  nop
    ctx->pc = 0x1d78a20u;
    // NOP
    // 0x1d78a24: 0x0  nop
    ctx->pc = 0x1d78a24u;
    // NOP
    // 0x1d78a28: 0x0  nop
    ctx->pc = 0x1d78a28u;
    // NOP
    // 0x1d78a2c: 0x0  nop
    ctx->pc = 0x1d78a2cu;
    // NOP
    // 0x1d78a30: 0x0  nop
    ctx->pc = 0x1d78a30u;
    // NOP
    ctx->pc = 0x1d78a34u;
}
