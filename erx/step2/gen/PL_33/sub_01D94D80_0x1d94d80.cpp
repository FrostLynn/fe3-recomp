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

// Function: sub_01D94D80
// Address: 0x1d94d80 - 0x1d94da8
void sub_01D94D80_0x1d94d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D94D80_0x1d94d80");
#endif

    switch (ctx->pc) {
        case 0x1d94d94u: goto label_1d94d94;
        default: break;
    }

    ctx->pc = 0x1d94d80u;

    // 0x1d94d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d94d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d94d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d94d88: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d94d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d94d8c: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94D8Cu;
    SET_GPR_U32(ctx, 31, 0x1D94D94u);
    ctx->pc = 0x1D94D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94D8Cu;
    // 0x1d94d90: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94D8Cu, 0x1D94D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94D94u;
label_1d94d94:
    // 0x1d94d94: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1d94d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1d94d98: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d94d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d94d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d94d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94da0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94DA0u;
        // 0x1d94da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94DA8u;
}
