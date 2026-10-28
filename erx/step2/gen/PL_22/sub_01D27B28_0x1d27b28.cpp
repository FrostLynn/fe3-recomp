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

// Function: sub_01D27B28
// Address: 0x1d27b28 - 0x1d27b50
void sub_01D27B28_0x1d27b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27B28_0x1d27b28");
#endif

    switch (ctx->pc) {
        case 0x1d27b3cu: goto label_1d27b3c;
        default: break;
    }

    ctx->pc = 0x1d27b28u;

    // 0x1d27b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d27b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d27b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d27b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d27b30: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d27b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d27b34: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27B34u;
    SET_GPR_U32(ctx, 31, 0x1D27B3Cu);
    ctx->pc = 0x1D27B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27B34u;
    // 0x1d27b38: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27B34u, 0x1D27B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27B3Cu;
label_1d27b3c:
    // 0x1d27b3c: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1d27b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1d27b40: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d27b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d27b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d27b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27B48u;
        // 0x1d27b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27B50u;
}
