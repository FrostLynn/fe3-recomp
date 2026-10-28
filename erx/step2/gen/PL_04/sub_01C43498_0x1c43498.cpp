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

// Function: sub_01C43498
// Address: 0x1c43498 - 0x1c434c0
void sub_01C43498_0x1c43498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C43498_0x1c43498");
#endif

    switch (ctx->pc) {
        case 0x1c434acu: goto label_1c434ac;
        default: break;
    }

    ctx->pc = 0x1c43498u;

    // 0x1c43498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c43498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4349c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c434a0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c434a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c434a4: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C434A4u;
    SET_GPR_U32(ctx, 31, 0x1C434ACu);
    ctx->pc = 0x1C434A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C434A4u;
    // 0x1c434a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C434A4u, 0x1C434ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C434ACu;
label_1c434ac:
    // 0x1c434ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c434acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c434b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c434b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c434b4: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1c434b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c434b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C434B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C434BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C434B8u;
        // 0x1c434bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C434B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C434C0u;
}
