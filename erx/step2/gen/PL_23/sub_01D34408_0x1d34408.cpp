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

// Function: sub_01D34408
// Address: 0x1d34408 - 0x1d34430
void sub_01D34408_0x1d34408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34408_0x1d34408");
#endif

    switch (ctx->pc) {
        case 0x1d3441cu: goto label_1d3441c;
        default: break;
    }

    ctx->pc = 0x1d34408u;

    // 0x1d34408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d34408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3440c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3440cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d34410: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d34410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d34414: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D34414u;
    SET_GPR_U32(ctx, 31, 0x1D3441Cu);
    ctx->pc = 0x1D34418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34414u;
    // 0x1d34418: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D34414u, 0x1D3441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3441Cu;
label_1d3441c:
    // 0x1d3441c: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1d3441cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1d34420: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d34420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d34424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d34424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34428: 0x3e00008  jr          $ra
    ctx->pc = 0x1D34428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34428u;
        // 0x1d3442c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34430u;
}
