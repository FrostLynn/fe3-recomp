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

// Function: sub_01DCA498
// Address: 0x1dca498 - 0x1dca4b8
void sub_01DCA498_0x1dca498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCA498_0x1dca498");
#endif

    switch (ctx->pc) {
        case 0x1dca4acu: goto label_1dca4ac;
        default: break;
    }

    ctx->pc = 0x1dca498u;

    // 0x1dca498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dca498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dca49c: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dca49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dca4a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dca4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dca4a4: 0xc7728de  jal         func_1DCA378
    ctx->pc = 0x1DCA4A4u;
    SET_GPR_U32(ctx, 31, 0x1DCA4ACu);
    ctx->pc = 0x1DCA4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA4A4u;
    // 0x1dca4a8: 0x2484ad30  addiu       $a0, $a0, -0x52D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCA378u, 0x1DCA4A4u, 0x1DCA4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA4ACu;
label_1dca4ac:
    // 0x1dca4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dca4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dca4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA4B0u;
        // 0x1dca4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCA4B8u;
}
