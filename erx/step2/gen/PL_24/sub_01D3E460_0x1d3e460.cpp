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

// Function: sub_01D3E460
// Address: 0x1d3e460 - 0x1d3e48c
void sub_01D3E460_0x1d3e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3E460_0x1d3e460");
#endif

    ctx->pc = 0x1d3e460u;

    // 0x1d3e460: 0x3c0f01d4  lui         $t7, 0x1D4
    ctx->pc = 0x1d3e460u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)468 << 16));
    // 0x1d3e464: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d3e464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d3e468: 0x25ef5708  addiu       $t7, $t7, 0x5708
    ctx->pc = 0x1d3e468u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22280));
    // 0x1d3e46c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d3e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d3e470: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E470u;
        // 0x1d3e474: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E478u;
    // 0x1d3e478: 0x0  nop
    ctx->pc = 0x1d3e478u;
    // NOP
    // 0x1d3e47c: 0x0  nop
    ctx->pc = 0x1d3e47cu;
    // NOP
    // 0x1d3e480: 0x0  nop
    ctx->pc = 0x1d3e480u;
    // NOP
    // 0x1d3e484: 0x0  nop
    ctx->pc = 0x1d3e484u;
    // NOP
    // 0x1d3e488: 0x0  nop
    ctx->pc = 0x1d3e488u;
    // NOP
    ctx->pc = 0x1d3e48cu;
}
