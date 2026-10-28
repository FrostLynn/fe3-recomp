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

// Function: sub_01D35750
// Address: 0x1d35750 - 0x1d35780
void sub_01D35750_0x1d35750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35750_0x1d35750");
#endif

    ctx->pc = 0x1d35750u;

    // 0x1d35750: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d35750u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d35754: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D35754u;
    {
        const bool branch_taken_0x1d35754 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35754u;
        // 0x1d35758: 0x3c0e01d3  lui         $t6, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)467 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35754) {
            ctx->pc = 0x1D357C8u;
            return;
        }
    }
    ctx->pc = 0x1D3575Cu;
    // 0x1d3575c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d3575cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d35760: 0x25ce619c  addiu       $t6, $t6, 0x619C
    ctx->pc = 0x1d35760u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 24988));
    // 0x1d35764: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d35764u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d35768: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d35768u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3576c: 0x1a00008  jr          $t5
    ctx->pc = 0x1D3576Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D35774u: goto label_1d35774;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3576Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D35774u;
label_1d35774:
    // 0x1d35774: 0x3c0f01d4  lui         $t7, 0x1D4
    ctx->pc = 0x1d35774u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)468 << 16));
    // 0x1d35778: 0x3e00008  jr          $ra
    ctx->pc = 0x1D35778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35778u;
        // 0x1d3577c: 0x25e28480  addiu       $v0, $t7, -0x7B80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294935680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D35778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D35780u;
}
