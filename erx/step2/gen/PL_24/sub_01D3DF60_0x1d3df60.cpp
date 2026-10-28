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

// Function: sub_01D3DF60
// Address: 0x1d3df60 - 0x1d3df88
void sub_01D3DF60_0x1d3df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3DF60_0x1d3df60");
#endif

    switch (ctx->pc) {
        case 0x1d3df74u: goto label_1d3df74;
        default: break;
    }

    ctx->pc = 0x1d3df60u;

    // 0x1d3df60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3df64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3df68: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3df68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3df6c: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DF6Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DF74u);
    ctx->pc = 0x1D3DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DF6Cu;
    // 0x1d3df70: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DF6Cu, 0x1D3DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DF74u;
label_1d3df74:
    // 0x1d3df74: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1d3df74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1d3df78: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d3df78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d3df7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3df7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3df80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DF80u;
        // 0x1d3df84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DF88u;
}
