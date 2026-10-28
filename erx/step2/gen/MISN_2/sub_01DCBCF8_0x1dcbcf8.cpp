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

// Function: sub_01DCBCF8
// Address: 0x1dcbcf8 - 0x1dcbd18
void sub_01DCBCF8_0x1dcbcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBCF8_0x1dcbcf8");
#endif

    switch (ctx->pc) {
        case 0x1dcbd0cu: goto label_1dcbd0c;
        default: break;
    }

    ctx->pc = 0x1dcbcf8u;

    // 0x1dcbcf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcbcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcbcfc: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dcbcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dcbd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcbd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcbd04: 0xc772eea  jal         func_1DCBBA8
    ctx->pc = 0x1DCBD04u;
    SET_GPR_U32(ctx, 31, 0x1DCBD0Cu);
    ctx->pc = 0x1DCBD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBD04u;
    // 0x1dcbd08: 0x2484cc30  addiu       $a0, $a0, -0x33D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBBA8u, 0x1DCBD04u, 0x1DCBD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBD0Cu;
label_1dcbd0c:
    // 0x1dcbd0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcbd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcbd10: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBD10u;
        // 0x1dcbd14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBD18u;
}
