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

// Function: sub_01DC49C8
// Address: 0x1dc49c8 - 0x1dc49f0
void sub_01DC49C8_0x1dc49c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC49C8_0x1dc49c8");
#endif

    ctx->pc = 0x1dc49c8u;

    // 0x1dc49c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc49c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc49cc: 0x8f8f805c  lw          $t7, -0x7FA4($gp)
    ctx->pc = 0x1dc49ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc49d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc49d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc49d4: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC49D4u;
    {
        const bool branch_taken_0x1dc49d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC49D4u;
        // 0x1dc49d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc49d4) {
            ctx->pc = 0x1DC49E4u;
            goto label_1dc49e4;
        }
    }
    ctx->pc = 0x1DC49DCu;
    // 0x1dc49dc: 0x87710c8  j           func_1DC4320
    ctx->pc = 0x1DC49DCu;
    ctx->pc = 0x1DC49E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC49DCu;
    // 0x1dc49e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4320u;
    sub_01DC4320_0x1dc4320(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC49E4u;
label_1dc49e4:
    // 0x1dc49e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC49E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC49E4u;
        // 0x1dc49e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC49E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC49ECu;
    // 0x1dc49ec: 0x0  nop
    ctx->pc = 0x1dc49ecu;
    // NOP
    ctx->pc = 0x1dc49f0u;
}
